/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((!(((var_8 ? (!var_3) : var_18))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_21 = (((!(((var_11 ? (arr_2 [10]) : (arr_0 [7] [2])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] [i_0] = ((!((((((arr_4 [i_1 + 1]) + 2147483647)) << (((((arr_4 [i_1 + 1]) + 34)) - 12)))))));
                        arr_11 [i_0] = (!-var_10);
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((var_2 ? (((((-(arr_7 [i_0] [5] [i_0] [i_3 + 3])))) ? var_0 : var_19)) : var_12));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_22 = (arr_0 [i_2] [i_2]);
                            var_23 = ((!((!(!var_19)))));
                            arr_17 [i_0] = (6765 ? 100 : 48756);
                            arr_18 [i_0] [i_0] [i_1 + 1] [5] [i_2] [i_3] [1] = (((!((!(arr_0 [i_1] [7]))))));
                            var_24 = ((-(((arr_5 [i_1 + 1] [i_3 - 3]) ? (arr_5 [i_1 + 1] [i_3 + 1]) : (arr_5 [i_1 + 1] [i_3 - 3])))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_0] [i_0] [i_3] = (!var_16);
                            arr_22 [i_0] [i_0] [2] [16] [i_5] = (!1);
                            arr_23 [i_5] [i_0] [i_1] = ((((max(var_5, var_1))) ? (((!(arr_5 [i_1 + 1] [i_3])))) : (((!(arr_6 [i_1 + 1] [i_2 + 4] [i_0] [i_3 + 2]))))));
                            arr_24 [i_3] [i_0] [i_3] [i_3] [16] [i_1] [i_0] |= ((!((!(arr_2 [i_2 + 1])))));
                            arr_25 [i_0] [i_5] = ((((max(-49, ((3431127146 ? 32768 : 2147483645))))) ? ((var_1 + (arr_16 [i_0] [i_1 + 1] [i_2 + 1] [i_3 - 1] [1] [i_5]))) : ((var_18 ? (((var_16 ? (arr_14 [i_0]) : var_7))) : (min(215, (arr_6 [9] [i_2] [i_0] [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_25 = ((!((!(!var_4)))));
        var_26 = (((arr_1 [1] [i_6]) ? (!var_17) : (((!((!(arr_5 [i_6] [2]))))))));
        var_27 = var_13;
        var_28 = ((-(arr_5 [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_32 [10] = 1408253026322909266;
        var_29 -= -var_16;
        arr_33 [i_7] = ((!(!var_9)));
        var_30 = (min((((arr_4 [i_7]) % (max(49, -2147483646)))), ((((58276 ? 121 : -44))))));
        arr_34 [i_7] [i_7] = var_18;
    }
    var_31 = (!var_17);
    var_32 = (min(var_32, (!65535)));
    #pragma endscop
}
