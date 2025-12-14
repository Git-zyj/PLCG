/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [11] [i_0] [4] [i_0] = var_12;
                            arr_12 [i_0] [i_1] [i_0] = (17179869183 == -17179869158);
                        }
                    }
                }
                var_18 = (max((((((var_12 ? var_14 : var_15))) + (var_13 / var_9))), ((max(((1 ? var_9 : var_2)), (max(var_15, var_2)))))));
                var_19 *= 9223372036854775807;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_20 &= (var_5 && var_8);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_21 = (19 ? ((var_5 ? var_6 : var_17)) : -var_9);
                            var_22 = (1 & 2147483646);
                        }
                    }
                }
                arr_23 [i_4] [i_4] [i_4] = (((var_16 ? ((var_6 ? var_1 : 1)) : (~var_15))) * (!-var_14));
            }
        }
    }
    var_23 &= ((((((max(9223372036854775807, 1))) != ((1244778228866079259 ? 9408861583429612772 : 1)))) ? 1 : (1244778228866079278 * 8242543251319416514)));

    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_24 = ((var_10 & (var_12 || var_7)));
        var_25 = (max((((~((10204200822390135102 ? var_14 : 1))))), (((((-17179869158 ? var_11 : var_14))) ? ((min(-94, var_7))) : (min(6420617972608122761, 9223372036854775807))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_26 = ((-((var_14 ? 1 : 3))));
        var_27 = (17179869178 ^ 2147483646);
        arr_29 [i_9] [i_9] = var_17;
        arr_30 [i_9] [i_9] = ((var_1 + (0 != -32761)));
    }
    #pragma endscop
}
