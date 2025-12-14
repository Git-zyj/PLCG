/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -93;
        arr_4 [i_0] = (max(((max(var_1, var_9))), (min(2147483647, 784899389))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_0] [i_2] [i_0] [i_0] = (max((min(0, 16384)), (((~(var_5 | 1))))));
                                arr_18 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] = (max(8315493757477367231, var_5));
                            }
                        }
                    }
                    arr_19 [15] [i_0] = (1 % 1);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_14 ^= ((((var_1 & (max(190, -1138790517104440500)))) >> (((((-784899390 + 2147483647) << (17293822569102704640 - 17293822569102704640))) - 1362584250))));
        var_15 = ((((~(255 * 18254))) >= ((min((1 != 1), 15)))));
        var_16 = var_13;
        var_17 &= ((-(20877 ^ 251)));
    }
    var_18 = min((min((~217), (~1))), -var_0);
    #pragma endscop
}
