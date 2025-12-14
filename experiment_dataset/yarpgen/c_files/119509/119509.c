/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (min(-7260072736584859696, ((min(((974317013 ? -126 : 112)), -113)))));
                                arr_13 [i_0] [13] [i_0] [i_3] [i_0] [i_4] = var_7;
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] = (arr_4 [i_0] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 -= ((((((arr_9 [i_2 + 2] [i_0 + 3]) << (-6964325921950291289 + 6964325921950291292)))) && (arr_1 [i_6])));
                                var_20 = ((((~var_0) & (((arr_12 [i_0] [i_1] [11] [i_1] [i_6] [i_5] [i_6]) ? (arr_9 [i_0] [i_1]) : 946951242)))));
                                var_21 = (min(var_12, (((arr_6 [i_0] [i_1]) ? 70368744177408 : (arr_6 [i_0] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
