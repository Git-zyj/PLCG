/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_10));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 ^= (((((var_4 ? (arr_6 [i_0] [i_0]) : var_4)) >> ((min((arr_5 [i_1] [i_1]), var_13))))));
                    var_17 += (((((~(arr_5 [i_1] [i_1])))) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1])));
                    var_18 += ((((var_4 >= (arr_7 [i_1] [i_0] [i_0] [i_2 - 1])))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (min(var_19, var_3));
                        var_20 ^= ((var_5 | (~5193074236641075697)));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_21 = (max(var_21, (((((((min((arr_9 [i_0] [7] [i_0] [i_0]), (arr_9 [i_0] [1] [i_3] [i_4]))) < ((var_8 ? (arr_0 [i_0]) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])))))) - (((!(arr_1 [i_3])))))))));
                            var_22 = (min(var_22, (((((max(var_9, (arr_5 [i_2 + 2] [i_1])))) ? 6799970662114280690 : ((((arr_5 [i_2 + 2] [i_1]) ? (arr_5 [i_2 + 1] [i_1]) : (arr_5 [i_2 - 2] [i_3])))))))));
                        }
                    }
                }
            }
        }
        var_23 = (((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) < (arr_3 [i_0] [i_0]))) ? ((min(6799970662114280690, 0))) : (arr_10 [i_0] [1] [i_0] [i_0] [1])));
        var_24 = ((((((arr_4 [i_0]) ? 12619298774351829727 : ((134217724 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (min(0, -200060974)) : (((!(arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_25 ^= (min(((((-127 - 1) >= -4919554386605548449))), (arr_1 [16])));
                    var_26 = (arr_9 [i_6] [i_6] [i_6] [i_6]);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_27 = ((((((arr_4 [i_0]) ? (~var_11) : (((arr_7 [i_0] [i_5] [i_6] [i_7]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : 235))))) ? (min((arr_14 [i_0] [i_5] [i_7]), (max((arr_13 [14] [i_5] [i_6]), (arr_16 [i_0] [i_6] [i_7]))))) : (min((arr_16 [i_0] [i_5] [i_7]), (var_2 ^ 239)))));
                        var_28 = ((46 ? 12619298774351829727 : (-32767 - 1)));
                        var_29 *= (((arr_12 [i_0]) ? (((((min(var_6, 2781848545))) || (((var_7 | (arr_3 [i_5] [i_7]))))))) : 115));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_30 = (arr_19 [i_8]);
        var_31 = (max(var_31, ((((((arr_18 [i_8] [i_8]) && var_2)) || ((!(arr_18 [i_8] [i_8]))))))));
        var_32 ^= (((((((var_9 ? var_12 : var_10))) ? var_4 : var_7)) & ((((144115188075855871 ? (arr_18 [9] [i_8]) : 108)) | (~var_10)))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_33 -= (((arr_20 [i_9]) ? ((-2263497262696862938 ? var_12 : var_9)) : 102));
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_34 = (max(var_34, (arr_23 [i_9] [16])));
                    var_35 += (min((arr_25 [i_9] [i_9] [i_11]), (arr_22 [2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 18;i_14 += 1)
            {
                {
                    var_36 *= (((arr_25 [i_14] [i_14 + 1] [i_14 + 1]) < ((~(min((arr_8 [i_12]), var_7))))));
                    var_37 = (min(var_37, (((+((-(((arr_30 [i_12] [i_13] [12]) * (arr_22 [i_13]))))))))));
                    var_38 = ((~(((arr_25 [i_12] [i_12] [1]) ? var_3 : (arr_33 [i_12] [i_14 - 2] [i_14])))));
                    var_39 &= ((288230307432235008 >= (((arr_6 [i_14 + 1] [i_14 - 1]) ? (arr_6 [i_14 - 3] [i_14 - 3]) : 2781848545))));
                }
            }
        }
    }
    var_40 = (max(var_40, ((((((-98 ? var_12 : (var_3 - var_6)))) ? var_2 : 96)))));
    #pragma endscop
}
