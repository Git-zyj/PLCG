/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((var_13 ? -21191 : ((-((var_9 ? -21856 : var_8))))));
    var_15 = ((min(var_9, 2956)));
    var_16 = 18722;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (~2952);
            var_17 = (((arr_2 [i_0 - 1] [i_0] [i_0 + 2]) ? ((1204877952 ? 345767574 : -6350)) : (arr_1 [i_0])));
            var_18 = (min(var_18, (arr_2 [i_0] [i_0] [i_1])));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            var_19 &= max(((((max((arr_8 [0]), var_0))) ? (arr_7 [6] [10]) : -22320)), (arr_8 [2]));
            arr_9 [i_0 + 1] [i_0] = ((((((arr_5 [8] [i_0]) ? 2956 : 21519))) ? -2962 : 3327675240));
        }
        arr_10 [i_0] = (max((arr_3 [i_0] [i_0 + 2]), (((3327675247 < (arr_7 [i_0] [i_0 + 1]))))));
        arr_11 [i_0] = ((2529039677 ? 0 : ((((!((max(32749, 2985848756)))))))));
        var_20 = ((((min(var_1, ((var_5 ? (arr_1 [i_0]) : var_12))))) ? (((arr_0 [i_0]) % (arr_2 [i_0 + 1] [i_0 + 2] [2]))) : (((((arr_1 [i_0]) == 22017)) ? 1891392501 : (min(2985848756, var_0))))));
        arr_12 [i_0] [i_0] = arr_6 [i_0] [5] [i_0];
    }
    #pragma endscop
}
