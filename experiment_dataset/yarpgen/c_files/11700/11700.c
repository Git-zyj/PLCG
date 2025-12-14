/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max((max(var_3, var_3)), (!var_2)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(9223372036854775807, 31642))) ? (min(-31643, (arr_1 [i_0] [i_0]))) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [13]) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [0] [i_1] [i_0] [13] [i_3] = max((((arr_5 [i_0] [i_1] [i_3]) / (min(var_7, var_8)))), (arr_8 [i_0] [i_0] [i_0]));
                        arr_11 [i_0] [13] [i_0] [i_0] [i_0] = ((min((((var_7 ? 131072 : -31643))), (arr_7 [i_0] [i_0] [10]))) / (((var_1 == -32766) ? (arr_1 [i_0] [19]) : ((var_2 ? 22308 : (arr_4 [i_0] [i_3]))))));
                        var_11 = (((min((max(var_3, 264241152)), (((-(arr_6 [19] [i_0] [i_2])))))) == ((31642 ? var_6 : (((max((arr_6 [i_0] [i_0] [14]), 31641))))))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_12 = var_8;
                        arr_14 [i_0] [i_0] = var_9;
                        arr_15 [i_4] [i_0] [i_0] = (((((arr_5 [i_0] [7] [i_2]) ? (arr_5 [i_0] [i_2] [i_4]) : (arr_4 [i_0] [i_4]))) ^ (max((arr_4 [i_0] [i_0]), (arr_5 [i_0] [i_2] [i_0])))));

                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = var_8;
                            arr_19 [i_0] = (arr_9 [i_0] [i_0] [10]);
                            arr_20 [16] [1] [2] [i_0] [13] [i_2] [16] = (arr_17 [13] [5] [9] [6] [18] [13]);
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [12] [12] [16] = (((((3505 ? -1 : 5509497210013002065)))) ? (~var_3) : var_9);
                            var_13 -= ((((min(126100789566373888, (arr_4 [i_6] [i_6])))) ? (arr_9 [16] [i_4] [16]) : ((~(arr_5 [i_4] [i_2] [i_6])))));
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            arr_27 [i_0] [7] [17] [11] [i_0] [i_0] [i_0] = (min((min((arr_0 [i_7 - 2]), (arr_21 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1]))), var_1));
                            arr_28 [i_2] [i_0] [16] [20] [i_2] = ((((274877906943 ? (arr_25 [i_0] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 2]) : (max((arr_9 [0] [i_0] [0]), var_5))))) ? (~var_4) : (((var_3 ? var_8 : var_5))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_32 [i_8] [i_0] [0] [12] [i_0] [i_0] = 2096896;
                            var_14 = (arr_0 [6]);
                        }
                    }
                    arr_33 [11] [i_0] = (~(min((arr_4 [i_0] [10]), -1)));
                }
            }
        }
    }
    #pragma endscop
}
