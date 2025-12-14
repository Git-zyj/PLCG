/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min(-834178004094906474, var_13));
    var_15 = var_3;
    var_16 += (!var_10);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (((max(((var_12 ? 3168584709 : (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1] [i_0 - 2]))), ((min(var_10, (arr_12 [2])))))) < ((((arr_2 [i_2 - 1] [i_3 - 1]) ? (arr_2 [i_2 - 2] [i_3 - 1]) : (arr_2 [i_2 + 2] [i_3 - 1]))))));
                                arr_15 [i_0 - 1] [i_1] [i_1] [i_2 + 1] [i_1] [1] [i_4] = (min((arr_1 [i_1] [i_0]), ((((arr_11 [i_0 + 1] [i_2 - 2] [i_3] [i_1]) ^ (arr_11 [1] [i_2 - 2] [1] [i_1]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_18 = ((-((-(arr_17 [i_0] [i_2 - 2])))));
                        var_19 = ((3168584709 ? 65535 : 168021881));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_20 ^= (min(168021881, 1126382565));
                        arr_21 [i_0] [i_1] [i_1] [i_6] = (((arr_5 [1] [i_1] [i_1]) * ((((min((arr_18 [i_0] [i_0 - 2]), 1)) || (((4126945409 % (arr_14 [9] [i_0] [i_2 - 1] [i_6] [i_2 - 1])))))))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_21 = (max((min((((4002855156 ? 4 : 0))), (arr_19 [i_0] [8] [8] [8]))), 1));
                        arr_25 [i_1] [4] [i_1] [i_1] [i_7] [i_1] = (min(((-((var_5 ? (arr_5 [i_0] [i_0 - 2] [i_0 - 2]) : (arr_6 [2] [i_1] [i_2] [i_7]))))), (((arr_13 [i_1] [i_0 + 1] [i_0] [i_0 - 2] [i_2 - 2]) ? (arr_13 [i_1] [i_0 - 1] [i_0] [i_0 + 1] [i_2 + 2]) : (arr_4 [i_0 + 1])))));
                    }
                    var_22 = (max((((arr_10 [i_2 - 2] [i_2] [i_2 + 1] [i_1]) >> (((arr_6 [i_0 + 1] [9] [i_0 + 1] [i_2 - 2]) - 50652)))), var_3));
                    var_23 = ((((((63 ? 1 : 25284))) && (arr_17 [i_0 - 1] [i_2 - 1]))));
                    var_24 -= (((((((max(9456390790934421830, (arr_13 [4] [i_0] [i_1] [4] [2])))) ? (48399 - var_11) : 4002855156))) ? (((((arr_8 [i_0 - 2] [10] [i_2 + 1] [i_2]) || -var_8)))) : ((17125 ? 10 : 0))));
                }
            }
        }
    }
    var_25 |= ((((max(var_3, (!1)))) << (!-93)));
    #pragma endscop
}
