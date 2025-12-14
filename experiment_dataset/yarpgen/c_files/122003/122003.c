/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = (((min((arr_0 [i_0]), (arr_0 [7]))) * (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (max(var_16, (arr_2 [i_1] [i_1])));
                        arr_12 [i_3] [i_1] [i_1] [i_1] [i_1] = (((((arr_4 [i_0] [i_3]) < var_0))) >= var_3);
                        var_17 = ((((((((arr_0 [i_1]) + 30907))) || (((var_10 % (arr_1 [i_3])))))) ? (((~235) ? (arr_10 [i_2 + 2] [i_3] [i_2 + 1] [i_3]) : ((((arr_9 [i_0] [i_1] [7] [i_3]) - (arr_3 [i_0] [i_0])))))) : (((((max(var_11, var_13))) ? 223 : var_10)))));
                    }
                    var_18 = ((((max((((var_13 ? -25331 : (arr_8 [i_0])))), (max(var_8, (arr_5 [i_0])))))) ? (arr_2 [i_0] [i_0]) : (((((arr_3 [i_1] [i_1]) % (arr_9 [i_0] [i_1] [i_2] [i_2 + 2]))) - var_5))));
                    arr_13 [i_0] [i_1] [i_2] = var_1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_25 [i_5] [i_5] [0] [i_5] = (((arr_10 [i_7 - 3] [i_5] [i_8] [i_8]) < (var_6 < 25353)));
                            var_19 = ((var_1 ? (arr_18 [i_4] [i_8] [i_7 + 1] [i_7 - 3]) : (arr_22 [i_7 - 4])));
                            var_20 = ((((var_2 > (arr_8 [i_4]))) ? (arr_24 [i_4] [i_5] [i_6] [i_7 + 2] [i_8]) : (arr_6 [i_7 - 4] [i_7 - 4] [i_7 + 3])));
                        }
                    }
                }
            }
            var_21 *= 0;
        }

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_22 *= ((~(arr_27 [i_9] [i_9] [i_4])));
            var_23 = -6514853416382830719;

            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_24 = (max(var_24, (~1)));
                var_25 = (max(var_25, (arr_21 [i_4] [i_4] [i_4] [i_4])));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_26 ^= ((~(arr_5 [i_4])));
                var_27 *= var_12;
            }

            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                arr_37 [i_4] [i_9] [i_12] [i_4] = (((arr_21 [i_9] [i_12] [i_12 + 1] [i_12 + 1]) | (arr_21 [i_9] [5] [i_12 + 2] [i_12 - 1])));
                var_28 = (1 && 32);
            }
        }
        var_29 = (99 ? 32 : 134);
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_30 = ((((((arr_8 [i_13]) | (arr_8 [i_13])))) ? (arr_8 [2]) : ((-6514853416382830706 ? 32 : 27967))));
        var_31 = ((min(((var_10 ? -32746 : var_8)), (var_13 ^ 32))));
        var_32 = (min((((arr_5 [i_13]) ^ (arr_5 [i_13]))), (~-67)));
    }
    var_33 *= (min(var_7, ((min((!21322), (!var_1))))));

    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_34 = ((((min((((arr_40 [i_14]) + (arr_41 [i_14] [i_14]))), (arr_41 [i_14] [i_14])))) ? (((var_14 - (arr_41 [i_14] [14])))) : (min((arr_40 [i_14]), (arr_40 [i_14])))));
        var_35 *= (arr_41 [i_14] [i_14]);
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        arr_46 [i_15] = ((((min((arr_42 [i_15] [i_15]), (arr_44 [i_15] [i_15])))) ? (~10) : (((arr_42 [i_15] [i_15]) | (arr_44 [i_15] [i_15])))));

        for (int i_16 = 2; i_16 < 18;i_16 += 1)
        {
            arr_49 [i_15] = var_6;
            arr_50 [i_15] [i_16] = (((arr_43 [8] [8]) >= ((((max(1, 17362))) ? (arr_44 [i_16 + 2] [i_16 - 2]) : (((max(-116, (arr_42 [i_15] [i_16])))))))));
            arr_51 [i_16] [i_16] = (max((min(-var_14, (112 - 28456))), ((((((arr_42 [i_15] [i_15]) | 2147483647))) ? (var_12 | -16) : (var_11 == 28456)))));
            arr_52 [i_16 - 1] [i_15] = (min((!-6514853416382830719), (((arr_45 [i_15] [i_16]) << (arr_48 [i_15] [i_16 + 1] [12])))));
            var_36 = ((min((arr_44 [i_16 + 2] [i_16 + 2]), (arr_40 [i_16 - 1]))));
        }
    }
    #pragma endscop
}
