/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = var_18;
                                var_20 = ((((!(((var_2 ? var_10 : (arr_10 [i_0] [i_1] [i_2])))))) ? 240885373 : ((-1802996418262617542 / (((arr_7 [i_0]) ? var_2 : var_1))))));
                                var_21 = (min(var_21, 37));
                            }
                        }
                    }
                    var_22 = (min(var_22, (((53 < (arr_9 [i_2] [i_1] [i_0 + 1] [i_0]))))));
                }
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
