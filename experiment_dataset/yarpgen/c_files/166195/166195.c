/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_10 -= ((((((max(255, 149))) < ((0 ? var_1 : (arr_0 [9] [i_0 + 1]))))) ? (((((216639533 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0 + 2] [i_1 + 1])))) ? var_1 : (min((arr_1 [1]), 127)))) : ((var_0 ? ((min((arr_1 [4]), (arr_1 [i_0])))) : (65 & -513721587)))));
                var_11 -= ((((max(9377389291278895994, var_8))) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0] [i_1])));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_12 = -280110235;
                    var_13 = ((var_1 ? (min(0, ((((-2147483647 - 1) ? var_6 : var_4))))) : (((((((var_9 ? 223 : (arr_6 [i_0] [i_0] [i_2] [i_0])))) || 4302348346782123462))))));
                    var_14 += var_2;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_15 = var_3;
                    var_16 = 1;
                    var_17 = var_0;
                    var_18 = -67;
                    var_19 = ((4669 ? (min(-759260952, (47 && var_0))) : var_5));
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
