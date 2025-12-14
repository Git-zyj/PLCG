/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_18 = (max(var_18, var_7));
        var_19 = (!(~var_0));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = 1073741824;
                    var_21 = ((1073741824 + (37346 > 1073741824)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (!((min((((65535 % (arr_5 [4] [i_3] [12])))), (((arr_3 [i_1] [i_0]) ? (arr_7 [i_0] [i_4] [i_4] [i_3]) : 3221225491))))));
                                var_23 = (arr_3 [i_0] [i_0]);
                                var_24 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(((var_10 ? var_11 : (~var_9))), ((min(var_6, var_6)))));
    #pragma endscop
}
