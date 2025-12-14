/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_13, ((var_7 ? 18446744073709551615 : ((241 ? 32745 : 288230367561777152))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_16 = (!288230367561777152);
            var_17 = (((arr_3 [i_0] [i_1]) || var_12));
            var_18 = (max(19581, 241));
            var_19 = (((((arr_1 [i_0] [i_1]) || (arr_1 [i_1] [0]))) ? (((!(arr_1 [i_0] [i_0])))) : ((max((arr_1 [0] [i_0]), 128)))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_20 = (min(var_1, ((max((arr_6 [5]), (max(var_13, (arr_1 [i_2] [i_3]))))))));
                    var_21 = (max(var_21, 18446744073709551615));
                    var_22 = (max(var_22, (~var_12)));
                }
            }
        }
    }
    var_23 = -5064199280047171854;
    var_24 -= var_7;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_18 [i_4] [i_4] = (10444993022089983372 & 1);
                    arr_19 [i_4] [i_4] [8] = ((-((-2293331399853881149 ? (~41320) : (max(8282919560220474174, (arr_8 [8] [i_5] [i_6])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            {
                                var_25 -= (max(((var_8 >> (((arr_25 [i_5] [i_5] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]) - 1586046730053717147)))), -19581));
                                var_26 = (max(var_26, ((((max(var_1, -8037992483790091793))) | var_12))));
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    var_27 = ((!(!var_2)));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_28 = (max(var_28, var_1));
                        var_29 = (max(var_29, -5));
                    }
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        var_30 = (min(((var_7 / (arr_4 [i_4] [i_4] [3]))), ((-((2293331399853881147 ? var_1 : var_2))))));
                        var_31 = (min(var_31, ((max((arr_31 [i_4] [i_5] [4]), (~-2293331399853881172))))));
                        arr_38 [2] [i_5] [2] &= -0;
                        arr_39 [2] [i_5] [4] [6] &= 12887748944964522792;
                    }
                    var_32 |= 3399983943744415399;
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_33 = (((min(-var_12, ((-93 ? 132 : -22571)))) + (((((arr_7 [7] [13] [i_13]) ? (arr_11 [i_4]) : var_9))))));
                            var_34 = (max(var_34, (arr_0 [i_4])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
