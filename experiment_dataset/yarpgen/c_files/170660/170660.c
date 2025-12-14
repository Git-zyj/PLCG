/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = ((((var_2 ^ (var_11 | var_8))) == var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_0] = min(30265, (arr_14 [i_0] [i_2] [i_0]));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_0] = 0;
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_4);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_20 = (((((~(((!(arr_0 [i_0]))))))) >= (min((((var_10 ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_0]) : (arr_10 [i_0] [i_3 + 1] [i_2] [i_1] [i_0])))), (arr_9 [i_0] [4] [i_0] [i_0] [i_3 + 1] [i_3 - 1])))));
                            arr_22 [i_1] [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] |= ((arr_16 [i_1]) & ((((-16753382265784505018 == (((((arr_10 [i_1] [i_3] [0] [10] [i_1]) != 1)))))))));
                            arr_23 [i_0] [i_1] [10] [i_0] [i_5] = (max(4294967295, 18446744073709551615));
                            var_21 *= (((((var_7 >> (3216352099 - 3216352099)))) * (((arr_9 [i_0] [i_1] [i_3 + 2] [i_3] [i_5] [i_5]) | (arr_9 [i_5] [i_5] [i_3 + 1] [i_0] [i_5] [12])))));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] |= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]);
                        var_22 = (max(var_22, (arr_1 [3])));
                        var_23 = ((~(((arr_10 [i_0] [i_1] [i_1] [7] [i_0]) ? ((-(arr_2 [i_1] [6]))) : var_4))));
                        arr_25 [i_0] [i_1] [i_0] = ((0 ? (!1078615196) : (arr_1 [i_0])));
                    }
                    var_24 = ((((((arr_1 [i_1]) ? (arr_1 [10]) : (arr_1 [i_0])))) ? (((((arr_8 [i_0] [i_1] [7]) ? (arr_3 [i_0] [6]) : var_10)) ^ (((~(arr_12 [i_0] [5] [12] [i_0])))))) : (((var_9 <= 11566089250536092546) * (min((arr_12 [i_2] [i_1] [9] [i_0]), var_17))))));
                    arr_26 [i_0] [i_1] [2] [i_1] = (arr_10 [i_2] [i_1] [i_2] [2] [i_0]);
                    arr_27 [i_0] [i_2] [i_2] [i_0] = (((arr_16 [i_0]) <= ((((arr_14 [i_0] [i_1] [i_0]) << (var_6 - 1406607586))))));
                    arr_28 [i_0] [i_1] [i_0] [i_0] = ((((-(-1 != 562949953421184))) * ((((((-1628934567 ? (arr_7 [10] [i_1] [i_1] [i_0]) : var_11))) <= (min((arr_21 [i_0] [i_0] [i_1] [i_2] [i_1]), var_11)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_25 -= (max(((((((var_1 ? (arr_32 [i_8]) : (arr_29 [i_6 - 1] [4])))) && ((((arr_34 [4] [4]) ? -102 : (arr_32 [i_6]))))))), ((120 | ((var_14 ? 1628934567 : 1628934566))))));
                    var_26 = ((((((arr_33 [i_6 - 1]) % (arr_29 [i_6 + 1] [i_8])))) ? (((!(arr_31 [i_6 + 1] [i_8])))) : 3529281867));
                }
            }
        }
    }
    var_27 = (var_13 ? (((var_15 >= 2033830017) ? (!0) : var_5)) : (~var_0));
    #pragma endscop
}
