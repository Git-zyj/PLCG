/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 += (arr_3 [i_2 - 1]);
                            arr_10 [i_0] [i_0] [i_0] [i_3] [i_0] = (((((((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_9 [i_0]) : 4687753069600530260))) ? 8004 : ((var_10 ? var_1 : (arr_9 [i_0])))))) ? ((((min(var_10, 462215601)) <= (((var_11 ? var_8 : (arr_5 [i_2] [i_1]))))))) : ((4687753069600530269 & ((6812762855834385557 ? 1742933465 : 2566))))));
                        }
                    }
                }
                arr_11 [i_0] [i_1] = (arr_2 [i_0]);
                arr_12 [i_0] [i_0] [i_1] = (arr_3 [i_0]);
            }
        }
    }
    var_18 = (max((11633981217875166059 + 462215601), ((191 ? 4687753069600530278 : var_10))));
    var_19 = (6812762855834385557 - var_0);
    var_20 = (max((max((max(var_3, var_16)), 18732)), var_14));
    #pragma endscop
}
