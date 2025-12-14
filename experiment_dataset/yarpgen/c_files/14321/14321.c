/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((152 * ((-((2295080749 ? var_4 : var_9))))));
    var_20 = (max((((var_4 || (var_11 | 5073)))), (~var_17)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 *= ((-(min(60463, -0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [6] = -0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_3] [i_4] = ((((((arr_9 [i_2 - 3] [i_1] [5]) ? var_8 : 5159))) ? var_13 : (arr_4 [i_0] [i_2 + 2])));
                                arr_14 [i_0] [i_1] [i_2] = ((-((~((-117 ? (arr_6 [i_0] [i_0] [i_3]) : 98))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((min(-1642702325, ((var_7 ? 2372714956309206108 : var_17)))) | (((+(max((arr_6 [i_0] [i_0] [i_0]), var_14)))))));
    }
    var_23 = (((!240) ^ ((((!26732) && var_18)))));
    var_24 = var_11;
    #pragma endscop
}
