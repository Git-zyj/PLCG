/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (max((max(((var_11 ? 7 : var_8)), var_2)), var_8));
    var_13 = (-29 % 32606);
    var_14 = (((15885695047542993867 >> (455444262167484751 - 455444262167484745))) < (((16 ? ((min(1, 32956))) : var_9))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [5] = 120;
        arr_4 [5] = (((min((((arr_0 [20]) ? var_11 : 37)), 902858208)) - 236));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_15 = var_5;
        var_16 *= arr_6 [i_1 - 3];
        arr_7 [0] = min(var_8, -var_0);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_17 = (((((!(arr_0 [i_2])))) % var_11));
            var_18 = (max(var_18, ((((arr_2 [i_2]) ? (arr_2 [i_2]) : (arr_2 [i_2]))))));
            arr_12 [i_2] [i_3] [6] = (((((var_10 << (((((arr_11 [1]) + 109)) - 21))))) ? (((arr_8 [i_2]) ? 15885695047542993867 : (arr_11 [i_2]))) : (arr_1 [i_2])));
        }
        var_19 = -7040278561687158438;
    }
    #pragma endscop
}
