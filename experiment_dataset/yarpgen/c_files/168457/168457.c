/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((!(((var_8 ? ((((arr_1 [9]) ? var_10 : var_6))) : (max((arr_1 [9]), var_17)))))));
        var_19 = (min(var_19, ((var_13 ? var_11 : ((var_1 ? 31539 : 0))))));
        arr_2 [i_0] = ((1814752598017123338 ? 0 : (((((1 ? 7696340754978371371 : -120))) ? 4241364598 : ((0 ? -3829720785975213748 : var_15))))));
        var_20 = (max(var_20, var_6));
        arr_3 [i_0] = ((4241364598 < (((-12 * -1) ? (min(var_1, 46626)) : var_6))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_21 = (49584 < var_17);
        var_22 &= ((var_16 ? 9223372036854775795 : var_12));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_23 = (min(2214875357, ((max((arr_7 [i_2]), ((~(arr_7 [i_2]))))))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] [3] = ((var_7 ? var_4 : ((1 ? var_17 : 1))));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_24 = ((~((-14524 ? (arr_13 [1] [i_3] [i_4] [i_4]) : 6235111460622571615))));
                    var_25 = 5000902;
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((-(arr_13 [i_2] [i_3] [i_4] [i_5])));
                    var_26 &= var_16;
                }

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_19 [i_3 + 1] [i_2] [i_4] [i_3] [i_4] [i_6] = var_10;
                    var_27 = 571906762;
                }
                var_28 = ((((!(arr_10 [i_2] [i_3] [i_4]))) ? 63619 : (((arr_6 [i_2] [i_3]) ? var_16 : -891))));
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_24 [1] [i_7] = (arr_9 [23] [i_7]);
                    var_29 = var_2;
                }
                arr_25 [i_2] [i_3] = (((((var_14 ? (arr_23 [i_2] [i_2]) : 21861))) ? var_8 : (!var_0)));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
            {
                var_30 = -8926;
                var_31 = 2016;
                arr_29 [i_2] [i_3] [1] = ((-21861 == (arr_20 [i_3 - 2] [i_3] [i_3 - 2])));
                var_32 ^= ((~(arr_23 [i_3 - 1] [i_3 - 2])));

                for (int i_10 = 3; i_10 < 23;i_10 += 1)
                {
                    var_33 = (min(var_33, (((arr_12 [i_2] [i_3 - 2] [i_9] [i_2]) ? ((3481 ? var_8 : var_17)) : var_10))));

                    for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_11] = (((((var_5 ? var_6 : var_12))) ? var_10 : ((316950234 ? 0 : var_0))));
                        var_34 = ((-7696340754978371371 ? 21861 : (arr_28 [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 1])));
                    }
                    for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_35 = var_17;
                        arr_38 [i_2] [i_3] [i_9] [i_2] [i_9] [i_10] [i_12] = ((-30863 ? 238 : ((2313 ? (arr_37 [i_2] [i_3]) : 2046))));
                        arr_39 [i_9] [i_3 + 1] = 6878052922428235831;
                        arr_40 [i_2] [i_2] [i_2] = (!var_12);
                    }
                    var_36 = var_12;
                }
            }

            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                var_37 *= ((((1 != (arr_13 [i_2] [i_3] [i_13] [i_3]))) ? ((((arr_18 [i_2]) > var_1))) : var_12));
                var_38 = (max(var_38, (6049 ^ var_10)));
            }
            var_39 ^= 48028;
        }
        for (int i_14 = 2; i_14 < 23;i_14 += 1) /* same iter space */
        {
            var_40 ^= (min(-16631991475692428265, ((var_1 - (min(var_7, var_17))))));
            var_41 = (min(var_41, ((max((max(((var_10 ? (arr_18 [i_2]) : 739947966555064917)), var_14)), (~425451248))))));
            var_42 = (!var_13);
            var_43 = (max(var_43, (arr_9 [i_14 + 1] [i_14 + 1])));
        }
        var_44 = (((max((((var_16 ? 186 : (arr_26 [i_2] [11] [i_2])))), ((var_10 ? var_4 : (arr_13 [i_2] [i_2] [i_2] [i_2]))))) <= (((1214418772 ? 128 : -1278465029)))));
        arr_45 [i_2] = ((((min(var_3, 1))) && ((!(arr_32 [i_2])))));
    }

    for (int i_15 = 1; i_15 < 21;i_15 += 1)
    {
        var_45 ^= (min((((((113 ? var_10 : var_5))) ? (max(7779449536402514791, var_6)) : 8062662401144331594)), ((((arr_48 [i_15 + 3] [i_15 - 1]) != 159)))));
        arr_50 [24] [i_15] |= (var_8 ? ((((var_8 ? var_5 : var_10)) ^ (((11106 ? var_9 : (arr_48 [i_15 + 1] [i_15 + 1])))))) : ((min(-var_12, var_0))));
    }
    var_46 = ((((((var_7 ^ var_10) ^ var_5))) || ((((var_9 ? var_5 : 11835))))));
    #pragma endscop
}
