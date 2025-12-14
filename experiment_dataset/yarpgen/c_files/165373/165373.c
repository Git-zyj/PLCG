/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_2 ? var_2 : 18446744073709551615)) + ((((var_6 || ((max(var_8, var_2)))))))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_11 [i_0] [i_1] [i_2 - 1] [i_0] [9] = ((((((arr_5 [i_0] [i_2 - 1] [i_1 - 1]) ? (arr_5 [i_0] [i_2 - 1] [i_1 + 1]) : (arr_5 [i_0] [i_2 - 1] [i_1 - 1])))) ? (min((-2147483647 - 1), (arr_5 [i_0] [i_2 - 1] [i_1 + 1]))) : (((arr_5 [i_0] [i_2 - 1] [i_1 - 1]) ? (arr_5 [i_0] [i_2 - 1] [i_1 + 1]) : (arr_5 [i_0] [i_2 - 1] [i_1 + 1])))));
                                var_20 = (((arr_0 [i_0]) == ((var_3 + (arr_8 [i_2] [i_2] [i_2] [i_1 + 1] [i_0])))));
                                arr_12 [i_0] [13] [13] [i_0] = (!var_5);
                            }
                            for (int i_5 = 4; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_21 = ((((((arr_2 [i_0]) ? (arr_7 [i_1 + 1] [i_0] [i_5 - 4] [i_0] [i_5 + 1]) : (arr_2 [i_0])))) ? (((arr_7 [i_1 + 1] [i_1] [i_5 + 1] [i_0] [i_3]) ? (arr_7 [i_1 - 1] [i_1] [i_5 - 1] [i_0] [i_5]) : (arr_7 [i_1 + 1] [i_1 - 1] [i_5 - 3] [i_0] [i_1 - 1]))) : (((((arr_2 [i_0]) || (arr_2 [i_0])))))));
                                arr_17 [i_0] [i_0] = (((((~(((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_16))))) <= (min((((29 & (arr_2 [i_0])))), var_12))));
                                arr_18 [i_0] [i_3] [i_1] [i_0] = (((((((var_8 ? 4294967295 : -68))) || var_6)) ? var_15 : (((((36027697507336192 ? 1 : var_10)) >= (!-83))))));
                                var_22 = (max((((((arr_5 [i_0] [i_1 - 1] [i_3]) ? 0 : (arr_2 [i_0]))) / var_0)), ((~((max(82, var_9)))))));
                            }
                            for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                var_23 = ((~(((arr_5 [i_0] [i_2 - 1] [i_6 - 2]) - (arr_5 [i_0] [i_2 - 1] [i_6 - 3])))));
                                var_24 = ((~(min((arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1]), (arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_0])))));
                                var_25 = 4776488;
                            }
                            var_26 = ((((min(var_3, (var_15 == var_7)))) || (var_5 & 2308527630)));
                        }
                    }
                }
                arr_21 [i_0] = ((((((arr_8 [i_0] [i_1] [i_1] [i_0] [i_0]) * (var_12 >= var_6)))) ? ((-(((arr_3 [i_0] [i_1] [i_0]) ? (arr_19 [i_0] [i_1 + 1] [i_1 + 1]) : 4177865827)))) : (((-(((!(arr_19 [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    var_27 = (max(((((var_11 | 1) & var_7))), ((((4081040821 ? var_3 : var_13)) | var_13))));
    #pragma endscop
}
