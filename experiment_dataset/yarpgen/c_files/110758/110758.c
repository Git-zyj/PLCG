/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 -= (((((((((arr_4 [i_1]) ? (arr_2 [i_0] [i_1]) : 1498526319))) ? var_6 : ((((!(arr_4 [i_0])))))))) ? (arr_0 [i_0] [i_1]) : 1));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_7 [i_0] [i_1] [i_2]);
                    var_16 = (max(var_16, (arr_8 [i_1])));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_17 = (max((((((var_4 ? 1099511625728 : -141427800))) ? 124 : ((var_13 ? (arr_3 [i_0] [i_0]) : 2)))), (((!(arr_4 [i_1]))))));
                    var_18 |= ((!((max(1099511625728, (((var_0 ? (arr_3 [i_0] [i_3]) : (arr_1 [i_0])))))))));
                    var_19 = (min(var_19, ((((~(((46 <= (arr_8 [i_1]))))))))));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_4] [i_4] = (arr_4 [i_0]);
                    var_20 = ((~(((arr_1 [i_0]) ? (arr_11 [i_1]) : (arr_11 [i_0])))));
                    arr_15 [i_0] [i_1] [i_4] = 4032;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_22 [i_4] [i_5] = (((!75) || ((((arr_2 [i_1] [i_6 + 1]) % (arr_4 [i_6 + 1]))))));
                                arr_23 [i_0] = ((!((max((arr_18 [i_5] [i_5] [i_5] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1]), (var_1 > 2829101796634820233))))));
                                var_21 = (arr_0 [i_0] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_22 = ((((~((var_3 ? 0 : var_1)))) * (((~(arr_3 [i_0] [i_1]))))));
                            var_23 = (arr_25 [i_0] [i_1] [i_7] [i_8 - 2]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                var_24 = (arr_30 [i_9] [i_10] [i_10]);
                var_25 = (arr_30 [i_9] [i_9] [i_9]);
            }
        }
    }
    var_26 = var_12;
    var_27 = (min(var_27, (((!(!-540510779))))));
    #pragma endscop
}
