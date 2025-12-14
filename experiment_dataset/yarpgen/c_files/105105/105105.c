/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_6));
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = (((((max(-1, 297566613))) ? var_6 : (arr_1 [i_0] [i_0]))));
                                var_23 = (max((((((var_1 ? 3997400683 : 460616162))) ? ((((arr_5 [i_3]) == var_12))) : var_7)), ((((max(65535, var_5))) ? -16 : var_8))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((((arr_0 [i_0 - 1]) ? -var_9 : var_7)));
                            }
                        }
                    }
                    var_24 = (max(var_24, (((-20 ? (arr_10 [20] [i_1] [20]) : 214594857)))));
                }
            }
        }
    }
    #pragma endscop
}
