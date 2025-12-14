/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_3] [i_1] [6] [i_3] [i_4] = (arr_12 [i_4] [i_3] [11] [i_1] [i_0]);
                            var_10 = var_4;
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] = (arr_9 [14] [i_3] [2]);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_20 [i_3] [i_3] [i_3] [i_0] [i_3] [i_0] [i_0] = var_1;
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = (((+(((arr_2 [i_1] [i_1]) ? var_0 : var_6)))) + (arr_6 [6] [i_3] [i_2]));
                            var_11 = (arr_18 [i_3]);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_3] [i_3] = ((1006632960 ? 1022813917 : 0));
                            arr_25 [i_0] [i_1] [i_3] [i_3] [i_3] = (((var_6 >> (var_1 - 579385148))));
                            arr_26 [i_0] [i_3] [20] [i_3] [i_1] = var_6;
                            var_12 = (-(((!(arr_23 [i_0] [i_1] [i_2] [16] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_13 &= ((+((((var_8 ? (arr_8 [i_0]) : var_8))))));
                            var_14 = ((((~(arr_7 [i_3])))));
                        }
                        var_15 = (((((var_3 ? (arr_6 [i_1] [i_1] [i_0]) : (arr_6 [i_0] [i_1] [i_2])))) ? var_7 : (arr_6 [i_1] [i_2] [13])));
                    }
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_16 &= ((-((((max((arr_9 [i_8] [i_2] [i_1]), (arr_3 [i_1])))) ? (!var_4) : (arr_22 [i_8] [i_1] [10] [6])))));
                        arr_33 [i_0] [i_0] [i_0] [i_8] [i_0] = (arr_22 [i_0] [i_8] [i_0] [i_8]);
                        arr_34 [i_0] [i_8] = ((~(((arr_19 [i_1] [i_1] [i_2] [i_8 + 4] [i_8] [5] [i_8]) - var_0))));
                    }
                    var_17 = var_8;
                    var_18 = var_8;

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_19 *= (arr_35 [i_0] [i_1] [i_1] [i_2] [i_0] [i_2]);
                        var_20 = var_0;
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, (((max(var_3, ((var_1 ? var_3 : var_9))))))));
    #pragma endscop
}
