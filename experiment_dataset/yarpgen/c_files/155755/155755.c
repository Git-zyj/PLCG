/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = (((((4287253927731548311 ? 0 : 38)))) ? var_14 : 14159490145978003305);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (min((~var_13), (max((~var_15), (min(var_15, (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [7] [i_0] = max((arr_5 [i_0 - 4] [i_1] [0] [i_3]), (min((arr_3 [i_4 + 1] [i_0 + 4] [i_0 + 1]), (arr_3 [i_4 + 1] [i_0 + 1] [i_0 + 1]))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] = (((var_17 & var_5) ? 5032486994765768940 : ((max((arr_2 [i_0 - 3]), (arr_2 [i_0 + 4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_19 [i_0 - 3] [i_1] [i_2] [i_5] [i_6 + 3] = (max(var_0, ((max((arr_0 [i_0] [i_1]), var_2)))));
                                arr_20 [i_0] = (max((((min(var_3, var_18)))), 14159490145978003304));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
