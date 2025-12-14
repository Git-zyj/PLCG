/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 && ((min(17, (min(-29, -14679)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = ((-var_12 - ((min(224, -24702)))));
                                arr_16 [i_3] [i_3] [i_1] = (min(((-24692 ? var_9 : var_6)), (((arr_10 [i_1] [i_1]) ? (arr_10 [i_1] [i_1]) : (arr_10 [i_1] [i_1])))));
                            }
                        }
                    }
                }
                var_19 = (((((var_0 & ((min(40, -3629)))))) || (((-((min(7267, 8958))))))));

                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_20 = (min(((min(30720, 3432))), (24682 / var_6)));

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_21 -= (((arr_8 [i_0 - 1] [i_0 - 1] [i_5] [i_1 - 2]) == (arr_8 [i_0 - 1] [i_1] [i_5] [i_1 - 2])));
                        var_22 = (((arr_14 [i_6] [i_6] [i_0] [i_1] [i_0] [i_0]) ? (arr_21 [i_1]) : (arr_4 [i_0])));
                        var_23 = ((!(((var_11 ? (arr_18 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_6)))));
                        var_24 = arr_2 [i_5];
                        arr_22 [i_0] [i_1] [i_1] [i_1] = (((((((var_12 ? var_14 : var_1)) / ((-25239 ? var_6 : 24715))))) ? var_0 : (arr_3 [i_1 - 1] [i_1 - 2] [i_1])));
                    }
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_25 = (((((arr_12 [i_0] [i_0] [i_1]) ? -var_5 : var_6)) * ((-(var_4 & var_10)))));
                    var_26 = (max(var_26, (min(-24715, 26905))));
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_31 [i_1] [i_8] [i_0] [i_1] = var_2;
                            arr_32 [i_1] [i_1] [i_8] [i_1] = ((var_1 ? (((((11 ? (arr_13 [i_0] [i_1] [i_8] [i_8] [i_9]) : var_6))) ? (24702 & var_0) : var_7)) : ((~(((arr_28 [i_0] [i_1] [i_1] [i_0]) ? (arr_0 [i_0]) : var_9))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = ((!(!var_5)));
    #pragma endscop
}
