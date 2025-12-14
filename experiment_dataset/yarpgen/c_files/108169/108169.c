/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 * ((((var_8 > (((var_9 + 2147483647) >> (var_9 + 23431)))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] = (((((!-12429) & var_1)) == ((min((!-575), -857713861)))));

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                arr_9 [i_1] [i_1] [i_1] = (((((-var_1 + 9223372036854775807) << (((((arr_6 [i_0] [i_0] [i_2]) + -2344)) - 41010)))) >= (((min(var_8, -2344))))));
                arr_10 [i_0] [i_1] [i_0] = (((((arr_2 [i_0]) * -236)) ^ ((((((!(arr_7 [i_1] [i_1])))) != (((!(arr_8 [i_1] [i_1] [i_2] [i_2])))))))));

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_11 = (max(var_11, (((!((!((max(66, -90))))))))));
                        arr_16 [i_1] = ((238 ? (((((arr_1 [i_3]) > (arr_14 [i_3] [i_3] [i_2] [15] [i_4] [i_4] [i_2]))))) : (((-90 + 2147483647) >> (var_3 + 32217)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] = ((((((arr_3 [i_1] [i_3]) ^ 19))) != (arr_7 [i_1] [i_1])));
                        arr_21 [20] [i_1] [6] [i_1] [i_0] = ((~((0 | (arr_8 [i_1] [17] [0] [i_3])))));
                        arr_22 [i_0] [i_5] [i_1] [i_3] [i_5] [i_5] [i_5] = ((~(arr_12 [i_0] [i_0] [i_1] [i_0])));
                    }
                    arr_23 [i_0] [i_1] [i_2 + 2] = 7;
                    arr_24 [i_1] = ((!(~60)));
                    arr_25 [i_0] [i_0] [i_1] = ((!((((var_8 - var_6) & (!var_3))))));
                    var_12 = ((max((~var_7), (((arr_15 [i_1] [i_1] [i_1] [23] [i_0]) | (arr_4 [i_1] [6]))))));
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    arr_28 [i_1] = ((~(arr_18 [i_1] [i_2] [i_1] [i_0] [i_1])));
                    var_13 *= ((((((~2345) <= (16060212368888179891 & var_1)))) ^ ((((max(var_5, 2617823623)) == (69 - var_7))))));
                }
                var_14 = (max(var_14, (((((min(1276543294, 212))) && (!var_9))))));
            }
            var_15 = (i_1 % 2 == 0) ? (((~(((-32126 + 2147483647) >> (((arr_12 [i_0] [i_1] [i_1] [i_1 + 1]) - 109))))))) : (((~(((-32126 + 2147483647) >> (((((arr_12 [i_0] [i_1] [i_1] [i_1 + 1]) - 109)) + 165)))))));
            var_16 = (max(var_16, var_3));
        }
        var_17 = var_7;
    }
    var_18 = var_4;
    #pragma endscop
}
