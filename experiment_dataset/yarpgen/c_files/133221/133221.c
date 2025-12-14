/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((((min((((arr_5 [i_0]) + var_13)), (arr_1 [i_0])))) ? (((min((arr_2 [i_1]), 65528)) * (arr_7 [i_0] [i_0]))) : (((((arr_7 [9] [i_3]) && (arr_7 [i_0] [i_1])))))));
                            var_14 = (min((((max(17260854931481795003, 2147483647)) + (0 ^ 137))), ((min((min(4146173758, -498009145)), (arr_4 [1] [i_1] [i_1]))))));
                            var_15 = (((((var_12 ? (arr_4 [i_0] [i_0] [i_2]) : ((var_3 ? (arr_1 [i_3]) : var_8))))) ? var_5 : ((245 ? 18446744073709551615 : 38713))));
                        }
                    }
                }
                var_16 = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }

    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_17 = (max((((min(var_13, -18837)) > var_6)), ((!((!(arr_0 [i_4] [i_4 - 1])))))));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_18 = 54209;
            var_19 = (min(var_19, (((-((1206457759 ? 4294967295 : 0)))))));
            arr_18 [i_4] = ((((((var_2 > var_3) ^ ((-(arr_2 [i_4 + 2])))))) ? (((-((1 ? 913312162 : (arr_12 [i_4] [i_4])))))) : (min(((((arr_14 [i_4]) << (var_11 - 5556)))), var_10))));
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_20 = ((((((var_8 + (((arr_14 [i_4]) ? (arr_9 [i_6 - 2] [i_6] [i_6] [0] [i_4] [i_4]) : var_11)))) + 2147483647)) << (((((1992230769 ? 1 : 14795123571999523551))) ? (((min((arr_4 [i_4] [i_4] [i_6]), (arr_1 [i_4]))))) : var_4))));
            var_21 = ((!(((((1836839818550566155 < (arr_13 [i_4] [i_6 - 1]))) ? (((max(var_6, (arr_12 [i_4] [i_6]))))) : (max((arr_13 [i_4] [i_4]), var_7)))))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_22 = (min(var_22, ((max(1, ((((-(arr_17 [i_4 - 1]))) % (arr_14 [i_4 - 1]))))))));
                        var_23 *= ((!((min((~var_4), ((min((arr_27 [i_4]), var_9))))))));
                        arr_29 [i_7] [i_8] [i_7] [i_7] &= 13;
                    }
                }
            }
            arr_30 [i_4] = ((-((((arr_6 [i_4 + 1] [i_4 + 1] [12]) == ((1 ? var_0 : (arr_8 [i_4] [1] [i_7] [i_7] [0]))))))));
        }
        var_24 = (min(var_24, ((min((arr_3 [i_4]), (((max(1, 10)) + (~var_7))))))));
        arr_31 [i_4] [2] |= ((((~((var_0 ? (arr_25 [2]) : var_4)))) >= ((((arr_7 [i_4 + 2] [i_4 + 2]) ? ((var_2 - (arr_6 [i_4] [i_4 + 2] [i_4]))) : 78)))));
    }
    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_25 = (max((((8 ? (7897565070582205099 <= var_7) : 7))), (((!2139768619) ? var_5 : (min(0, (arr_0 [24] [i_10])))))));
        var_26 ^= 3610;
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_27 = (min(var_27, (((((((8969 ? -1110038599222556930 : (arr_16 [i_11] [8] [i_11]))) >= ((((arr_1 [i_11]) ? 23 : var_11))))) ? ((min(((var_6 ? var_1 : var_2)), 1851299532))) : 4294967272)))));
        arr_37 [0] [0] = ((-(((arr_1 [i_11 + 1]) ? ((var_11 ? (arr_20 [i_11]) : var_0)) : (arr_1 [i_11])))));
    }
    #pragma endscop
}
