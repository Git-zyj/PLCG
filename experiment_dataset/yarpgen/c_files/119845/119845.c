/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (arr_1 [i_0]);
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (((~18194557830492856751) ^ (((min((min(4088, -23)), -41))))));
                    var_14 *= (1807759506 << 1);
                }
            }
        }
        var_15 = ((((((59020 <= ((1 >> (((arr_4 [i_0] [i_0] [i_0]) + 2001429324)))))))) + (min(127, 2487207790))));
        var_16 = ((!(!6516)));
        arr_8 [2] &= (max(2487207790, ((-57 ? 5814 : 3864131631))));
    }
    var_17 = (max(var_17, 9778242352140814458));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_18 -= arr_1 [i_3];
                var_19 = var_12;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_20 [i_6] [i_6] [i_5] = arr_12 [i_3] [i_3];
                                var_20 = (((min((arr_12 [i_5] [i_6]), 28))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
