/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = ((-((var_4 ? (arr_0 [8]) : var_9))));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_13 = (((((arr_7 [i_1 - 1] [i_1 - 1] [i_0]) ? 1 : (arr_6 [i_1 + 2] [i_1 + 2] [i_0]))) & (((((max(-7479127294161138104, (arr_0 [i_0])))) <= ((59678 ? (arr_5 [9]) : (arr_3 [i_1]))))))));
                arr_9 [i_0] [i_0] [i_0] [5] = ((~(max(var_9, var_5))));
            }
            arr_10 [i_0] = (7479127294161138104 / 1667584910);
            arr_11 [4] = (max(((~(arr_0 [i_1 - 3]))), 1667584903));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = (!var_8);
                            arr_21 [i_0] [i_5] [i_1] [i_3] [i_3] [i_4] [i_5] = (min((arr_17 [i_0]), ((((arr_3 [i_3]) ? var_8 : var_11)))));
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_6] [i_4] [i_6] [i_6] = ((min(var_0, ((~(arr_18 [i_0] [i_1] [i_1] [i_3] [i_1] [5]))))));
                            arr_25 [i_0] [i_1] [i_1] [i_3] [i_4] [i_6] = ((max(var_3, (arr_7 [i_1 + 1] [i_1 + 1] [i_6 - 3]))));
                            arr_26 [i_0] [i_1] [i_3] [i_6] [i_6] = (((((arr_14 [i_6 - 2] [i_1 + 2] [i_1 + 2]) ^ (arr_14 [i_6 - 2] [i_6] [i_1 - 3])))) ? ((((arr_15 [i_0] [9] [i_0]) && 0))) : (~1789029793));
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_14 *= ((-(((!0) ? ((((arr_16 [i_4] [i_0]) ^ 119))) : (((arr_27 [i_0] [i_0] [i_1] [5] [i_3] [i_4] [i_7]) ? var_3 : (arr_0 [i_0])))))));
                            var_15 ^= -698033529;
                        }
                        var_16 = min(50, (((min(var_3, -1)))));
                        arr_29 [i_0] [i_4] [i_4] [i_0] = (min(((-((var_10 ? var_2 : (arr_16 [i_0] [i_0]))))), (arr_7 [i_0] [i_1] [i_0])));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_17 = (min(var_17, (((((max(2013265920, (((!(arr_4 [i_0] [i_8]))))))) ? ((((arr_15 [i_0] [i_0] [i_8]) < (((((arr_2 [i_0]) || 888520192567069341))))))) : ((9166 ? (arr_14 [13] [i_8] [i_8]) : (arr_15 [i_0] [i_0] [i_8]))))))));
            arr_34 [i_8] = (((var_1 * -var_3) ? (((var_2 ? (arr_14 [i_8] [i_0] [i_0]) : (arr_27 [i_0] [i_0] [13] [11] [i_8] [i_8] [i_8])))) : (min(40, 0))));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_43 [8] [4] [i_9] [i_8] [i_10] [i_11] = (max((arr_22 [i_0] [12] [i_8] [i_10 + 2] [i_11]), (arr_30 [5] [i_11])));
                            var_18 ^= (min((((!(~var_2)))), ((((arr_39 [i_0] [8] [i_0] [i_10] [i_10 - 3]) ^ 9188023092217269951)))));
                            var_19 *= (min((((min((arr_37 [i_0] [i_0] [i_0] [i_10] [i_0] [i_10]), (arr_38 [i_0] [6] [2] [i_10]))))), (arr_37 [7] [7] [12] [7] [12] [i_10 - 1])));
                        }
                    }
                }
            }
            arr_44 [i_8] [i_0] [i_0] = (arr_14 [i_0] [i_0] [i_0]);
            var_20 = (-4 * 0);
        }
        var_21 = ((((((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || var_4)) ? (((arr_0 [i_0]) ? (arr_32 [i_0] [i_0]) : 2032318409)) : (~12))));

        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            arr_49 [i_0] [i_0] = ((~(((((min(7, (arr_32 [13] [i_12]))))) & var_0))));
            var_22 |= -3;
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            arr_53 [0] [0] = ((~(max(var_0, ((min((arr_28 [i_0] [i_13] [i_0] [1] [i_0]), (arr_36 [i_13] [i_0] [i_13] [i_0]))))))));
            var_23 = -var_5;
            arr_54 [i_0] [i_0] [i_0] = ((((((min(var_10, 8269097224901369329)) << (((arr_12 [i_0] [i_13] [i_0] [i_0]) + 184))))) ? (((!(arr_13 [i_0] [i_0] [i_13])))) : 1));
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            arr_57 [i_0] [i_14] [i_0] = (--223166601);
            arr_58 [i_0] [i_0] [i_0] = (((arr_33 [i_0] [i_14]) ? ((((min((arr_2 [i_0]), var_8))))) : (min(((var_8 ? (arr_27 [6] [i_14] [5] [6] [i_0] [6] [0]) : (arr_3 [i_14]))), ((var_2 ? (arr_51 [3] [i_0]) : var_6))))));
        }
    }
    var_24 = (min(var_24, (((!((min((min(var_2, var_8)), -var_5))))))));
    var_25 = (max(var_4, var_8));
    var_26 -= -var_6;
    #pragma endscop
}
