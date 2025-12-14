/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = 13261271240463869668;
                        var_16 = ((-(arr_10 [i_1] [i_0 + 1] [i_0] [i_1] [i_1] [i_3])));
                        var_17 = (~var_1);
                        var_18 = (~(((arr_3 [i_2]) ? var_3 : -1)));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_19 = min(((~((14 ? 1 : 4294967295)))), (arr_4 [i_1]));
                        var_20 = (max(15, 9089621402969227802));
                        var_21 = ((((max(14, 8))) | 1048575));
                        var_22 ^= (max((arr_7 [i_1] [i_1] [i_1]), (min((((arr_8 [i_0] [i_2] [i_4]) ? var_12 : var_8)), -var_12))));
                    }
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            arr_20 [5] [i_1] = (min(((max(8, 1))), (max(((max(16797, var_11))), (arr_3 [i_0])))));
                            arr_21 [i_0 + 2] [4] [i_0 + 2] [i_5] [i_1] [i_0] = (min(1048566, 3));
                        }
                        var_23 = (arr_6 [i_1]);
                        var_24 = (min((max((arr_6 [i_1]), (arr_13 [i_1] [i_0 - 1] [i_5 + 2] [i_0 - 1] [i_0 - 1]))), (arr_6 [i_1])));
                    }
                    var_25 = (((arr_17 [8] [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_2]) | var_12));
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_26 = (((max((arr_14 [i_0 + 1] [i_1] [4] [i_8] [i_8]), (arr_4 [i_1]))) > (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_8] [i_8])));
                            arr_28 [i_1] = (((((((-1 & -116) + 2147483647)) << (2098210161 - 2098210161)))) - (((((117 ? -1853127227 : (arr_16 [i_0] [i_1] [i_1] [i_8 - 4] [i_7] [0])))) ? (~16888649826621646261) : ((max((arr_15 [i_0] [i_1]), var_7))))));
                            arr_29 [i_1] [i_1] [3] [0] [i_1] [3] = (((max((arr_7 [2] [i_0 + 1] [i_0]), (~var_5))) >= (arr_16 [i_8 - 4] [i_7 - 2] [i_1] [i_1] [i_0] [i_0 + 2])));
                            var_27 = (max(17179869183, 62983));
                        }
                    }
                }
                var_28 = (arr_16 [10] [10] [i_1] [i_1] [i_0 + 2] [i_1]);
                var_29 = ((max((arr_5 [i_0 + 2]), (arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 2]))));
                var_30 = (min(13410320253939801575, 2717128708));
            }
        }
    }
    var_31 = ((((min(123, -1853127223))) != var_3));
    #pragma endscop
}
