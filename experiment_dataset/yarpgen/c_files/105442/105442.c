/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = max((-3121615287555513942 - -6372798148138764251), (arr_0 [i_0] [i_0]));
        var_18 -= ((~(((((-3121615287555513943 ? -69 : var_6))) ? (max(-5879210252269390571, 13)) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        arr_2 [i_0] = var_14;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((-5879210252269390590 ? 1 : (-127 - 1)));
        var_19 = (arr_3 [16] [i_1]);
        arr_6 [i_1] = ((~((((!(arr_3 [i_1] [11])))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = (((((~(arr_3 [i_2] [i_2])))) ? (((arr_8 [i_2] [i_2]) * (arr_7 [i_2]))) : (arr_7 [i_2])));
        var_20 = (max(((~(arr_1 [i_2]))), (~-12878)));
        var_21 = ((((((-103 ? 13 : (arr_4 [i_2])) > ((53067 ? 57165 : -4)))))));
    }
    var_22 = (-127 - 1);
    var_23 = (((((var_5 ? var_8 : (-127 - 1))))) ? var_7 : (min(17660514534521125629, var_3)));

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_13 [1] [i_3] = (((!222) ? ((((((1 ? (arr_0 [i_3] [4]) : (arr_1 [17]))) < (arr_11 [i_3]))))) : (max((((arr_0 [i_3] [i_3]) + 17660514534521125629)), 17660514534521125629))));
        var_24 = ((((~(arr_0 [i_3] [i_3]))) % (arr_11 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_25 -= ((~(((arr_21 [i_7 - 3] [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 2]) ? (arr_22 [i_3] [i_4]) : ((((arr_8 [i_3] [i_6]) > -1719602144)))))));
                                arr_25 [i_5] [i_6] [i_7] = (((~55806) * (max(1, 179084108))));
                            }
                        }
                    }
                    arr_26 [i_3] |= 0;
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        arr_29 [i_8] = ((((((arr_28 [i_8 - 1] [i_8]) ? (arr_28 [i_8 + 1] [i_8 + 1]) : (((arr_28 [i_8] [i_8]) ? (arr_27 [i_8 - 2] [i_8 - 2]) : (arr_27 [i_8] [i_8 + 2])))))) ? (arr_28 [i_8] [i_8 - 2]) : (((arr_27 [i_8 + 2] [i_8 + 1]) % (arr_27 [i_8 + 1] [i_8 - 1])))));
        arr_30 [i_8] [i_8 - 2] |= ((((((arr_28 [i_8 - 3] [i_8 - 3]) < (arr_28 [i_8 + 2] [i_8 + 2])))) + ((~(arr_28 [i_8 + 1] [i_8 + 2])))));
        var_26 = (min(var_26, (108 + 5791947937800082344)));
        arr_31 [10] = ((15 ? -72 : 1));
        var_27 = (min(var_27, ((((max(31, ((1 ? 1 : 1)))) ^ (((((min(9730, 4))) || (((9007199187632128 ? -52 : 1)))))))))));
    }
    #pragma endscop
}
