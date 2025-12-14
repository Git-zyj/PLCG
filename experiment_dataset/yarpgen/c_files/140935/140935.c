/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += -var_3;
    var_13 = ((((var_11 & var_11) ? (min(var_10, 450505450)) : var_5)) >= -202277868);
    var_14 |= (((~2453) ? (((~((max(var_6, var_9)))))) : (max(((var_11 ? var_4 : var_0)), var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (50956 / -202277868);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = ((var_0 | ((((arr_8 [i_3]) & (arr_8 [i_2 + 1]))))));
                            var_17 = (arr_3 [i_0]);
                        }
                    }
                }
                var_18 = ((-((((~var_2) > var_5)))));
            }
        }
    }
    var_19 = var_7;
    #pragma endscop
}
