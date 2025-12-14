/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_1;
    var_19 = (((((2349418625 ? var_17 : var_9))) ? var_16 : 45));
    var_20 = ((-(1105234416 + var_6)));
    var_21 = (!-1156439973);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (((((~(max((arr_1 [i_0]), var_10))))) ? -9223372036854775800 : ((max((((arr_0 [i_0]) ? 39 : var_8)), ((max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 = (i_0 % 2 == 0) ? (((((arr_0 [6]) + 2147483647)) << (((((arr_5 [i_0] [i_1] [i_2 - 1]) | (arr_4 [i_1]))) - 35967)))) : (((((arr_0 [6]) + 2147483647)) << (((((((((arr_5 [i_0] [i_1] [i_2 - 1]) | (arr_4 [i_1]))) - 35967)) + 28763)) - 21))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_24 = (((arr_1 [i_0]) ? (((var_13 & var_10) & ((12699326241249126193 ? 12699326241249126193 : 5677970798840416340)))) : (((((5677970798840416340 ? 199 : var_4))) ? (4379710578121157571 & var_4) : var_1))));
                                var_25 = (~-2124961850);
                                var_26 = (~205);
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] = (!-1);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_27 = (max((max(((min((arr_12 [i_5]), var_6))), (arr_16 [11] [i_6] [i_7 + 1]))), ((((4379710578121157554 == var_10) ? var_8 : var_2)))));
                    arr_19 [i_6] [i_6] = ((!((((min(5747417832460425431, var_15)) - (64 + 255))))));
                }
            }
        }
        var_28 = (((((var_16 ? var_7 : 13411553432578614888))) ? (arr_12 [i_5]) : (arr_12 [i_5])));
        arr_20 [i_5] [i_5] = (!var_11);
    }
    #pragma endscop
}
