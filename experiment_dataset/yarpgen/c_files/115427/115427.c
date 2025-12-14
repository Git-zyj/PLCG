/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max((min((min(3641663166403090418, 204)), 23359)), var_11)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 -= ((arr_1 [i_0]) / ((-(((arr_1 [3]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_22 *= (max(252, var_17));
                            var_23 = ((14805080907306461197 ? (3641663166403090412 ^ 35632) : (~1565130758986515623)));
                            arr_13 [i_2] [i_1] [i_2] [i_3] = (arr_2 [i_0] [i_0]);
                            var_24 -= (-2147483647 - 1);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    {
                        var_25 = ((!((min(var_8, (max((arr_11 [6] [i_6] [i_1] [i_1 + 1] [i_1 - 1]), (arr_8 [i_0]))))))));
                        var_26 -= ((~(arr_15 [i_0] [i_0])));
                        var_27 *= ((((((arr_18 [i_5 - 2] [i_0] [i_6 - 1] [i_1 - 1]) ? var_9 : (arr_18 [i_5 - 2] [i_0] [i_6 - 1] [i_1 + 1])))) ? (min((arr_15 [i_0] [i_6]), (-23359 + var_5))) : (((~-764739522) ? ((((arr_15 [i_0] [11]) ? var_7 : (arr_12 [i_0] [i_1 + 1] [i_1] [i_5 + 1] [i_5] [i_5] [i_6 + 1])))) : (max(var_14, 0))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_28 = (arr_9 [i_0] [i_7]);
            var_29 = ((+(((var_1 + 9223372036854775807) << (((arr_6 [i_7] [i_7] [7] [i_7]) - 190))))));
            var_30 = (max(var_30, ((((arr_4 [i_0]) % 18446744073709551615)))));
            var_31 = (((arr_19 [i_0] [i_0] [i_0]) ? (arr_20 [i_0]) : (((-(arr_12 [i_0] [i_7] [8] [i_0] [i_0] [i_7] [i_0]))))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_32 = (min(var_32, ((((arr_3 [5] [i_0] [i_0]) << (((arr_16 [i_8]) - 17254847381264161201)))))));
            var_33 = (((arr_17 [i_0] [i_0] [i_8 - 1] [i_8]) && (arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
        }
        arr_25 [i_0] = (max((((max(var_18, (arr_20 [i_0]))) ^ (((-(arr_24 [i_0])))))), (((var_7 * ((var_10 % (arr_12 [0] [4] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_34 = -32747;
        var_35 *= 0;
    }
    var_36 = var_14;
    #pragma endscop
}
