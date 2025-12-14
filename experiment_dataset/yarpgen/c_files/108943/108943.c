/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] = -923823860;
                            var_19 = -43;
                            arr_12 [i_0] [i_0] = (min((var_9 <= var_10), (-4400520721208115067 / var_17)));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_0] = ((~(25 >> var_2)));
                                var_20 = (max(4011636311, 4294967292));
                                var_21 = 18330;
                            }
                            var_22 = (max(var_22, 343713392));
                        }
                    }
                }
                var_23 -= (((min((-18330 | -58), 99)) * (((!((min(43, var_13))))))));
            }
        }
    }
    #pragma endscop
}
