/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), (max((~230), ((0 ? 25 : 0))))));
        var_16 = (min(var_16, (((155 | (((111 && ((231 || (arr_1 [i_0])))))))))));
        arr_3 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [8] [i_1] [i_2] |= (((1 < (458537343 ^ 9))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [1] = (~127);
                                var_17 = (((arr_8 [4] [i_2] [4]) == (((54 | 67108832) & (arr_9 [1])))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [9] [i_0] = (((arr_8 [i_4 - 2] [i_4 + 3] [i_4]) ? (max((arr_0 [10] [i_4 + 2]), (arr_8 [i_4 - 1] [i_4 - 1] [2]))) : ((231 ? 229 : -46))));
                                var_18 = (min(var_18, (229 - 441704891)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, ((max((((!172) + (var_1 >= var_1))), ((min(var_2, (!-1652078600)))))))));
    var_20 = ((var_15 ? (((min(1, 3680611756)))) : 1));
    var_21 = var_0;
    #pragma endscop
}
