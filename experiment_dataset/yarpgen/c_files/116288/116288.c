/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((-((29423 ? ((-795119806 ? var_8 : var_9)) : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((var_8 + ((var_0 ? -795119814 : (arr_4 [i_0] [i_0]))))));

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_11 [i_1] = (max((((-29439 + 2147483647) >> (((max(-395814650, 47567941)) - 3899152640)))), (var_9 <= var_8)));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = 18446744073709551615;

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2 + 1] = ((var_9 ? ((795119792 >> (-15729 + 15741))) : -795119835));
                        var_14 = (min(((~((-795119827 ? 175 : (arr_10 [1] [i_0] [i_0]))))), (var_0 > 1664011034)));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_15 ^= (min(((795119813 ? (arr_10 [20] [i_1] [i_2]) : ((((arr_4 [i_1] [i_1 + 3]) / var_10))))), ((((arr_6 [i_4 + 1] [i_2 + 1] [i_1 - 2]) ? (arr_5 [i_0] [i_1] [i_1 + 2]) : var_8)))));
                        var_16 = var_2;
                    }
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_17 ^= ((!((max(var_8, (max(-795119816, var_11)))))));
                    var_18 -= (min((min(var_3, (arr_5 [i_1 - 1] [i_1 - 1] [i_0]))), (arr_5 [i_5] [i_1 + 2] [i_5])));
                    var_19 = ((+-29424) ? ((((((arr_17 [i_0] [i_1] [i_0] [i_1]) > (arr_9 [i_1] [i_0])))) ^ 255)) : var_9);
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    arr_27 [i_6] [i_6] [i_1] [i_6] = ((var_11 ? (~var_12) : ((((!((!(arr_2 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_33 [i_0] [i_6] = ((((((var_7 >= (arr_30 [i_7] [i_7] [i_6] [i_1 - 2] [i_0]))) ? 100 : var_11)) * (((var_5 == (arr_32 [i_0] [8] [i_0] [i_8 + 2] [i_8 - 1] [i_8 - 1]))))));
                                var_20 *= 524287;
                                var_21 = (min(var_21, (((((arr_4 [i_1 - 1] [i_1 + 1]) < var_10))))));
                                arr_34 [i_6] [i_7] [i_6 - 1] [i_1 + 3] [i_6] = ((((max(var_8, (var_6 <= 1912781318)))) ? var_4 : (arr_19 [i_6] [i_1] [i_1])));
                            }
                        }
                    }
                    var_22 = var_9;
                }
                arr_35 [15] [15] = (arr_24 [i_1] [i_1] [i_1] [i_0]);
                var_23 = var_12;
            }
        }
    }
    #pragma endscop
}
