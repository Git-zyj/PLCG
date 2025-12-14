/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-1 / (32350 / 255))));
    var_13 = ((-(~var_3)));
    var_14 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, 1));
                            var_16 = (((((arr_1 [i_0]) ? var_7 : (max(var_9, var_3)))) + ((var_0 ^ (((2147483647 ? (arr_8 [i_3] [i_0] [i_1] [i_0]) : -32348)))))));
                        }
                    }
                }
                var_17 *= ((255 ? (((-2147483641 & ((5 ? (-9223372036854775807 - 1) : 240))))) : var_8));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((((((~(arr_6 [i_4] [20] [i_6 + 1])))) ? (max(0, var_3)) : (arr_3 [i_1] [i_1 + 1] [i_4 + 3])))) ? ((((var_0 * (arr_7 [i_5] [7]))) * (((max(-32328, 13)))))) : (((max(28, 6))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_5] [i_6] [i_1] = var_5;
                                var_19 = var_7;
                                arr_18 [8] [i_1] [i_0] [i_4] [i_4 + 3] [9] [i_6] = ((((min(6599425416307060124, (arr_3 [i_1 + 2] [i_4 + 3] [i_5])))) ? (arr_11 [i_1 + 2] [i_4 + 2] [i_5] [i_6]) : (max(243, (-6599425416307060123 ^ 9223372036854775807)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
