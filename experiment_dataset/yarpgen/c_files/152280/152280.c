/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_8, var_9));
    var_11 -= var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((min((min((arr_1 [i_0]), 59)), 134217727)));
        var_13 ^= (arr_0 [4] [0]);
    }

    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_14 = -12878;
                    var_15 = (((!var_2) << ((((arr_1 [i_1]) <= (arr_9 [i_3] [i_2] [i_3] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 7;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 7;i_5 += 1)
                        {
                            {
                                var_16 = var_3;
                                var_17 = (((((min(var_6, 0)) % (((-(arr_5 [i_1] [i_1 + 1])))))) % (((~((min(var_3, var_7))))))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (((arr_5 [i_1] [i_1]) ? (((((arr_6 [i_1 + 1]) + 2827)) - var_5)) : (153 % -12911)));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_19 = var_3;
        var_20 = ((((min((arr_3 [i_6] [i_6 + 1]), (arr_3 [i_6] [i_6])))) > ((max(var_0, var_6)))));
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_21 = (min(var_9, ((min(16383, (arr_21 [i_7]))))));
        var_22 ^= ((((min(32767, -5969329902884533484))) ? 22169 : ((((1305751175 >= 0) <= 12911)))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_23 = (max((arr_29 [i_7] [7] [i_7 + 2]), (((6931503478878329158 == (arr_29 [i_7] [i_8] [i_7 + 2]))))));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_24 = (((((arr_32 [i_7] [0] [i_7 + 2] [i_7 - 1] [i_7 - 1]) <= (arr_23 [i_7] [i_7]))) ? (((arr_29 [i_11] [i_11] [i_9]) ? (arr_27 [12] [i_9]) : 149)) : var_2));
                            var_25 = ((!(arr_26 [i_7 + 1])));
                        }
                        var_26 = 536870910;
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 15;i_12 += 1) /* same iter space */
    {
        var_27 = (min((min((arr_33 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1]), -56)), ((max(-22180, (!0))))));
        var_28 = ((((min((-2048 / 134217727), 255))) || ((((-2048 != 3892680694240270023) & (((arr_27 [i_12] [1]) ? (arr_34 [i_12] [i_12]) : 13026942162763881005)))))));
        var_29 |= 0;

        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 13;i_15 += 1)
                {
                    {
                        var_30 = (max(var_30, 1));

                        for (int i_16 = 1; i_16 < 14;i_16 += 1)
                        {
                            var_31 = (min(var_31, (((~(min(22166, 4294967295)))))));
                            var_32 = ((!((((-76 * 0) ? (min(0, 39872)) : (arr_25 [i_12 + 2] [i_12 + 2] [i_14]))))));
                            var_33 = ((-(!9223372036854775807)));
                        }
                    }
                }
            }
            var_34 |= 5613644822363123563;
        }
    }
    #pragma endscop
}
