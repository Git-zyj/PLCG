/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= ((~(((arr_2 [2] [i_0 + 1] [i_0 + 1]) + (arr_5 [i_0 + 1])))));
                var_16 = (max(var_16, (((!(-1 != -23748))))));
            }
        }
    }
    var_17 &= ((((((((var_9 << (((-9061900617561760568 + 9061900617561760570) - 2))))) ? (~var_6) : (~1)))) ? (~var_5) : ((9223372036854775807 ? -32 : 4283773529))));

    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_18 &= var_14;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 += 255;
                                var_20 = (min(var_20, (((min(231, -7557108066188077909))))));
                                var_21 = ((((1 ? (arr_18 [i_3 - 1]) : (arr_4 [i_3 + 1] [i_5 + 3])))) ? ((-123 ? (arr_4 [i_3 - 1] [i_5 - 1]) : (arr_18 [i_3 - 1]))) : ((((!(arr_4 [i_3 + 1] [i_5 - 2]))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_22 = (min(var_22, -9223372036854775806));
                    var_23 -= ((((max(-109, (arr_23 [i_2] [i_7] [4]))) | -23726)) & (!7157611729007438105));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_24 = (max(var_24, -var_6));
                                var_25 = (max(var_25, (1 | 7964855341694348813)));
                                var_26 = (max(var_26, ((((((~(arr_33 [i_2 + 3] [i_10 + 1] [i_8] [i_9] [i_2 - 2])))) ? (~7157611729007438129) : ((((((17 >> (122 - 95)))) ? (arr_19 [i_2] [i_2 + 3] [i_8] [i_10] [i_10 + 2] [i_10 + 2]) : ((max(var_8, -23752)))))))))));
                                var_27 *= -1;
                            }
                        }
                    }
                }
            }
        }
        var_28 = (max(var_28, 1));
    }
    for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_29 = (min(var_29, ((((var_5 + 2147483647) << ((((((max((arr_5 [i_11 + 2]), (arr_5 [i_11 - 3])))) + 79)) - 25)))))));
                    var_30 = (max(var_30, 55));
                    var_31 += (((((-(arr_8 [i_12])))) ? (-255234649 + 7157611729007438105) : (((-(arr_14 [i_12] [i_11 - 1] [i_11 + 2]))))));
                }
            }
        }
        var_32 = (max(var_32, ((max(7157611729007438108, -80)))));
    }
    #pragma endscop
}
