/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 &= ((!((min((((-(arr_1 [i_0] [i_0])))), 0)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 -= (((((arr_1 [i_0] [i_0]) >= (arr_1 [i_0] [i_0]))) ? ((((((-32767 - 1) ? -1 : 192))) ? (var_12 && var_4) : var_13)) : -1));
                    var_22 = (((((255 ? -0 : -2))) ? (arr_7 [i_1] [i_1]) : (!192)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_23 |= ((~(((!(0 || 1))))));
                    var_24 = (min(var_24, (((((252 && 7) || 65530)) ? ((((var_12 && (arr_0 [i_0]))) ? (arr_5 [i_0] [i_0] [i_4]) : ((min(0, (arr_5 [i_4] [i_4] [i_4])))))) : var_9))));
                }
            }
        }
        var_25 += (((((min(48, var_5))) ? var_12 : (((arr_9 [i_0]) | var_2)))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_26 = ((((((~var_0) ? (arr_2 [i_5] [i_5] [i_5]) : (~var_8)))) ? (((32 % var_3) ? var_18 : (65532 && var_2))) : (((-(min(127, var_9)))))));
        var_27 ^= 61440;
        var_28 = var_1;
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            var_29 = (min((min((arr_18 [i_7]), -1)), (~var_2)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_30 *= ((((min((arr_23 [i_7] [i_7] [i_9 - 1] [4]), (arr_23 [i_7] [i_7] [i_9 - 1] [i_9])))) == (((((3 | (-127 - 1))) >= (((-32767 - 1) ? var_19 : (arr_26 [i_9] [i_6]))))))));
                        var_31 = (min(var_31, (--1)));
                        arr_27 [i_6] [i_6] [i_6] [14] [i_6] = (min(9223372036854775807, (((((max(var_2, var_5))) << ((((var_15 ? -1 : var_5)) + 8)))))));
                    }
                }
            }
            var_32 = (max(var_32, ((max((((((arr_21 [i_6] [19]) - 65515)) | var_15)), ((-(arr_22 [13] [i_7] [i_6]))))))));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_33 = arr_20 [i_6];
                            arr_39 [i_13] [i_12] [i_6] [i_10] [18] = (min((-119 ^ var_19), (((arr_30 [i_6] [i_12 - 1] [i_11 + 4] [i_13 + 1]) ? (arr_33 [i_6] [i_12] [i_12 + 1] [i_6]) : 15))));
                            var_34 = ((~((min(2, 4083)))));
                            var_35 = (((((((arr_23 [i_6] [i_12] [i_10] [i_6]) || 2)) || 1)) || ((((var_13 | (-127 - 1)))))));
                            var_36 |= ((((4095 >= (arr_24 [i_10] [i_11 - 1] [i_10]))) ? 144115188075855871 : (((((arr_25 [i_10] [i_12 + 1] [i_10]) && (arr_25 [i_10] [i_12 + 1] [i_10])))))));
                        }
                    }
                }
            }
            var_37 |= (((((arr_26 [i_6] [12]) >= (((arr_24 [i_10] [i_10] [1]) ? -1 : var_17)))) ? (min(((~(arr_25 [i_10] [i_10] [i_6]))), (arr_33 [i_10] [8] [i_10] [i_10]))) : (((!(61440 < 65524))))));
            var_38 += ((~(((arr_38 [i_10] [i_10] [i_10] [i_10] [i_6]) ? var_8 : var_13))));
        }
        var_39 = (min((((-3 ? -119 : (arr_17 [i_6])))), 64));
    }
    for (int i_14 = 3; i_14 < 12;i_14 += 1)
    {
        var_40 = ((-(!-1)));
        arr_42 [10] &= -var_17;
        var_41 += ((((~var_15) ? (((-119 && (arr_40 [i_14])))) : var_0)) < (((65472 | 12) | 1)));
    }
    var_42 = (~65523);
    var_43 = (min((((!(0 > var_10)))), ((var_1 ? (~var_15) : ((var_10 ? (-127 - 1) : var_10))))));
    #pragma endscop
}
