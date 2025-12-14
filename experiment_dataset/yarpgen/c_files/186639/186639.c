/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_3] [i_3 + 1] [i_0] = ((-(!var_2)));
                        arr_11 [i_0] [i_3] [i_2 + 1] [i_3] [i_3] = (!0);
                        var_18 -= (max(1548043909, 1088446264));
                        var_19 = (min(var_19, (arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] = ((-0 ? ((var_1 ? (((var_6 ? 0 : 1))) : 1048575)) : ((((((~(arr_5 [i_0] [i_0] [i_0] [i_0])))) ? var_5 : 1)))));
                        arr_17 [i_0] [i_1] = ((((((var_17 ? var_8 : var_15)))) ? (arr_14 [i_4 - 1] [i_2] [i_1] [i_0]) : ((-(~1)))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] = (max((arr_2 [i_0] [i_1]), ((~(arr_13 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 3])))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_2 - 2] [i_5] [i_6] = (((((((max(-6659784263638870364, 1812766949))) ? ((8156470450714716844 ? (arr_0 [i_0]) : 15561138437103420871)) : (((var_7 ? (arr_12 [i_0] [i_1]) : var_9)))))) ? var_5 : ((((1 ? 12719544167854654260 : -6659784263638870353))))));
                            arr_24 [i_0] [i_0] [i_2 + 1] [i_5] [i_6] = -1689630258;
                        }
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            var_20 = (((((((var_9 ? var_7 : var_11))) != (arr_8 [i_0] [i_1] [i_0] [i_5]))) ? var_12 : var_1));
                            arr_27 [i_0] [i_7] = ((50192 ? (!var_4) : 12719544167854654260));
                            arr_28 [i_0] [i_0] [i_7] [i_0] = min((((((var_4 && (arr_8 [i_7 + 1] [i_7] [i_7 + 1] [i_7]))) ? 2597425176 : 1))), ((((arr_14 [i_0] [i_1] [i_2 - 3] [i_7 - 2]) ? var_4 : 6997353767215328888))));
                            arr_29 [i_0] [i_7] [i_0] = (((((!(~1)))) >> var_10));
                        }
                    }
                    var_21 = (-6659784263638870381 / var_14);
                }
            }
        }
    }
    var_22 += (((((((max(var_15, var_5))) ? var_0 : (var_7 + var_10)))) ? var_15 : 771788333));
    #pragma endscop
}
