/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2 - 2] [i_2] [5] [i_1] = (18446744073709551608 ? 0 : 8187326104118008389);
                        var_14 = ((-64848585146562361 ? ((((max(18446744073709551615, var_2))) ? var_3 : (arr_6 [i_3] [0] [0] [i_0]))) : (((arr_4 [i_2 - 1]) ? var_1 : (arr_4 [i_2 - 2])))));
                    }
                    var_15 = var_9;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((arr_5 [i_1 + 1]) + (arr_0 [i_5 + 1] [i_2 + 1]))) + -15322)))));
                                arr_17 [i_5 + 2] [i_4] [i_1] [i_1] [i_1 + 2] [i_0] = arr_15 [18] [i_0] [i_1] [18] [i_4] [i_5 - 1];
                                var_17 = (min(var_17, (((+(((arr_11 [i_1 - 2] [i_0] [i_2 - 1] [i_5 - 1]) ? (arr_11 [i_1 - 1] [i_0] [i_2 + 1] [i_4]) : var_4)))))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (((((((arr_16 [i_0]) ? (arr_3 [6]) : 18446744073709551615)))) ? (((var_13 ? ((var_7 ? (arr_16 [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_4 [i_0])))) : (arr_14 [1] [i_0])));
    }
    var_19 = ((~((var_2 / (var_7 - var_6)))));
    var_20 = var_12;
    #pragma endscop
}
