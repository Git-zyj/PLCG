/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((~((min(1, 56150))))));
                var_19 = (max(((min((arr_1 [7]), var_13))), ((min((arr_2 [i_0]), (arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = ((((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_16 : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                            var_21 = (min(var_21, (((max(var_8, var_3))))));
                            arr_8 [i_3] [i_1] [i_3] [i_3] = (((38498 || 56150) ? (((!((min(var_16, (arr_0 [i_3]))))))) : var_4));
                            var_22 += ((-((((max(var_5, var_11)) >= (~var_5))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_14, var_6));
    #pragma endscop
}
