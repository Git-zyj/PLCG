/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_0;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 ^= 16495859729105306788;
                    var_15 = (min(var_15, (arr_6 [i_0])));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_16 ^= (min((((4095 / 4095) % -1345971349)), 61441));
                    arr_10 [i_0] [i_1] [i_1] [0] = (((((((-(arr_8 [i_0] [i_0] [i_0] [i_0]))) % var_4))) ? 4095 : (((1 & var_6) + ((4094 ? 4095 : -111714205))))));
                    var_17 = (111714206 >= ((~((max(113, var_8))))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_18 = (min((max(var_1, (arr_2 [i_1 + 1] [i_1]))), var_1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [10] [i_5] [i_0] = (min((min(4083, var_13)), ((-((var_5 ? var_7 : var_3))))));
                                var_19 = ((!((max((arr_18 [i_1] [i_1 + 3] [i_4] [1] [i_6] [i_6 - 2]), ((((arr_11 [i_4] [i_4]) || (arr_9 [i_0] [1] [i_5] [i_6])))))))));
                                arr_20 [7] [i_0] [15] [i_0] [7] [2] = (max((max((!61440), (var_12 * var_9))), (61454 || 4095)));
                                arr_21 [i_4] [i_1] [i_4] [i_4] [i_4] = (((((((4081 & (arr_12 [i_4] [i_5] [i_4] [i_1]))) | (61445 & 61435)))) ? var_7 : 4095));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
