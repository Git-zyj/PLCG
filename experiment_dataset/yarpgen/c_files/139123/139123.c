/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = ((((min((23395 / var_11), (~42141)))) && (((+((min((arr_2 [i_3]), (arr_9 [i_0] [i_1] [i_2] [i_1] [i_4])))))))));
                                var_17 = (((((-1306904312005731692 ? var_12 : (arr_9 [i_3] [i_1] [i_2] [i_1] [i_2])))) & (arr_9 [i_0] [3] [i_2] [i_1] [i_4])));
                                arr_14 [i_1] = ((23389 ? 23394 : 42147));
                                var_18 = 928500184;
                            }
                        }
                    }
                    var_19 = var_13;
                }
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_20 = (((arr_6 [i_7]) > 8097));
                                arr_22 [i_0] [7] [0] [i_1] [i_7] [i_7] = (((((arr_8 [i_1] [6] [i_6] [i_7]) ? 23377 : 9223372036854775787))));
                            }
                        }
                    }
                    arr_23 [9] [i_1] [i_1] [i_0] = ((-9223372036854775788 ? (((((((!(arr_2 [9])))) <= ((((arr_3 [1] [1]) == 16))))))) : ((((((arr_5 [i_0] [i_5]) % (arr_19 [i_0])))) + (~18401356590229637676)))));
                    arr_24 [i_0] [i_1] = (((-182 ? (-9223372036854775807 - 1) : (~var_9))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 7;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_21 = ((~26) | var_9);
                                var_22 *= 448;
                            }
                        }
                    }
                    var_23 = (arr_5 [8] [9]);
                    arr_32 [i_1] [i_1] [i_8] = (arr_13 [i_0] [i_1] [0] [i_1] [i_1] [i_8 + 2]);
                }
                arr_33 [i_0] [i_1] = (((arr_0 [i_1]) / (((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [1]) && (arr_10 [i_0] [i_0] [i_1] [i_0])))))));
                var_24 = var_12;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_25 = arr_41 [i_11] [i_11];
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_26 = (((((var_8 ? (max(var_11, (arr_35 [7]))) : (max(var_7, var_3))))) ? (arr_38 [i_15 + 3] [i_12]) : (((42148 + (arr_41 [i_12] [i_12]))))));
                                arr_47 [i_11] [i_12] [i_13] [10] [i_15] = (((min(4294967295, 9223372036854775784)) != (arr_40 [i_12] [i_12] [i_15])));
                                var_27 = ((-((var_3 ? 23382 : (~var_3)))));
                            }
                        }
                    }
                    var_28 = (6210075496891821117 - 4317470025284708401);
                    arr_48 [i_11] [i_11] [i_13] [i_13] = ((3201825347 ? (!-6210075496891821117) : 9223372036854775790));
                }
            }
        }
    }
    var_29 = (((((18446744073709551611 ? 1693 : -2646751943650234774))) ? (0 != -var_2) : (((((123990306157800261 ? 42156 : 1752229567))) ? var_11 : var_7))));
    #pragma endscop
}
