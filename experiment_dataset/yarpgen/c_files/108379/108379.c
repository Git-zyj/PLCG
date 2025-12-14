/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((~var_8) ? 0 : (var_7 && var_17)))), (max(982924334, 0))));
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = -31;
                var_21 = (((max(var_5, (((var_12 ? 247 : var_12))))) < 15353478651245882428));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 &= ((var_1 ? ((((((248 ? 3148080082 : 246))) ? ((max(var_10, 26))) : var_1))) : (min(3269367467, (arr_8 [i_3] [i_3] [i_2] [i_3])))));
                    var_23 = var_12;
                }
            }
        }
    }
    var_24 = (min(var_24, var_8));
    #pragma endscop
}
