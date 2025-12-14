/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = var_6;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((var_7 ? 2973465087 : 3946466603626584747)));
            arr_6 [i_1] [i_1] = (max((((1 ? ((max(151, 196))) : ((((arr_2 [i_1]) <= (arr_4 [i_1] [i_1]))))))), 3946466603626584754));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] = ((-(((62455 ? 61 : -4611686018427387904)))));
            arr_11 [i_0] = 30938;
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] = (~243);
            arr_16 [i_0] [i_0] [i_0] = var_3;
            var_11 = (min(var_11, ((~(~30939)))));
            arr_17 [i_0] = ((((arr_12 [i_3 - 1] [i_3]) ? 186 : 201)));
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_0] = max(((max(42, -63))), ((min((arr_9 [i_0] [i_4]), 5))));
            arr_21 [i_0] [i_0] |= (((min((arr_9 [i_0] [i_4]), ((12 ? var_3 : 0)))) >> ((((var_0 ? -26988 : ((1985 ? var_5 : 111054661)))) + 27007))));
            var_12 = (max(((max(var_1, var_0))), ((((arr_1 [i_4]) == (((var_9 ? var_8 : (arr_14 [i_4])))))))));
            arr_22 [i_4] [i_0] = (((min(var_6, (arr_4 [2] [2])))));
        }
        var_13 = (93 > var_3);
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_14 |= var_3;
        arr_26 [i_5] = ((+((var_6 ? (((arr_2 [i_5]) ? (arr_2 [i_5]) : 70)) : var_5))));
        var_15 = (arr_9 [i_5 + 2] [i_5]);
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {
                    var_16 = ((-((((((arr_7 [i_6] [i_8]) | (arr_29 [i_6] [i_6] [i_8])))) ? var_0 : ((max(var_3, var_3)))))));
                    var_17 = ((((var_6 ? (arr_14 [i_6]) : (153 | 131))) ^ (((((9 ? 243 : 4740))) ? var_6 : 102))));
                    arr_34 [i_6] [i_7 + 1] [i_6] [i_8] = var_3;
                }
            }
        }
        var_18 ^= ((~(var_9 ^ var_3)));
        var_19 *= (((!-6473404052169659384) ? (max((arr_25 [i_6 - 2]), ((var_6 ? var_1 : 1502089095)))) : (min((max(3800920482, 0)), (!271870003)))));
        var_20 = ((((((min(var_0, 4777152441461019854)) + (34589 != var_0)))) ? (arr_23 [i_6] [i_6 + 1]) : ((-((3639324569 ? 0 : (arr_30 [i_6] [i_6] [i_6])))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 15;i_10 += 1)
            {
                {
                    arr_39 [i_6] [i_9] [i_9] = ((-1070293534384290512 ? (((~(arr_19 [i_10] [i_9] [i_6])))) : (((var_8 ? (((arr_4 [i_9] [i_9]) ? -96 : (arr_8 [i_10] [i_10] [i_10]))) : ((-2895510327133190249 ? (-127 - 1) : var_0)))))));
                    arr_40 [i_9] [i_9] [i_10] = (arr_8 [i_6] [i_6] [i_6]);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_21 = 3;
        arr_43 [i_11] = arr_41 [i_11] [i_11];
        var_22 = ((((-((min(var_0, var_7))))) * ((0 ? (min(63, 611960727)) : var_6))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 9;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    arr_49 [i_13] [i_12 - 1] [i_11] = (((((!(arr_9 [i_11] [i_11])))) << (((arr_3 [i_11] [i_11] [i_11]) ? 21 : ((92 ? 19259 : (arr_32 [i_12 + 1] [i_13])))))));
                    arr_50 [i_12] [i_12] [i_11] [i_11] = ((((107 ? (arr_30 [i_11] [i_12] [i_13]) : (~3592179224609344245))) > (((var_6 - (arr_12 [i_11] [i_12]))))));
                }
            }
        }
    }
    var_23 = (!var_5);
    #pragma endscop
}
