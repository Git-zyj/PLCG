/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((~(~1)))) ? ((1588859751867963574 ? -76058501 : -2044741782)) : ((min(2044741804, -2044741782)))));
    var_17 = (var_4 - -2733903050670472497);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_0 [i_0]) ^ (arr_2 [i_0]))));
        var_18 = (arr_2 [i_0]);
        var_19 -= (((((((-2044741793 ? 1 : -2044741793))) ? (((arr_2 [i_0]) ? var_7 : (arr_2 [i_0]))) : (!var_0))) <= (((((var_13 ? (arr_1 [i_0]) : -2044741804)) >= (-12 * var_13))))));
        arr_4 [i_0] = ((-((((arr_2 [i_0]) && 1764192604)))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_20 = (max(var_20, ((max((((min(32767, -2044741788)) ^ (-2044741803 && var_10))), ((+((((arr_7 [i_0]) <= var_1))))))))));
            var_21 = ((((((arr_6 [i_1] [i_1]) ? var_3 : 2044741787)) != var_8)));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_22 = (((((64 ? 1764192593 : 12))) + -2044741795));
            arr_11 [i_0] [i_0] |= (~-2044741782);
            var_23 -= (arr_7 [i_0]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_17 [i_0] [i_2] [i_3] [i_4] = ((((((arr_2 [i_4]) ? (min((arr_16 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]), (arr_8 [i_0] [i_4]))) : (min(-8861900614386336980, -4744543300732650444))))) ? (min((-4744543300732650444 < var_9), (arr_9 [i_2]))) : ((((arr_1 [i_2]) ? (arr_14 [i_0]) : (arr_14 [i_0]))))));
                        arr_18 [i_2] = (((arr_0 [i_3]) ? (((var_4 > (arr_5 [i_2])))) : (((((-(arr_14 [i_3])))) ? (var_1 || 2044741791) : ((0 ? 127 : 2044741781))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = ((2044741782 << ((-(-128 == 4294967295)))));
        var_24 = (max(var_24, ((((max(2044741781, (arr_7 [i_5]))) - ((var_11 ? (arr_7 [i_5]) : var_2)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_28 [i_6] = ((2044741803 ? (arr_27 [i_6] [i_6]) : (var_15 == -32767)));
        arr_29 [i_6] = (((arr_15 [i_6] [i_6] [i_6] [i_6]) >= var_4));
        arr_30 [i_6] = (arr_7 [i_6]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                {
                    var_25 = ((((((arr_10 [i_7] [i_7] [i_7]) ? var_3 : var_14))) ? (arr_14 [i_9 + 1]) : (arr_13 [i_9 + 1] [i_8] [i_8])));
                    arr_37 [i_7] [i_7] [i_8] [i_9] = ((arr_8 [i_9 - 1] [i_9 - 1]) == ((2044741760 ? var_11 : var_10)));
                }
            }
        }
        var_26 = (max(var_26, ((((arr_8 [i_7] [i_7]) * var_13)))));
        var_27 -= ((~(arr_14 [i_7])));
        arr_38 [i_7] = ((-32749 ? (arr_7 [i_7]) : (arr_15 [i_7] [i_7] [i_7] [i_7])));
        arr_39 [i_7] [i_7] = ((var_6 << (((arr_12 [i_7] [i_7] [i_7] [i_7]) - 1335602622))));
    }
    var_28 |= (32729 >= 4951);
    #pragma endscop
}
