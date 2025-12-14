/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((9223372036854775805 / 2236648433) ? ((var_4 ? ((11962 ? -116 : -8103328168922940791)) : (((11982 ? var_1 : var_3))))) : (73 && 2236648429)));
    var_15 = (max(var_15, ((var_13 ? ((((var_9 ^ var_7) && (((34011 ? var_4 : 246)))))) : (((var_9 && 1) >> ((((5614254377712387679 ? var_8 : var_9)) - 66))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (((min((((-7296308400882900348 ? -15 : (-127 - 1)))), ((-21 ? var_4 : 29775))))) | (~13013030561373887893));
                var_17 = ((((max((var_11 == var_0), (arr_2 [2] [i_1] [14])))) ? 1638080383145939887 : (((~(arr_3 [i_0] [i_1]))))));
                arr_4 [3] [i_1] [i_0] = ((((((arr_0 [i_1]) ? (arr_0 [16]) : 10402))) ? 4517836767649254123 : var_12));
                arr_5 [i_0] [5] [i_0] = (((((16808663690563611728 < ((max(var_11, (arr_3 [i_0] [i_1]))))))) < ((-124 / ((var_11 ? 11982 : 22435))))));
                arr_6 [i_0] = -25;
            }
        }
    }
    #pragma endscop
}
