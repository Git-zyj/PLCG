/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = (((((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 576460477425516544 : 576460477425516558))) ? (~3) : (min(var_0, 17561515734611660305))))) ? (min(-18446744073709551607, (max(517907922, 13065737326161687328)))) : ((max((arr_0 [i_0]), (arr_7 [i_2] [i_2] [11] [11]))))));
                    var_12 = (((min(64, 18446744073709551615))));
                    var_13 = ((-(((min(-12, (arr_4 [i_0]))) | (((((arr_2 [i_0]) || var_10))))))));
                    var_14 = (min(var_14, (((((!(arr_0 [i_0]))) ? (arr_0 [i_1]) : (arr_0 [i_0]))))));
                    var_15 = (arr_2 [i_0]);
                }
            }
        }
    }
    var_16 = (max(var_16, (((max(var_1, var_8))))));
    var_17 = (max(var_3, (max((var_8 / var_9), ((var_1 ? var_3 : var_4))))));
    #pragma endscop
}
