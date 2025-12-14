/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_20 = (max(var_20, (!var_9)));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [14] [i_0] [i_0] = 127;
                            arr_14 [2] [i_0] [i_1] [10] [i_3] [i_0] = 61440;
                            var_21 = var_9;
                        }

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_22 = -1;
                            var_23 -= 1073741823;
                            var_24 = (-127 - 1);
                            arr_18 [i_5 + 1] [i_0] [8] [i_0] [i_0] = var_10;
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5 - 1] [i_0] = var_13;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_25 = (min(var_25, (max((max((min(0, var_1)), ((max(var_11, var_6))))), (((!((max(0, 0))))))))));
                            arr_23 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = (max(31, (~var_18)));
                            var_26 = var_9;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((min(127, (~var_14))), ((~(~65530)))));
                        }
                    }
                    arr_25 [i_0] [i_0] [i_0] = (min((-9223372036854775807 - 1), (max(0, (min(var_16, 0))))));
                    arr_26 [i_0] [i_0] [i_2] = min((max(var_10, -var_18)), (max(var_10, (~var_8))));
                }
            }
        }
    }
    var_27 = (min((min((~1), var_5)), 0));
    #pragma endscop
}
