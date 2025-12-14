/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((var_13 ? ((max(var_19, var_0))) : ((max(var_5, var_7))))) <= (var_7 != var_2)));
    var_21 = 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = arr_3 [i_0] [i_1];

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_23 = (((((((max(-30705, var_0))) | ((max((arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), var_11)))))) && (((arr_1 [i_2 + 1] [i_3 + 1]) && -21493))));
                        var_24 = (max(var_24, (max(var_10, (arr_5 [10] [i_1] [i_1])))));
                        var_25 = (max(var_4, ((max(7, 24542)))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_0] [i_3] = (max((((22086 < ((max((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), var_17)))))), (max((arr_9 [i_3] [i_3 + 2] [7] [i_2 + 1] [i_3]), (((arr_10 [9]) | -13259))))));
                            var_26 = -22819;
                            var_27 = var_19;
                            var_28 = arr_12 [i_0] [i_0 + 3] [i_0] [11] [i_0 + 3];
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_29 = ((-(~var_2)));
                            arr_17 [i_3] [i_1] [i_2 - 1] [8] [8] [i_5 + 1] [i_2] = var_6;
                            var_30 = 7;
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_3] = ((-((max((max(var_11, (arr_19 [i_3] [6] [i_2] [i_1] [i_3]))), (arr_7 [i_3] [i_0] [i_0]))))));
                            var_31 += (max((((arr_15 [i_1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [8] [i_3]) ? var_17 : (arr_15 [i_1] [i_2 + 1] [i_3] [i_6 - 1] [i_6] [i_6]))), ((max(30724, 14449)))));
                        }
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            var_32 -= max((max((max(20, (arr_9 [i_0 + 1] [i_1] [i_2] [i_3] [i_0]))), (arr_12 [i_0 + 4] [i_1] [i_0 + 4] [i_3 + 2] [i_3 + 2]))), var_5);
                            var_33 = (arr_18 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                            arr_23 [i_0] [i_3] = arr_9 [i_1] [i_3] [i_2 - 1] [11] [i_3];
                        }
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_34 = (max(var_34, (arr_25 [i_0 - 2] [i_2 + 1])));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_35 -= ((!(((arr_24 [i_0 + 2] [i_1] [6] [i_1]) == (arr_5 [i_1] [i_8] [i_9])))));
                            var_36 = 0;
                        }
                    }
                    var_37 = (min(var_37, (((((((7896 ? var_5 : (arr_15 [i_0] [i_1] [i_1] [i_2] [i_0 + 1] [i_0]))) - ((max((arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2]), var_18))))) | (var_4 > 6144))))));
                }
                var_38 = (max(var_7, (max((arr_29 [i_0 + 3]), (var_5 * 30625)))));
                arr_31 [i_0] = (arr_28 [i_0 + 2] [i_1] [14] [i_1] [i_1] [i_1] [11]);
            }
        }
    }
    #pragma endscop
}
