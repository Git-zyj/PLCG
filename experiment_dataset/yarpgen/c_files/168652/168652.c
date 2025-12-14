/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((!var_9) <= (((~var_7) | ((min(var_14, 1)))))));
    var_21 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_1] [i_0 - 2] = (!1);
            var_22 += ((1 ? 10960515646485564869 : 1));
        }

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_2] [6] = 1;
            var_23 = ((~(arr_0 [i_0 - 2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_24 *= (arr_3 [i_2 + 1] [i_2 - 1]);
                            var_25 = (arr_6 [i_2]);
                            var_26 = (arr_3 [i_0 - 2] [i_2]);
                            var_27 = 1;
                            var_28 = 65532;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_29 = 17407;
                            var_30 = (!20350);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_31 = (((!15) || var_4));
                            var_32 = 246;
                        }
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_33 = (arr_22 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 2]);
                            arr_24 [i_0 + 1] [1] [i_3] [i_4] [i_2] = (((((14391902071028386976 ? var_14 : (arr_22 [i_2] [i_2 + 2] [i_3] [i_3] [i_3])))) ? (!17179836416) : (!10168465919141365934)));
                            var_34 = (arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_2]);
                            var_35 *= (!233);
                        }
                        var_36 = (~(((arr_22 [i_2] [i_3] [i_2 + 3] [i_2 + 2] [i_2]) ? 18446744073709551611 : 0)));
                    }
                }
            }
            arr_25 [i_0 - 2] [i_2] [i_2] = ((~(arr_22 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 1])));
        }
        var_37 *= (((((~(arr_21 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))) ? ((((!(arr_11 [i_0] [i_0] [i_0 + 1] [i_0]))))) : (((arr_3 [i_0] [i_0]) ? (arr_6 [i_0]) : var_17))));
        var_38 = (max(var_38, (((var_5 ? (18446744073709551615 != 194) : (arr_3 [i_0 + 1] [i_0 - 1]))))));
    }
    var_39 = (!var_1);

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 7;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 10;i_12 += 1)
                {
                    {
                        arr_37 [i_10] &= (((3966416526495310646 ? 2844057451191131529 : (arr_30 [i_10]))) & 65532);
                        arr_38 [i_11] [i_11] [i_11] = ((-20 ? 8278278154568185681 : (!3003921281042224863)));
                        var_40 += (((((arr_19 [i_10] [i_11 + 1] [i_11 + 1] [i_11 - 2] [i_11 - 1]) ? (arr_6 [i_12]) : (arr_6 [i_12]))) | ((var_0 ? (arr_6 [i_12]) : (arr_2 [i_11 + 1] [i_11 + 1])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 10;i_15 += 1)
                {
                    {
                        var_41 += (((arr_12 [i_9] [i_13] [i_14] [i_14]) ? (min(6824964445591040599, (!50))) : ((((!(!var_2)))))));
                        arr_45 [i_15] [i_13] [i_14] [2] = (max((max(var_2, var_7)), (max(0, 240))));
                        var_42 += (((~var_0) && (((min(3694139690928536317, (arr_32 [i_13] [0] [i_15])))))));
                    }
                }
            }
        }
        var_43 = ((!(((~(arr_28 [i_9]))))));
        var_44 += ((var_0 ? (~var_17) : ((((max(1, 24338))) ? var_11 : ((min(24327, var_5)))))));
    }
    #pragma endscop
}
