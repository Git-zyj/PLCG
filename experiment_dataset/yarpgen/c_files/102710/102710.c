/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_2;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 1] = (((var_5 / (min(-6012197705733127422, (arr_0 [i_0]))))));
        arr_4 [i_0] = var_2;
        var_13 = (((arr_0 [i_0 - 2]) * (arr_0 [i_0 - 2])));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((!var_0) ? -var_11 : (((arr_0 [i_1]) ? (arr_0 [i_1]) : (max(6012197705733127416, (arr_1 [i_1]))))));
        arr_9 [7] [7] = arr_1 [1];
        var_14 |= ((((!(arr_5 [10] [i_1 - 2]))) ? ((-32745 ? 6012197705733127423 : 6012197705733127418)) : ((((arr_2 [i_1 - 2]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 2]))))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_15 = ((((arr_7 [i_1 - 2]) <= (arr_2 [i_1 - 1]))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_16 = (max((((!((max(2, (arr_2 [i_2]))))))), (arr_7 [i_3])));
                            var_17 = ((~((-1587432336092735688 ? (arr_11 [10] [10] [i_3]) : 1))));
                            var_18 = -13999;
                            var_19 -= var_1;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_24 [i_1 - 1] [0] [i_2] [i_2] &= ((+(((arr_13 [i_1 - 2] [i_6 + 3] [i_7] [i_6 + 3]) ^ (arr_19 [i_1 + 1] [i_6 + 3] [18] [i_6] [i_6 + 1] [0])))));
                        arr_25 [i_1 + 1] [i_6] [i_6] [i_6] [i_7] = (max((((arr_13 [i_7] [i_1] [i_2] [i_1]) ? ((((arr_11 [i_1] [i_2] [i_6 + 3]) ? 4676852760280787489 : -6012197705733127421))) : 308880924464889498)), (arr_1 [i_1 + 1])));
                        arr_26 [i_1] [i_2] [i_6] [i_7] [i_6] [i_7] = (max(((((~(arr_13 [i_6] [i_6] [i_6 + 3] [i_6]))))), (max((max(511, (arr_17 [i_1] [i_6] [i_6] [i_7 + 2]))), (arr_20 [i_6] [i_6] [i_7])))));
                        arr_27 [i_6] [i_2] [i_6] [1] = ((!(((308880924464889495 ^ 4095) == ((((arr_15 [i_6] [1]) - (arr_18 [i_1] [2] [i_6] [i_6] [i_7]))))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = (((arr_10 [i_8 - 1]) ? ((~(arr_10 [i_8 - 1]))) : (((arr_10 [i_8 - 1]) ? 14004 : (arr_10 [i_8 - 1])))));
        arr_33 [i_8] = ((((arr_29 [i_8] [i_8]) ? (4121456080164446624 != 13985) : (max((arr_11 [i_8 - 2] [i_8] [i_8]), var_6)))));
        var_20 = max((~-7872859211703253448), (max(var_6, (arr_31 [i_8 - 1]))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_39 [i_9] [i_9] [i_9] = (((max(((max(32760, var_1))), 11)) != (1623529299 - var_5)));
                    var_21 = -19696;
                    arr_40 [i_8] [i_9] [i_8] [i_9] = (max(((max(19682, -32755))), 1623529287));
                }
            }
        }
        arr_41 [i_8] = ((((max((arr_14 [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8 - 2] [i_8]), ((-6012197705733127437 ? -6012197705733127436 : 511))))) ? ((((arr_1 [i_8 + 1]) ? (max(-13969, var_6)) : var_5))) : ((-6012197705733127437 ? (arr_37 [i_8] [i_8 + 1] [i_8] [i_8 - 1]) : (arr_11 [i_8 - 1] [i_8 - 1] [i_8 - 2])))));
    }
    #pragma endscop
}
