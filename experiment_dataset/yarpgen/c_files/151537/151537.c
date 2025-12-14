/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 70214999;
        var_17 = (max(var_17, (((!(((-(arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= (max((((4224752317 <= -1932550957) ? (arr_5 [i_1] [i_1]) : ((21558 ? var_10 : (arr_3 [i_1] [i_1]))))), var_13));
        arr_7 [3] |= ((((max((arr_4 [i_1] [i_1]), var_6))) << (((((arr_4 [i_1] [i_1]) ? 917504 : (arr_4 [i_1] [i_1]))) - 917504))));
        arr_8 [i_1] [i_1] = ((70214994 ? (4224752281 <= 1) : -1));
        var_18 = (((-10826 <= var_9) * (((!(arr_4 [i_1] [i_1]))))));
        var_19 = ((((-((max(var_3, (arr_3 [i_1] [i_1])))))) & ((((arr_5 [i_1] [i_1]) <= (arr_5 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] [1] = (((var_1 + var_0) ? var_9 : var_2));
        var_20 = (max(var_20, (((-9223372036854775791 ? ((((arr_1 [i_2]) != (arr_10 [i_2] [5])))) : 240)))));
        var_21 = ((((var_5 ? 1 : (arr_3 [18] [i_2]))) == ((var_3 & (arr_3 [i_2] [i_2])))));
        var_22 ^= (arr_5 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_23 = (16 != 1);
        var_24 -= (arr_13 [i_3]);
        var_25 = (min(var_25, -5608));
        var_26 = (max(var_26, ((((127 ^ 2305842940494217216) << (((~255) + 260)))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                {
                    var_27 = (max(var_27, (((((((arr_9 [i_6 + 1]) + 70214989))) ? (arr_9 [i_6 + 1]) : ((0 + (arr_9 [i_6 + 1]))))))));
                    var_28 = var_4;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            {
                var_29 *= ((-0 ? (((26 ? var_8 : (arr_9 [i_8])))) : ((((!(arr_21 [i_7] [6])))))));
                var_30 = (i_7 % 2 == 0) ? ((min(((((((arr_3 [i_7] [i_8 + 2]) == 5))) << (((arr_23 [i_7]) - 2938441002)))), ((((arr_21 [i_7 - 1] [i_7]) == (min(var_11, (arr_1 [i_7]))))))))) : ((min(((((((arr_3 [i_7] [i_8 + 2]) == 5))) << (((((arr_23 [i_7]) - 2938441002)) - 2524398904)))), ((((arr_21 [i_7 - 1] [i_7]) == (min(var_11, (arr_1 [i_7])))))))));
                var_31 = ((var_16 ? ((((!((max((arr_0 [i_7]), var_7))))))) : (((arr_10 [i_7 - 1] [i_8 + 2]) ? (arr_10 [i_8] [i_8 + 1]) : (arr_10 [i_7] [i_7 + 2])))));
                arr_25 [6] [6] |= (arr_22 [i_7] [12]);
            }
        }
    }
    #pragma endscop
}
