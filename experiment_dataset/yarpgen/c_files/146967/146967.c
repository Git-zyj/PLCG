/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = ((-(~var_5)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = ((((var_6 ? (((arr_3 [8]) + var_4)) : (((min(var_7, (arr_7 [8]))))))) < ((((!((((arr_4 [i_0]) ? (arr_7 [5]) : var_3)))))))));
                        arr_12 [i_2] [9] [i_2 + 1] = (((-var_4 > ((((arr_7 [i_0]) ? var_9 : var_1))))));
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, ((max(-1, var_3)))));
    var_14 = ((1 + ((((((1 ? 1 : 42))) < 1125899906842616)))));
    var_15 = ((((max(232, ((min(var_7, var_7)))))) ? ((((((min(var_9, var_2)))) > var_3))) : var_5));
    #pragma endscop
}
