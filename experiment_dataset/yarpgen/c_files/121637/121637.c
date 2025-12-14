/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((40 - ((max(var_0, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 -= (~var_9);

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_13 ^= ((min((arr_8 [12] [i_2 + 3] [12]), (arr_8 [2] [i_3] [2]))));
                        var_14 = ((((arr_3 [i_3] [i_0] [i_0]) ? var_0 : var_4)));
                        var_15 *= (((((~var_1) + 2147483647)) << (((((((arr_11 [i_3] [i_2 + 1] [i_2 + 2] [i_1] [i_0] [i_0]) ? (arr_11 [i_3] [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_0]) : (arr_11 [7] [i_2 + 4] [i_2 + 3] [i_2] [i_2] [i_1]))) + 26174)) - 20))));
                        var_16 = (((arr_8 [i_1] [i_2] [i_1]) ? (arr_6 [i_2 - 2]) : (((arr_4 [i_2 + 1]) ? var_0 : (((arr_0 [i_0]) ^ var_6))))));
                    }
                    var_17 += (max((~7711199923665887175), (((~(arr_5 [i_2 + 2] [i_2 + 2]))))));
                    var_18 = (max(var_18, ((max(((max((arr_5 [i_0] [i_1]), (max((arr_4 [i_0]), var_10))))), (max(((max(var_3, var_3))), ((12043463220132394017 ? var_2 : var_9)))))))));
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_19 = (min(3115689907, (!-7685147383699695608)));

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_20 = (max(((var_9 ? (((1125899906842620 ? (arr_9 [i_0]) : (arr_9 [i_1])))) : var_6)), var_7));
                        var_21 = (((((((max(16339, var_1))) ? (arr_3 [i_4 - 1] [i_4 + 1] [i_5 + 2]) : (((arr_0 [2]) ? (arr_6 [i_0]) : var_2))))) / (max((var_6 % var_5), (~var_1)))));
                        var_22 &= (min((min(((min((arr_9 [i_0]), (arr_11 [i_5 + 1] [i_1] [i_0] [i_0] [12] [i_4])))), ((var_0 ? -26912 : (arr_15 [i_0]))))), (((~15574366789028058702) << ((2268766388401418177 ? 27 : (arr_7 [i_4] [12] [i_0])))))));
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, ((min(((max(var_2, (arr_10 [i_4 + 2] [i_1] [i_4] [i_6])))), var_8)))));
                        var_24 = ((!((!(~-8881086377549217544)))));
                        var_25 = ((((((arr_19 [i_4 + 2] [11] [i_4] [i_4]) || 0))) > (arr_12 [i_0] [i_1] [i_4])));
                    }
                    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            var_26 = ((((max((arr_24 [i_8] [i_7 - 1] [i_0]), (arr_24 [i_0] [i_1] [i_4 - 2])))) ? ((min(53595, 3026))) : 249));
                            var_27 = (((min((arr_10 [i_8] [i_8] [i_8] [7]), (arr_19 [i_1] [i_4 + 1] [i_1] [i_8])))) << ((((min((arr_15 [i_0]), ((max(var_3, 0)))))) + 6576)));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_28 = ((((~(((arr_18 [i_1]) ? (arr_18 [i_1]) : 11530726818413948849)))) | (((~16239330665116501698) ^ (((arr_13 [i_0] [i_0] [12] [i_1]) ? var_9 : var_3))))));
                            var_29 = (((((((arr_22 [i_7 - 2] [i_1] [i_4 - 2] [i_1] [i_4 - 2]) || 1920)))) % ((9223372036854775807 ? (arr_26 [i_0] [i_1] [i_4 - 1] [i_7 + 2] [8]) : (arr_8 [i_1] [i_7 + 3] [i_1])))));
                            var_30 = var_4;
                            var_31 = (arr_22 [i_0] [i_1] [i_4] [i_1] [i_9]);
                        }
                        for (int i_10 = 4; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_32 = ((~(~var_7)));
                            var_33 = (((((var_6 << (8836436885760622070 - 8836436885760622070)))) >> (((((arr_21 [i_0] [i_1] [i_4] [i_1] [i_7] [i_10]) ? ((min(-1, -127))) : var_8)) + 138))));
                        }
                        for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_34 = (arr_28 [i_0] [i_0] [i_0]);
                            var_35 = (arr_0 [i_0]);
                            var_36 = (max(var_36, var_4));
                        }
                        var_37 = (((max(var_8, (arr_30 [i_7] [i_7] [i_7] [5] [i_7]))) <= ((max((arr_27 [i_7] [i_1] [i_7 + 2] [i_7] [i_7] [5]), (((var_2 && (arr_7 [i_7] [i_1] [i_1])))))))));
                        var_38 ^= ((-((~((max(14242, (arr_1 [i_0]))))))));
                    }
                }
                for (int i_12 = 2; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    var_39 -= (((((arr_28 [i_12 + 1] [i_0] [i_0]) >> var_4)) < (((((max(16498, var_1))) << (((max(var_2, (arr_33 [i_0] [6] [i_12]))) - 167492239)))))));
                    var_40 = ((~(max((arr_12 [i_1] [i_1] [i_1]), (var_6 | var_4)))));
                }
            }
        }
    }

    for (int i_13 = 4; i_13 < 16;i_13 += 1)
    {
        var_41 *= (max((((arr_37 [i_13]) | (((arr_36 [i_13]) >> (72 - 37))))), ((((-20 + 2147483647) >> (var_10 + 3297253355869949413))))));
        var_42 = (!-72);
    }
    #pragma endscop
}
