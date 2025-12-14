/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (min((((((1869730436 == (arr_1 [6] [12])))) - 37)), (((arr_3 [i_0 + 1]) & (arr_3 [i_0 - 1])))));
                arr_5 [i_0 + 1] = (((((!(((1243309600 + (arr_3 [i_1]))))))) != (arr_1 [i_1] [i_0])));
                var_14 = var_5;
                arr_6 [4] [4] = ((!((min(var_0, (!var_5))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = ((~(!var_10)));
                            var_16 = ((((((arr_4 [i_2] [i_3 + 1]) ? 2527673697 : var_9))) ? var_11 : (max(20, 3051657679))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
