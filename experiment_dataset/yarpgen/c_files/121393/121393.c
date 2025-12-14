/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = ((11 ? 4431274824022980285 : -3361411760121440225));
                            arr_13 [i_0] [i_1] [i_2] [i_0] = -var_3;
                            arr_14 [i_0] [12] [i_1] [i_0] [12] = var_3;
                            var_17 *= (!9223372036854775807);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_12, (((!(((3361411760121440224 ? 19537 : 3851199974))))))));
                                var_19 = (((((arr_0 [i_1]) <= (arr_0 [i_5]))) ? ((var_10 ? var_7 : (~var_4))) : (var_10 ^ var_7)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 185014654;
    var_21 = -9223372036854775807;
    #pragma endscop
}
