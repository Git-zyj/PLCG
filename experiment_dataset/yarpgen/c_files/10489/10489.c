/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = (((((var_10 ? (min(227540604890082839, var_11)) : 1026004590))) ? ((((~var_17) ? -6201026148317752994 : (((arr_6 [i_0] [7]) ^ 2383302558484519627))))) : var_19));
                            var_21 = (max(var_21, (((max((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1])))))));
                        }
                    }
                }
                var_22 = (min(var_22, (((-(((arr_3 [12]) & ((((arr_6 [4] [4]) ? (arr_5 [14] [22] [i_1]) : (arr_7 [3] [i_0 - 1] [i_1] [7])))))))))));
            }
        }
    }
    var_23 = ((~((var_13 >> (1026004590 - 1026004563)))));
    #pragma endscop
}
