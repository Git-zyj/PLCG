/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((-(min((min(15044, var_8)), ((var_10 ? var_11 : var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 |= ((0 ? 536870911 : (0 * -536870912)));
                                var_18 ^= ((min((((0 ? var_0 : var_10)), (min(137, 536870911))))));
                            }
                        }
                    }
                    var_19 = (((((((min(var_3, 2121901143))) ? var_3 : 118))) ? (max(723721737, 80)) : 146));
                    var_20 ^= ((((max(var_12, (max(4294967295, 40697))))) ? 1 : ((var_0 + (((min(var_10, 15044))))))));
                    var_21 *= (((4294967295 ? 134 : 131071)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_30 [20] [i_7] [i_9] [i_9] [i_9] = 15044;
                                arr_31 [i_5] [i_5] [i_7] [3] [i_7] [i_9] [i_9] = (59132 ? -40 : 6980446324650114959);
                            }
                        }
                    }
                    var_22 = (6480874113386252335 && 536870911);
                }
            }
        }
    }
    var_23 = ((var_5 ? var_2 : (0 * 1)));
    var_24 *= (min(var_11, ((-((187839955 ? 65535 : var_9))))));
    #pragma endscop
}
