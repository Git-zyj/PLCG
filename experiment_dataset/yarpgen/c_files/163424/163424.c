/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((var_2 ? var_1 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_12 &= var_0;
                    var_13 = var_7;
                }
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_14 = arr_8 [9] [i_4] [i_4] [i_4] [i_0] [i_4];
                        var_15 &= ((-7965525253045989135 ? ((((max(16777215, var_5)) == (arr_6 [i_0] [i_1] [i_3] [8])))) : (((-(arr_7 [i_1] [i_4]))))));
                        var_16 = ((+(min((arr_1 [i_0]), ((51339 ? 16777190 : (arr_8 [i_0] [9] [i_1] [13] [i_0] [i_4])))))));
                        var_17 = ((((arr_6 [i_0] [i_3 - 2] [8] [8]) ? var_3 : var_4)) - (((min((arr_6 [i_3] [i_3 - 2] [i_4] [17]), (arr_6 [i_1] [i_3 - 2] [i_1] [i_3]))))));
                        var_18 = ((!((min(-16777186, 805306368)))));
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_19 -= (((~(~-16777223))));
                        var_20 -= (((arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_1] [i_3 - 2]) <= ((((arr_8 [i_3 - 1] [i_3 - 3] [i_3 - 2] [i_3 - 2] [i_5] [i_3 - 3]) ? 16777215 : (arr_6 [i_3] [i_3] [i_3 - 2] [i_3 + 1]))))));
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        var_21 = (min((max(((var_1 / (arr_5 [i_1] [i_1] [i_0]))), ((27992 ? 36300 : -598424827004655036)))), (((((1 ? var_3 : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? var_3 : (!104)))));
                        var_22 = (((65535 + (arr_8 [i_0] [i_1] [i_0] [i_6 - 2] [i_0] [i_0]))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_23 += (((arr_12 [i_1] [i_3] [i_1] [i_1]) / var_6));
                        var_24 = ((((min(-598424827004655013, 1073741312))) ? (arr_17 [i_0] [i_1] [i_3] [i_7]) : (arr_17 [i_0] [i_1] [i_3 - 1] [i_7])));
                        var_25 = var_4;

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_26 = var_5;
                            var_27 = (arr_3 [i_0]);
                        }
                        var_28 = (((arr_8 [9] [i_1] [9] [i_7] [i_0] [i_7]) ? ((((var_5 ? var_1 : (arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))) << ((min(0, (arr_6 [i_0] [i_0] [i_3 - 2] [i_7])))))) : var_3));
                    }
                    var_29 = ((var_7 ? var_1 : (((((var_1 ? -32746 : var_2)))))));
                    var_30 = (((-781077622 > 598424827004655015) >= var_4));
                }
                var_31 = ((((min(((var_3 ? var_0 : var_1)), (var_9 && var_7)))) ? (((((max((arr_2 [i_0]), (arr_5 [i_0] [i_0] [i_0])))) ? var_2 : (arr_3 [i_0])))) : var_8));
                var_32 = (max(6635535733342290817, 65166));
            }
        }
    }
    var_33 = ((72057594037927935 ? (((var_0 ? -var_6 : (var_4 <= var_3)))) : var_0));
    #pragma endscop
}
