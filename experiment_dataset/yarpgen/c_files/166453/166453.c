/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((var_14 ? var_1 : var_6)) / (max(524256, 10265422946337689394))))) ? (((((var_9 ? 2767594722 : 1761))) ? (((18446744073709551599 ? var_0 : var_10))) : (-64 + 16))) : (((~(var_4 < var_13))))));
    var_18 = ((!(!1755)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_19 += ((var_15 ? (((!(arr_1 [i_1 - 1] [i_2])))) : ((0 ? (arr_1 [i_2] [i_2]) : (arr_1 [i_0 - 1] [i_1 + 1])))));
                        arr_9 [i_3] [i_1] [i_2] [i_1] [i_0] = var_1;
                        var_20 = (min(var_20, (arr_5 [i_0] [0] [i_2] [i_3])));
                        var_21 -= ((var_2 ? ((((max((-127 - 1), 255))) ? 546781800 : var_3)) : (((~(max(var_16, var_0)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] |= ((((((arr_8 [i_0] [i_2] [i_4]) < var_3))) > (((var_5 + 2147483647) << (((((arr_3 [i_0 - 1]) + 10693)) - 24))))));
                                var_22 -= ((-(((!var_13) ? (arr_10 [i_0 + 1] [i_1 + 2] [i_2] [i_2] [i_4] [i_4]) : 594509769514313986))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
