/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (arr_2 [i_0] [i_0]);
        var_12 = (min(((((min(var_0, var_1))) ? (~var_9) : (min((arr_0 [2]), (arr_1 [i_0]))))), (arr_1 [i_0])));
        var_13 = (((max(var_9, (min(var_6, (arr_2 [3] [i_0])))))) ? (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : ((15571648630880348707 ? var_0 : var_4)))) : ((~(min((arr_0 [i_0]), var_9)))));
        var_14 = var_0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = var_4;
        arr_8 [i_1] [i_1] = (((((arr_3 [5]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? ((min(var_3, (arr_3 [i_1])))) : (min(var_1, (arr_3 [i_1]))));
        arr_9 [8] = var_5;
        var_15 = ((min((arr_6 [i_1] [i_1]), var_2)));
    }
    var_16 |= (((-var_5 ? (var_2 | var_3) : ((2875095442829202923 ? var_4 : var_2)))));

    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        var_17 &= (((((-(arr_10 [i_2 + 3])))) ? (min((arr_10 [i_2 - 1]), (arr_10 [i_2 + 1]))) : (((((((var_7 ? var_5 : (arr_11 [i_2 - 4] [i_2 - 4])))) <= ((var_5 + (arr_10 [i_2])))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_18 = ((((((arr_18 [i_2] [i_3] [i_4] [i_4]) ? ((min(var_9, var_7))) : (var_8 | var_2)))) ? ((((min(-952322872, (arr_19 [i_2 - 1] [i_3] [i_3] [i_5] [i_4]))) <= var_9))) : (((arr_19 [i_2] [i_2] [i_3] [i_5] [14]) ? (arr_15 [20] [20] [i_3] [i_5]) : ((((arr_13 [i_4]) != (arr_18 [i_2] [i_3] [i_4] [i_2]))))))));
                        arr_20 [i_5] [i_4] [i_5] [i_5] |= (arr_16 [i_3] [i_3] [i_5]);
                        var_19 = var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}
