/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_20 = (min(var_20, (~15630795541813141870)));
        var_21 = (((((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0]))) ? (!15630795541813141876) : (arr_0 [i_0 - 1] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = (-(arr_5 [12]));
            arr_7 [i_2] = ((((((arr_6 [i_1] [i_1]) ? 1073479680 : 1073741824))) ? (arr_4 [9] [i_1]) : var_11));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_23 = max(((var_15 >> (((arr_9 [i_3] [i_1]) - 49829)))), (((arr_8 [i_1] [i_3] [i_1]) ? (arr_9 [i_3] [i_3]) : 31820)));
            var_24 = 2530499041;
            var_25 &= (max((((!(((var_0 ? (arr_5 [i_1]) : 232)))))), ((min(var_11, var_10)))));
            var_26 = (arr_10 [i_1] [i_3] [i_3]);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_27 = ((((((((arr_4 [i_4] [i_4]) || (arr_14 [i_1] [i_1])))))) + 3));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_28 = max(((((((-(arr_23 [i_1] [20] [3] [14] [i_7])))) ? var_15 : (arr_18 [i_5 - 1] [i_5 - 1] [i_5] [i_7 - 1])))), ((var_0 ? var_12 : (((arr_8 [i_6] [i_6] [i_6]) ? 12609535715104303676 : (arr_18 [i_1] [i_1] [i_1] [i_1]))))));
                            var_29 = var_13;
                            var_30 = min((max(1123644658, var_5)), 2815948531896409739);
                            var_31 = (max(3047227922464238849, -1073741820));
                            arr_25 [i_7] [i_1] [i_5] [4] [i_7 + 1] |= (((((~9223372036854775799) ? (65519 && var_3) : ((var_9 / (arr_21 [i_1] [i_4] [10] [i_6]))))) >= ((~((-1073741822 ? 884960906125444924 : (arr_10 [i_1] [i_1] [i_1])))))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_32 = (min(var_32, (-32767 - 1)));
                arr_30 [i_8] [i_8] [i_4] [17] = (1005163339 == 36027697507336192);
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_42 [1] |= (((arr_17 [i_11 + 1]) ? ((-395294827 ? var_11 : 2048)) : (-23 & 45545)));
                            arr_43 [i_1] [i_4] = -30734;
                            var_33 = ((arr_27 [i_1] [i_1] [i_9] [17]) ? (arr_20 [i_11] [14] [i_11] [i_1] [i_11 + 1]) : (~1073741823));
                        }
                    }
                }
                arr_44 [i_4] [i_4] [i_1] = -9866773590733586762;
            }
            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                arr_47 [i_1] [i_4] = (arr_18 [3] [i_4] [i_12] [i_12 - 2]);
                var_34 = (max((arr_3 [22] [i_4]), (((((max((arr_19 [i_1] [4] [i_4] [i_12]), (arr_8 [i_1] [i_1] [22])))) >= ((var_4 - (arr_8 [i_1] [13] [i_12 + 2]))))))));
                arr_48 [7] [7] |= var_19;
            }
        }
        var_35 = (min(var_35, ((-(((!((var_6 > (arr_27 [i_1] [i_1] [i_1] [i_1]))))))))));
        var_36 *= -1073479680;
    }
    var_37 = ((((var_12 ? (max(523776, 36027697507336217)) : -var_15)) ^ (((var_6 ? var_18 : var_1)))));
    #pragma endscop
}
