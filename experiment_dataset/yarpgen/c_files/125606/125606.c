/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((65533 ? 1 : 3706128773));
        var_18 = ((((9223372036854775807 * (!var_3)))) ? (6219220138444457214 == 4) : (~0));
        var_19 *= (!1);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((-872 ? (((max((arr_0 [i_2 - 1] [i_1 - 3]), (arr_0 [i_2 + 1] [i_1 - 2]))))) : ((2 ? (arr_3 [i_0 + 1]) : 2))));

                    for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, (arr_6 [i_0])));
                        var_22 = (max((((((!(arr_0 [i_1] [i_2]))) ? 46 : 2285))), (max((max(var_10, (arr_3 [i_0]))), ((min((arr_5 [i_1] [i_2] [5]), (arr_1 [i_0]))))))));
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((((arr_8 [6]) ? 0 : ((((max((arr_12 [i_0] [2] [0] [10]), var_5))) ? (!var_9) : (arr_6 [0]))))))));
                        var_24 *= (((((arr_9 [i_4] [i_2] [i_1] [i_0]) ? (arr_9 [8] [8] [i_2 + 1] [i_2]) : (arr_8 [6]))) == (((~(arr_6 [0]))))));

                        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_25 = (arr_6 [i_2]);
                            var_26 = (max(var_26, ((-((((var_15 ? 45 : (arr_3 [i_0]))) - ((((arr_1 [1]) ? var_12 : var_5)))))))));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            arr_19 [8] [i_0] [i_4 + 4] [i_0] = (max((min(252, ((-119 ? 59025 : (arr_16 [7] [i_0] [i_1] [i_2] [i_4] [i_6]))))), (arr_0 [i_0] [i_4])));
                            var_27 = (max(var_27, (((((min((arr_7 [i_0] [i_6] [i_2] [i_6]), (arr_9 [i_2] [i_4 + 3] [i_4] [5])))) ? (111 && 1231715483) : ((((((arr_6 [i_1]) ? var_17 : -9223372036854775785))) ? (arr_10 [i_1] [i_2 + 1] [i_4] [i_6 + 1]) : (arr_5 [i_6] [0] [i_0 + 1]))))))));
                        }
                        for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_2] [i_2 - 1] [i_0] [i_7] [i_2] = ((-(max(-122, (arr_17 [i_7 - 2] [i_4 + 3] [5] [i_0 - 1] [i_7] [i_0] [i_4])))));
                            var_28 ^= (((min(var_14, (arr_11 [i_0] [i_2] [0] [1])))) ? ((1 ? (arr_4 [i_7]) : (min(var_8, -119)))) : (arr_7 [i_0] [i_7] [i_7 + 2] [i_2 - 1]));
                        }
                    }
                    var_29 = (min(var_29, (((!((max(var_13, (((~(arr_6 [i_0]))))))))))));
                    var_30 = (min((arr_16 [i_2 + 1] [i_0] [i_2] [i_0 - 1] [8] [i_2 - 1]), (((arr_16 [i_2 + 1] [i_0] [i_2] [i_2] [i_2] [i_1]) ? (arr_16 [i_2 + 1] [i_0] [i_2] [4] [i_0] [i_2]) : var_12))));
                    arr_24 [i_0] [i_0] [10] [i_2] |= ((-32 ? ((113 ? 1577670801 : 5532849061318040903)) : -1393098103));
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_31 ^= ((~((((arr_18 [i_8] [8] [2] [6]) == var_15)))));
        var_32 = (((min(5594278777238912688, var_15))) ? ((((var_6 ? var_5 : (arr_11 [i_8] [i_8] [i_8] [i_8]))) & (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8]))) : (!var_0));
        arr_27 [i_8] [i_8] = (min(((((-1664 + 2147483647) >> (220 - 199)))), (arr_20 [6] [i_8] [i_8])));
        var_33 = (((arr_16 [0] [2] [i_8 - 1] [10] [i_8] [i_8]) < (((((var_15 ? var_5 : (arr_21 [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [i_8]))) == ((min((arr_7 [i_8] [4] [i_8] [i_8]), 163))))))));
    }
    var_34 = ((-var_2 != var_6) ? (((!1) ? -46 : (~1))) : var_11);
    var_35 = var_5;
    #pragma endscop
}
