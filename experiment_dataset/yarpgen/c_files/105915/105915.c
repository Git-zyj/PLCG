/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 = ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        var_14 += var_4;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_4 [5] = (((((min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1]))))) / (max(var_6, (arr_0 [i_1] [i_1])))));
        arr_5 [i_1] = (((((65535 ? (arr_3 [i_1] [i_1]) : ((-(arr_2 [10] [i_1])))))) ? (((((arr_0 [13] [i_1]) || var_11)))) : ((((var_12 ? -7436066804438986588 : (arr_3 [i_1] [i_1]))) / (arr_1 [i_1] [i_1])))));
        var_15 = ((var_5 != ((min(var_6, (arr_1 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_16 = (arr_3 [i_2] [i_2]);
        var_17 = ((((min(var_4, (arr_8 [9]))) / ((min((arr_6 [i_2]), var_0))))));
    }
    var_18 = (min(var_18, var_4));
    var_19 += ((!(((((var_6 ? var_9 : -7436066804438986588)) + (((max(var_10, var_5)))))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, (((((max(var_7, 1) ? (min((arr_15 [i_3] [9]), var_12)) : -653372789519736238)))))));
                    var_21 = (min(((min((arr_6 [i_3]), (arr_6 [i_5 - 1])))), (min(-9223372036854775806, 1012797445))));
                    var_22 = ((max(var_12, (var_4 & var_3))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_27 [i_7] [10] = (((((((arr_21 [i_4 - 3] [i_4 + 1] [i_5 - 1] [i_7]) && -6034124754337260053)))) == (((min(65533, var_3)) >> ((2147483647 ? (arr_22 [i_4] [i_4]) : (arr_22 [2] [i_5])))))));
                                var_23 = (var_9 ? ((min(var_11, var_6))) : (arr_25 [8] [i_7] [i_4]));
                                arr_28 [i_7] [i_4 - 1] [i_4] [i_4] [6] = 1;
                                var_24 = (~-90);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
