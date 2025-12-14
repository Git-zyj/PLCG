/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_3));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((-(arr_0 [i_0])))) ? ((min((arr_1 [i_0]), (!766445449)))) : ((-(min(-766445449, 53186))))));
        var_20 = (((12347 << var_1) ? var_10 : -9835));

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_21 = var_13;
            arr_6 [i_0] [i_1 - 4] = ((!(((((min((arr_3 [i_0] [i_1]), var_6))) ? -5243555367713643224 : (arr_4 [i_1] [i_0]))))));
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_2] [i_3 - 1] [i_4] [i_5] [i_6] |= ((+(((arr_4 [i_3 + 2] [i_3 - 1]) ? (arr_4 [i_3 + 2] [i_3 - 1]) : 934639380153756007))));
                            arr_22 [i_2] [i_2] [i_4 - 1] [i_5] [i_5] [i_6] [i_3] = ((((53192 << (766445449 - 766445443)))));
                            arr_23 [i_3] = (((((((((arr_5 [i_2] [i_4 - 4] [i_6]) ? 46487 : var_17))) ? (arr_16 [i_2] [i_3] [i_5] [i_6]) : var_13))) <= (min(58666, (min(665339282, 9072255588556018896))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_22 = (min(((max((min((arr_15 [i_8] [i_8]), (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))), ((min(var_0, (arr_4 [i_2] [i_3]))))))), ((-0 ? ((137854272 ? 1 : var_12)) : (~64298)))));
                            var_23 = max(25717, 46477);
                            var_24 = (max(var_24, ((((arr_30 [i_2] [i_3] [i_7 - 2] [i_9] [6]) + -62829)))));
                            arr_31 [i_3] = ((!(((~(arr_29 [i_2] [i_7 + 1] [i_7] [i_8] [i_9] [i_9 - 1]))))));
                        }
                    }
                }
            }
            var_25 = ((0 ? -52 : 22845));
            arr_32 [i_3] = (!255);
        }
        arr_33 [i_2] = (((arr_8 [i_2]) ? 896 : (((!((min(46487, 1))))))));

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_26 = 85;
            var_27 -= ((+(((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2])))));
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            var_28 = (max(var_28, ((min(var_14, (((arr_37 [i_2]) ? (arr_17 [i_2] [i_2] [i_2] [i_2] [12] [i_2]) : (arr_37 [i_2]))))))));
            var_29 = ((((min((arr_7 [i_2]), (arr_7 [i_2])))) ? (arr_15 [i_2] [i_11]) : (arr_3 [i_2] [i_11])));
        }
        arr_38 [i_2] = -100;
        arr_39 [i_2] = (max(-1, ((~(arr_30 [i_2] [i_2] [i_2] [10] [i_2])))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_30 |= ((((min((arr_41 [1] [16]), (arr_41 [6] [6])))) != (min((arr_41 [i_12] [18]), 70093866270720))));
        var_31 = (max(var_31, 19048));
        arr_43 [i_12] [i_12] = ((((var_17 ? (arr_41 [9] [i_12]) : -354022438)) / (((-(arr_40 [i_12] [i_12]))))));
        var_32 ^= (min(((((-36449 + 2147483647) >> (((arr_41 [i_12] [20]) ? 0 : (arr_42 [i_12])))))), (~1550683069)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        arr_47 [i_13] = (arr_45 [i_13]);
        var_33 ^= (((arr_41 [i_13] [i_13]) ? (arr_40 [i_13] [i_13]) : (arr_44 [i_13])));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_51 [i_14] [14] &= (arr_42 [i_14]);
        var_34 += (max((((((min(156, var_1)))) ^ (12 - 9876503357881842684))), 18446744073709551615));
        var_35 |= 1534182399;
    }
    #pragma endscop
}
