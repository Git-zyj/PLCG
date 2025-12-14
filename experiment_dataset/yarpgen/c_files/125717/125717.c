/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_7;
    var_14 = var_10;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 -= ((~(arr_2 [i_0 - 1])));
        arr_4 [i_0] = ((((2147483647 == (arr_0 [i_0 - 1])))));
        arr_5 [i_0] [i_0] = ((-(arr_1 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_16 += -179;
                    var_17 = (!-var_2);
                }
                var_18 *= ((~(min((((var_5 ? (arr_6 [i_0] [i_2]) : -1613548611))), var_7))));
                arr_15 [i_0] [i_2] [i_2] = (!1613548600);
                arr_16 [i_2] = var_10;
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_19 [i_1] [i_4] = ((-(arr_10 [i_1] [i_1] [i_4] [i_0 - 1])));
                arr_20 [i_0] [i_1] [i_4] = (arr_18 [i_1]);
                arr_21 [i_0] [i_1] = var_11;
            }

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_19 = (min((((3378222770 % (arr_18 [i_0])))), (~-1613548597)));
                arr_25 [i_0 - 1] [i_1] [i_1] [i_5] = ((~(arr_10 [i_0] [i_1] [i_5] [i_5])));
                var_20 *= (-((+((((arr_17 [i_0 + 1] [i_1] [i_5] [i_0 + 1]) && (arr_6 [i_0] [i_0])))))));
                arr_26 [i_0] [i_1] [i_5] = ((2077 == ((-(arr_2 [i_1])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_33 [i_0 - 1] [i_1] [i_5] [i_6] [i_6] [i_7] = var_8;
                            var_21 &= (arr_0 [i_6]);
                            var_22 &= -21776;
                        }
                    }
                }
            }
        }
        arr_34 [i_0 + 1] = (~(((((((var_4 != (arr_1 [i_0 - 1]))))) == var_11))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 19;i_9 += 1)
        {
            {
                var_23 += (var_11 | 7);

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_24 = -7000506459235531638;

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_43 [i_8] [i_8] [i_8] &= (arr_35 [i_9 - 1] [i_9 - 1]);

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_46 [i_12] [i_11] [i_8] [i_8] [i_8] = var_6;
                            arr_47 [i_8] [i_9] [i_10] [i_10] [i_11] [i_12] = (arr_37 [i_11]);
                        }
                    }
                    var_25 = (((((-(arr_35 [i_9] [i_9])))) ? (((arr_41 [i_9] [i_9] [17]) ? (arr_35 [i_9] [i_8]) : var_1)) : (((((arr_40 [i_9 + 3] [i_9] [i_9] [i_9]) != var_6))))));
                }
            }
        }
    }
    #pragma endscop
}
