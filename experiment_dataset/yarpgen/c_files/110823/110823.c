/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 1] [19] [i_0 - 1] [i_3] [i_4] [i_1] [6] = (((var_7 & var_5) >> (((((-3359819312957722361 + 9223372036854775807) >> (3359819312957722359 - 3359819312957722323))) - 85325908))));
                                var_14 = 0;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_15 ^= 16148;
                    var_16 ^= var_10;
                    arr_16 [i_0] [5] [i_5] = var_5;
                    var_17 *= ((var_4 + var_1) + var_2);
                    arr_17 [i_0] [i_1] [i_5] [i_1] = var_8;
                }
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    var_18 = (max(var_18, var_8));
                    var_19 -= 1;
                }
            }
        }
    }
    var_20 = var_7;
    var_21 ^= var_9;
    #pragma endscop
}
