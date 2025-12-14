/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((((((57 ? var_1 : var_2))) ? (var_2 ^ var_8) : var_0))) ? ((((var_8 ? var_1 : 199)) & var_1)) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = (~33962);
                                var_13 = ((!10250) ? (arr_12 [i_0]) : ((57 | (~var_7))));
                                var_14 = -2;
                                arr_17 [i_0] [i_0] [i_1] [i_3] = var_1;
                            }
                        }
                    }
                    var_15 = (min(var_15, var_5));
                    arr_18 [i_0] [i_1] [i_1] = var_10;
                    var_16 -= var_0;
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = (max(var_18, (var_10 & 49)));
    #pragma endscop
}
