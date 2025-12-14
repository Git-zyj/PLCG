/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = ((((arr_4 [i_0 - 3] [i_0 + 1]) || (arr_6 [i_0] [i_0 - 1]))) ? (((arr_4 [i_0] [i_0 - 3]) + (arr_6 [i_0] [i_0 + 1]))) : (min((arr_6 [i_0] [i_0 + 2]), (arr_4 [i_0] [i_0 - 3]))));
                            var_19 = (min(var_14, (arr_7 [17] [1])));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [3] = (min((arr_5 [i_0] [i_0 - 3]), ((-7811446753938087432 ? (min(4294967295, -7811446753938087432)) : var_2))));
            }
        }
    }
    var_20 = (min(var_4, ((var_7 ? ((var_14 ? 645795912 : var_2)) : var_6))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_21 = (min(var_21, var_12));
                var_22 = var_3;
            }
        }
    }
    var_23 = (min((~var_16), ((var_4 ? (((min(0, 1)))) : ((var_16 ? var_1 : 6954647039549240729))))));
    #pragma endscop
}
