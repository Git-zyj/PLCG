/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = (((~var_11) & (min(var_13, ((var_7 ? var_1 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((!((((arr_2 [i_0] [i_1] [5]) ? (arr_2 [i_0] [i_0] [i_0]) : 1)))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_19 = (max(((((((arr_4 [i_0] [i_0]) ? (arr_5 [i_0] [i_2] [i_2] [i_2]) : var_11))) ? ((20 ? 140737488355327 : var_1)) : (((((arr_4 [i_1] [8]) == 3105137792865047342)))))), (((var_5 ? (arr_6 [i_0] [i_3 + 1]) : (((arr_7 [i_0]) ? (arr_5 [12] [10] [10] [i_3]) : (arr_7 [i_0]))))))));
                        var_20 |= ((!(((arr_5 [i_3 + 1] [0] [i_3 + 1] [i_3 + 1]) < ((187281165372411233 ? 10767142666669079659 : (arr_4 [i_0] [2])))))));
                    }
                    var_21 = 140737488355327;
                }
            }
        }
    }
    #pragma endscop
}
