/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [14] = 8697244582139087559;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_20 = (arr_1 [i_0]);
                    var_21 ^= var_2;
                    arr_9 [i_0] = (arr_5 [i_0] [i_1]);
                    var_22 ^= -27;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_14 [i_0] = var_7;
                    var_23 = (arr_3 [15]);
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_24 += var_18;

        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_25 = (max(((-(arr_2 [i_5]))), 97));
            var_26 = var_17;
            var_27 *= (arr_3 [i_4 + 1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_28 = ((-((~(arr_13 [i_4] [i_4 + 1] [1] [i_5])))));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_29 = 162;
                            arr_28 [i_4 - 2] [i_5] [i_6] [i_7] [i_5] = (arr_27 [i_4] [i_4] [i_4] [i_4 - 2] [i_5 - 2] [i_8]);
                            var_30 = var_5;
                            arr_29 [i_5] = arr_22 [i_4 - 1];
                        }
                        var_31 = (-((-(~11918664069977257847))));
                    }
                }
            }
        }
        var_32 -= (-(arr_24 [6] [i_4] [10] [i_4 - 2]));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_33 = 28;
        var_34 = 4;
    }
    var_35 = var_10;
    #pragma endscop
}
