/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_6 + var_2) ? ((((!(!var_10))))) : (var_4 + var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_1] = (min(((-25374 ? -2121992055 : 25374)), ((var_13 ? var_4 : (arr_2 [i_1] [i_1 - 1])))));
                            arr_12 [i_0] [i_1] [i_2] [i_1] = ((+(min((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), var_7))));
                            arr_13 [i_1] = (min(4, (((!((((arr_7 [i_0] [i_1] [i_2] [i_2]) ? var_4 : var_16))))))));
                            arr_14 [i_1] [i_1] [i_2] [i_3] = 3;
                        }
                    }
                }
                arr_15 [i_0] [i_0] [6] = (arr_5 [i_1 - 1] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
