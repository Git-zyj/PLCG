/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((!var_4) & (~var_6)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 *= ((((-(arr_2 [i_0] [i_1])))) ? ((((!((!(arr_11 [i_3] [12] [8]))))))) : 1997682644);
                                arr_12 [i_1] [1] [i_2] [1] = (((((-(arr_3 [i_1 + 1] [i_1 + 1])))) ? (((arr_8 [i_1 - 1] [i_1] [i_2] [i_1] [i_3]) ? 2901794620676951282 : (arr_3 [i_1 + 1] [i_1]))) : (((-(arr_3 [i_1 - 1] [i_1]))))));
                            }
                        }
                    }
                    var_13 += (arr_1 [i_0]);

                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_14 *= ((-(((arr_9 [i_1 - 1] [i_1]) ? 2901794620676951282 : (arr_9 [i_1 + 1] [i_1])))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_20 [i_1] [i_5] [6] [6] [i_1] = (arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                            arr_21 [i_1] [i_5] [i_2] [i_1 - 1] [i_1] = (((arr_14 [i_6] [i_1] [21] [21] [i_1] [i_0]) * 2901794620676951291));
                            var_15 = (arr_0 [i_1 + 1]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, ((((((arr_16 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : 0)) <= (((-(arr_14 [i_0] [i_7] [i_2] [i_2] [2] [0])))))))));
                        arr_25 [i_1] [i_1] [i_1] = (((arr_13 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]) < (((arr_13 [i_1 + 1] [3] [i_1 + 1] [i_7] [i_1] [i_1 + 1]) ? (arr_13 [i_1 + 1] [8] [16] [i_7] [i_7] [i_7]) : (arr_13 [i_1 + 1] [i_0] [i_2] [i_7] [i_2] [i_2])))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_1] [1] [i_2] [19] [i_8] = (arr_16 [i_0] [i_1] [i_2]);
                        var_17 = (max(var_17, (((!(((-(arr_18 [i_8] [i_2] [i_1] [i_1] [i_0] [i_0])))))))));
                    }
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        arr_32 [i_1] [i_1] [i_1] [i_9] [i_0] [i_9 - 1] = arr_11 [i_0] [i_1] [1];
                        arr_33 [i_0] [i_1] [i_1] = 32767;
                    }
                }
            }
        }
        var_18 &= (-32767 - 1);
        var_19 = 32766;
        var_20 = -269737703;
        arr_34 [i_0] [i_0] = (arr_24 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_21 = (((((~(arr_30 [i_10])))) ? (arr_17 [i_10] [i_10] [21] [i_10] [i_10]) : -642323345));
        var_22 = (max(var_22, (((~((-81 ^ (((arr_35 [i_10]) ? -1 : (arr_4 [i_10]))))))))));
        arr_37 [i_10] [i_10] = ((!((!(arr_26 [i_10])))));
        var_23 += (arr_26 [i_10]);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_24 *= ((29360128 != ((-(((arr_19 [i_12] [i_11] [i_10]) << 2))))));
                    arr_43 [i_12] = ((!(arr_19 [i_10] [i_11] [i_12])));
                }
            }
        }
    }
    var_25 = ((var_2 & ((var_8 ? 1 : var_2))));
    var_26 ^= var_3;
    #pragma endscop
}
