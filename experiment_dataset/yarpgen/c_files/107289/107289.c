/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_1));
    var_12 = var_7;
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (-9223372036854775807 - 1)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_0] [14] [i_0] [10] = 549755813887;
                        var_15 = 9223372036854775807;
                        var_16 = 9223372036854775807;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_17 = -590385587636377740;
                        var_18 = 9223372036854775807;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_5] = -8824791014288302753;
                        var_19 -= -1;
                        arr_15 [i_0] = -813270726830800908;
                        var_20 = 3420059986107637471;
                        arr_16 [i_0] [i_0] [3] [15] [i_5] = (-9223372036854775807 - 1);
                    }
                    var_21 = -8872443753030107507;
                    arr_17 [14] [14] [21] = -4873675003995186656;
                }
            }
        }
        arr_18 [i_0] = -4953894291755088185;
        arr_19 [i_0] = -4953894291755088172;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_22 = 6549388152364354597;
            arr_22 [i_6] = 3947383922230146668;
            var_23 = 3420059986107637471;
        }
    }
    #pragma endscop
}
