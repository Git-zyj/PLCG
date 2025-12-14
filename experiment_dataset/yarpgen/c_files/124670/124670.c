/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((min(var_11, var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (arr_1 [i_0 + 1]);
                    arr_10 [10] [10] |= var_0;
                    var_15 = (min(var_15, ((((3489688670 ? var_6 : 6346138237558386717))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (~12100605836151164898);
                        var_17 = (min(var_17, (var_10 / -83833495)));
                    }
                    arr_13 [i_0] [i_0] = (i_0 % 2 == 0) ? ((max(((((((arr_8 [i_0]) + 2147483647)) >> (((arr_4 [i_0]) - 56))))), (((arr_7 [i_0] [i_1 - 1] [i_2 + 1] [i_2]) ? -561065164 : 805278626))))) : ((max(((((((arr_8 [i_0]) + 2147483647)) >> (((((arr_4 [i_0]) - 56)) + 31))))), (((arr_7 [i_0] [i_1 - 1] [i_2 + 1] [i_2]) ? -561065164 : 805278626)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    var_18 *= 12100605836151164898;
                    var_19 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
