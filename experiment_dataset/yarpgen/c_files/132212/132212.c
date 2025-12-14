/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 & (2147483647 ^ var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = -83;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((((((arr_5 [i_2 - 2]) ? -78 : 77))) - 61)))));
                            var_22 = arr_6 [i_0] [10] [i_1] [i_3];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_23 = var_14;
                                arr_17 [i_1] [11] [i_1] [i_1] = ((((min(65535, var_5))) ? ((var_2 >> ((((var_11 << (var_12 - 17390))) - 34158564)))) : (-2147483647 - 1)));
                                var_24 = var_17;
                                var_25 = (min(var_25, 75));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [1] [i_1] [i_7] [i_8] = 2247475766;
                            var_26 = (((arr_22 [i_0] [i_1] [1]) != (arr_20 [i_1] [i_1] [i_7] [16])));
                            arr_25 [i_0] [i_1] [i_1] [i_8] = ((arr_6 [i_0] [4] [i_1] [i_8]) ? -287950299 : (!-65));
                            arr_26 [i_0] [i_1] [i_1] [i_7] [i_1] = (min(50367, 64));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
