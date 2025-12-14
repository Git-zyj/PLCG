/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_17);
    var_21 *= min((max(var_6, var_14)), (((~var_12) * 41400)));
    var_22 ^= 1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_23 *= ((((((-32761 + 2147483647) << ((((((-(arr_1 [i_0]))) + 115)) - 26))))) ? ((((((arr_0 [i_0] [i_0]) ? (arr_1 [18]) : 40429))) ? var_17 : (arr_0 [i_0] [i_0]))) : ((((arr_1 [i_0]) ? (arr_1 [1]) : ((28106 & (arr_1 [i_0]))))))));
        var_24 ^= (max((arr_1 [i_0]), (18446744073709551613 < var_15)));
        var_25 = (((var_5 >= (max(var_12, (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_1] = ((0 / ((+((((arr_2 [i_0] [i_1]) >= 118)))))));
            arr_5 [i_0] [i_0] [i_0] = (min((((((min((arr_2 [i_0] [i_0]), (arr_0 [9] [0])))) && (((arr_1 [i_0]) && var_18))))), (((arr_3 [9] [i_1 + 3] [i_1 + 3]) / (arr_0 [i_1 - 2] [i_1 + 3])))));
            var_26 ^= ((((min(var_5, 58720256))) ? 25 : ((((min(var_5, var_0))) ? var_16 : ((max((arr_2 [i_0] [i_1]), var_15)))))));
            arr_6 [i_0] [i_0] = (((((~((min(1, 25)))))) ? (arr_2 [i_1] [i_0]) : 46543));
            var_27 ^= ((~17818467892011638087) ? (((var_3 ? ((min(var_4, 37))) : (((arr_3 [i_0] [16] [16]) / 31))))) : (min((((arr_3 [i_0] [i_0] [i_0]) + 58720288)), (arr_0 [i_0] [i_1 + 1]))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_28 = 4411631282049196707;
                        var_29 = (min(((max(249, (arr_8 [i_2] [i_2])))), ((1 | (arr_8 [i_0] [i_0])))));
                    }
                }
            }
            var_30 = (arr_3 [i_0] [i_0] [i_2]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_5] [i_5] [11] = (max((((31 != (arr_13 [i_5] [i_0] [i_0] [i_0])))), ((2483857831502261687 ? (arr_14 [i_0]) : (arr_2 [i_0] [i_5])))));
            arr_19 [i_0] [i_0] [i_5] = ((-((~(min(var_2, 4411631282049196728))))));
            arr_20 [i_0] [i_5] [i_5] = var_14;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_24 [i_0] = (((arr_13 [i_0] [i_0] [i_0] [i_6]) >= var_12));
            var_31 ^= var_15;
            var_32 = ((var_13 >> (((arr_14 [i_6]) + 1478144508))));
        }
        arr_25 [i_0] = (!-15565);
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            arr_33 [i_8] [i_8] = (min(((-(arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1]))), (((-(arr_31 [i_8 + 1] [i_8 - 1]))))));
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_42 [i_7] [i_8] [12] [i_10 - 1] [i_8] [i_11] = arr_29 [i_9 + 1] [i_8 + 1] [i_8 - 1];
                            var_33 |= ((var_12 == ((((min(var_15, -21)))))));
                        }
                    }
                }
            }
            arr_43 [i_8] [i_8] = ((((min((arr_9 [i_8 - 1] [3] [i_8 + 1]), 1))) >= ((957082837 ? (arr_9 [i_8 - 1] [i_8 - 1] [i_8 + 1]) : (arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_53 [i_7] [12] [12] [i_8] [i_14] = ((-((~(max(15962886242207289943, 26))))));
                            arr_54 [i_8] = -88;
                        }
                    }
                }
            }
        }
        var_34 = (max((((~(31 ^ -4)))), ((~(min(0, 983435216))))));
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
    {
        var_35 = max((min(957082836, 44)), var_2);
        var_36 = (arr_32 [i_15] [i_15] [i_15]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_37 *= ((~(arr_57 [0] [0])));
        var_38 |= arr_49 [i_16];
        var_39 = var_1;
        var_40 = (!2184);
        arr_61 [i_16] = (((arr_59 [i_16] [i_16]) ? (arr_59 [9] [i_16]) : (arr_59 [i_16] [i_16])));
    }
    var_41 = var_7;
    #pragma endscop
}
