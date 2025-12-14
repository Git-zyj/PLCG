/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 *= (~1);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_0] [i_3] [i_2] [4] [i_0] = ((~(arr_5 [i_0])));
                            arr_14 [i_0] [i_1 + 1] [i_1 + 2] [i_0] [i_3] [i_4 - 3] = ((~(~var_3)));
                            var_18 = var_9;
                            var_19 = -var_11;
                        }
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            var_20 = (max(var_20, (!-var_14)));
                            var_21 = var_1;
                            arr_17 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = (~-var_2);
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_22 = (((!(-9223372036854775807 - 1))));
                            arr_22 [i_0] [i_1 + 1] [11] [i_3] [i_0] = ((-(arr_10 [i_6] [4] [i_0] [i_3] [i_3])));
                        }
                        var_23 *= var_3;
                        arr_23 [2] [i_0] [i_0] [1] = var_5;
                        var_24 *= (~27456);
                    }
                }
            }
        }
    }
    #pragma endscop
}
