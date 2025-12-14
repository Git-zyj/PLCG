/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 *= ((-var_13 > ((max((arr_0 [i_0]), var_15)))));
        var_17 *= var_2;

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_18 = (((min(var_13, 1))) ? (max((((arr_0 [i_1]) ? (arr_2 [i_0] [i_1] [8]) : var_2)), (arr_1 [i_0] [i_1 - 1]))) : var_1);
            arr_4 [17] [i_0] [9] = 0;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_19 = (max(var_19, (((((arr_3 [i_0] [i_2] [i_0]) ? (arr_1 [2] [4]) : var_0))))));
            var_20 = (min(var_20, 1));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                arr_11 [i_0] = ((13084 >> (((((var_8 + 2147483647) << (var_0 - 29436))) - 2147483605))));
                var_21 = (arr_5 [i_4 - 1]);
            }
            arr_12 [16] |= (((((-((min(var_0, 12845)))))) < (arr_5 [i_3])));
            arr_13 [i_3] [i_0] [i_3] = 4294967295;
            var_22 = (arr_6 [2]);
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_23 = var_14;
            arr_16 [i_0] = (max((((arr_0 [i_0]) + var_15)), (arr_2 [i_0] [i_5] [i_0])));

            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                arr_19 [i_0] [i_5] [i_5] = (min(((~(((4294967290 <= (arr_14 [i_0] [19])))))), (arr_2 [18] [i_5] [i_0])));
                var_24 += (((arr_0 [i_6]) ^ ((max((min((arr_14 [i_0] [i_0]), var_7)), -10051)))));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    arr_24 [i_0] [i_0] [i_7] = var_9;
                    arr_25 [i_0] [i_5] [i_7] [i_8] = (((arr_7 [i_0] [i_0] [i_8]) | 45672));
                    arr_26 [i_0] [i_8] = ((((((arr_9 [i_0] [i_5] [i_7]) ^ (arr_23 [i_8] [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1])))) ? (min((((22071 << (777773154 - 777773140)))), (min(7, var_6)))) : ((((var_1 != var_0) << 6)))));
                    var_25 = (max(var_25, (((!(((arr_9 [i_0] [i_5] [i_8 + 1]) || var_11)))))));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_26 = (min(var_26, (((!((((arr_22 [i_9] [i_5]) ? (777773154 || 0) : ((((-127 - 1) && 0)))))))))));
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [7] = arr_2 [i_0] [i_0] [i_0];
                    arr_32 [i_0] [i_0] [i_7] [15] [0] = (((max((~var_8), ((var_3 ? var_15 : var_7)))) >> (((((~4294967294) << (((arr_20 [i_9] [i_0]) + 92)))) - 33554403))));
                }
                var_27 = (-32767 - 1);
                var_28 = (min(var_28, (((~(((arr_29 [1] [i_7]) ? var_15 : (arr_29 [6] [i_5]))))))));

                for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_29 |= ((((min(((var_9 ? (arr_34 [i_10 + 1] [i_7] [i_5] [i_0]) : 32665)), 0))) / var_9));
                    var_30 = (max(var_30, (arr_2 [i_0] [i_0] [i_0])));
                }
                for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    arr_37 [i_0] [1] [i_0] = (((arr_27 [i_0] [i_0] [i_0] [20] [i_0]) ? (((((~(arr_21 [i_7])))) * var_3)) : (((~((max(var_8, (arr_35 [i_5])))))))));
                    var_31 = (min((min(((max(var_8, (arr_20 [i_0] [i_7])))), (min((arr_36 [i_0]), 4294967280)))), (((-(((arr_29 [i_0] [i_0]) + var_0)))))));
                }
                var_32 -= (((((var_6 || ((max((arr_15 [21]), var_8)))))) != ((((var_9 ? -9390 : var_2))))));
            }
            var_33 *= (((min((arr_34 [i_0] [i_0] [i_0] [0]), ((var_3 ? 6205152188235777565 : -21926)))) == (arr_30 [i_5] [i_5] [i_0] [i_0])));
        }
        var_34 = var_11;
    }
    var_35 = var_5;
    var_36 *= (min(((var_3 ? (var_13 % 777773178) : var_13)), var_14));
    #pragma endscop
}
