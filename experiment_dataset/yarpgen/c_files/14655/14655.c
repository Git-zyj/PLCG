/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [4] = var_12;
                var_14 = (((((var_7 >> (1037693724 - 1037693717)))) ? ((var_7 ? 5 : var_5)) : ((min(var_13, var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = ((((((-9223372036854775807 - 1) ? 16777215 : 12124))) ? ((((!(-358998752 < -1387268329))))) : (min(201, var_7))));
                            var_16 -= ((1387268340 ? ((-23676 ? -32755 : var_6)) : ((var_3 ? 32657 : 255))));
                            var_17 += (min((~var_6), (65533 && var_8)));
                        }
                    }
                }
                var_18 = ((21 ? (((-1387268338 / (-2147483647 - 1)))) : (min(var_8, 2737650286))));
                arr_10 [i_1] = ((~((var_12 ? ((var_9 ? 65535 : var_7)) : (~-2147483632)))));
            }
        }
    }
    var_19 = (min(var_19, var_6));
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    var_21 = (~var_3);
                    arr_18 [i_5] [22] &= ((-(min(var_10, ((max(var_4, var_11)))))));
                    var_22 -= (((((183842191 << (var_12 - 821665746)))) - (max(var_12, var_7))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_23 *= var_12;
                var_24 = (min(((-((19602 ? var_9 : var_13)))), ((max(var_13, ((5266636722024748000 ? 30559 : -2147483623)))))));
                var_25 = ((-(((((var_12 ? var_5 : var_6))) ? 2147483632 : ((var_8 ? var_3 : var_6))))));
            }
        }
    }
    #pragma endscop
}
