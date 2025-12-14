/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 ? var_2 : ((var_0 ? (var_16 < var_4) : var_4))));
    var_19 = ((113 ? var_11 : var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (min(((((arr_0 [i_3]) >> (19560 - 19545)))), (((arr_3 [i_1] [i_2]) ? (arr_4 [i_0 - 1] [i_1 + 2] [i_3]) : (arr_4 [13] [i_3] [i_4 + 1])))));
                                var_21 = (((((~19561) + 2147483647)) >> ((min(1, 1)))));
                                arr_11 [i_4 - 1] [i_3] [i_1] [i_2] [i_1] [i_1] [i_0 + 1] = 3745199523191066399;
                            }
                        }
                    }
                    var_22 = 249;
                }
            }
        }
    }
    var_23 = (!var_7);
    #pragma endscop
}
