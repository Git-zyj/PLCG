/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((!((!(!129)))));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_2 - 1] [i_2 - 1] [1] [i_0] = ((((((((arr_3 [i_0]) / (arr_9 [i_0] [i_1 - 1] [i_2 - 1])))) ? var_6 : ((~(arr_4 [i_0] [i_0]))))) != 0));
                        arr_12 [i_0] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = (((((-1 ? (1 < 8676552829550171207) : (arr_3 [i_0])))) ? ((((!(arr_0 [i_1 - 1]))))) : (min((arr_6 [i_3 + 1] [i_2 - 1] [i_2 + 2] [i_1 - 1]), var_1))));
                        arr_13 [i_0] [i_0] = (((((((min((arr_1 [i_1]), (arr_5 [i_0] [i_0])))) ? (((arr_3 [i_0]) - var_13)) : ((268402688 ? 0 : 40776))))) + ((28 ? (min((arr_3 [i_0]), (arr_4 [i_0] [i_3 + 1]))) : (((59721 - (arr_2 [18]))))))));
                        var_16 += (min((((arr_4 [i_3] [i_0]) ? ((((arr_9 [6] [4] [i_0]) << (var_10 - 988491899)))) : (((arr_6 [19] [19] [0] [10]) | (arr_4 [i_0] [i_1]))))), (((var_4 ? -1933327063 : ((min(var_11, (arr_0 [i_3])))))))));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_17 -= ((9770191244159380401 == (((-(arr_10 [i_2 + 1] [i_4 + 1] [i_4] [7]))))));
                        var_18 = (arr_4 [i_0] [i_1 - 1]);
                        var_19 -= var_2;
                        var_20 = (min(var_20, ((min((1 >= -19187), (((arr_6 [i_4 + 1] [i_2 - 1] [i_2 - 1] [i_1 - 1]) >= (arr_6 [i_4 + 1] [i_2] [i_2 - 1] [i_1 - 1]))))))));
                        var_21 += ((0 >= (((arr_6 [i_0] [i_1 - 1] [i_2] [i_4]) & var_4))));
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] = 5814;
                        var_22 ^= ((((((arr_1 [i_2 - 1]) && (((arr_15 [i_0] [i_5 + 1]) >= var_11))))) | (~-var_8)));
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_25 [i_0] = ((((1 ? 6 : ((min(250, var_0))))) < (1 == 7168)));
                            arr_26 [i_6 + 1] [i_6 + 1] [i_6] [13] [i_6 - 1] [i_0] [i_6] = (((((1872660357 ? (7148 | 7148) : var_15))) & (((arr_10 [i_7] [1] [i_2 - 1] [i_0]) - (arr_14 [i_6 + 1] [i_0])))));
                            var_23 -= ((((((arr_23 [i_0] [i_1] [i_6 - 1] [i_1 - 1] [i_0] [16]) / (arr_23 [i_0] [i_0] [i_6 - 1] [i_2] [i_0] [10])))) / (((((var_15 ? var_11 : 8192))) * (arr_6 [i_0] [i_0] [i_2] [i_6 - 1])))));
                            arr_27 [i_0] [i_0] [i_0] [i_2] [i_6] [i_6] [1] = (~-3528918081803785726);
                            arr_28 [i_1] [i_0] [i_0] = (var_5 & var_0);
                        }
                        var_24 -= ((~(+-194)));
                    }
                }
            }
        }
    }
    var_25 = ((+((+(((var_8 + 2147483647) << (var_2 - 53179)))))));
    #pragma endscop
}
