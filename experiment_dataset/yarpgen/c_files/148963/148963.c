/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_10;
    var_19 = (min((max(((var_11 ? var_5 : var_0)), var_17)), 10));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 += (-(arr_0 [i_0 + 2] [i_0 + 3]));
        var_21 = ((((var_3 ? var_12 : (arr_2 [i_0])))) ? (arr_0 [i_0] [i_0]) : ((var_3 ? var_17 : var_4)));
        arr_3 [i_0] = (arr_0 [i_0] [i_0 + 2]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_22 = (((arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1]) > (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                    var_23 = ((var_10 ? ((((arr_5 [i_0] [i_1]) / var_11))) : (arr_1 [i_1 + 1])));
                    var_24 += ((((1225427808 ? 16091175915791273319 : 16091175915791273319))) ? ((((var_5 == (arr_2 [i_1]))))) : (arr_6 [i_0] [i_1 + 1] [i_2 + 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_25 += ((-(((arr_4 [i_2] [i_1 - 1]) ? 16091175915791273319 : 31744))));
                                arr_13 [i_2] [i_2] [i_2] [i_2 + 1] = (9912781503629801306 ? var_12 : ((31744 >> (((arr_11 [i_0] [i_1] [i_1] [i_4]) - 3206462773)))));
                                var_26 += (arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0]);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] = ((!((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_15 : var_16)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((var_12 ^ ((0 + (-32767 - 1)))));
    #pragma endscop
}
