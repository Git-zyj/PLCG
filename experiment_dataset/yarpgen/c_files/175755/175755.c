/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((var_5 ? ((1 ? ((max(8441, 9069))) : var_0)) : (((var_4 == ((var_3 ? 9161 : var_3)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        var_13 = (((!6429) ? (arr_2 [i_0] [i_0]) : 12));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (max(((0 ? (arr_5 [i_1 + 2]) : (arr_4 [i_1 - 2]))), 10));
        var_14 = ((((0 != (arr_5 [i_1 + 4]))) ? (arr_4 [i_1 - 2]) : (((arr_5 [i_1 - 1]) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 + 3])))));
        var_15 = 731178930;
    }
    var_16 = (min(var_16, 3676038607));
    #pragma endscop
}
