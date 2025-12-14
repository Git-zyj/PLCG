/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_15 = (max(var_15, ((32 * (arr_1 [i_0])))));
        arr_2 [8] [i_0 - 1] = (max(-14533602262058053176, -223));
        arr_3 [i_0] = arr_0 [i_0 - 1];
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [20] = ((512 || (arr_5 [i_1 + 3])));
        arr_8 [i_1 - 2] [i_1] = 38;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_16 -= ((((~(((arr_10 [i_2] [20]) << (2216615441596416 - 2216615441596355)))))) ? (((arr_10 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : var_1)) : ((((!(arr_0 [i_2]))))));
        arr_11 [i_2] [5] = ((-(((arr_0 [i_2]) ? (arr_1 [i_2]) : (max((arr_1 [i_2]), (arr_10 [i_2] [i_2])))))));
        arr_12 [i_2] = (((24 || 5377) * -2048));
    }
    var_17 = (max((min(var_4, (~var_4))), var_9));
    var_18 = ((((((max(217, -2048))) > var_11)) ? ((var_4 ? var_6 : var_10)) : var_3));
    var_19 = (var_3 ? var_4 : (((((var_7 ? var_13 : var_6))) ? (~15964007793992744341) : (var_10 <= 11354849493174937987))));
    #pragma endscop
}
