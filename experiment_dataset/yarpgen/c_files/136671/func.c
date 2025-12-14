/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136671
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = min((((/* implicit */int) ((_Bool) 8931105442819939170LL))), (min(((-(((/* implicit */int) var_11)))), ((+(((/* implicit */int) (unsigned char)234)))))));
        var_18 = ((/* implicit */_Bool) (+(min((8931105442819939175LL), (8931105442819939189LL)))));
        var_19 ^= min((((/* implicit */long long int) (((-(((/* implicit */int) var_2)))) & (((/* implicit */int) (signed char)-101))))), (min((((((/* implicit */_Bool) -8931105442819939175LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0]))), (((((/* implicit */_Bool) (signed char)101)) ? (var_7) : (var_4))))));
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : ((~(((unsigned int) var_11)))))))));
    var_21 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)208)) + (((/* implicit */int) var_2)))) & ((-(((/* implicit */int) var_10))))));
        var_23 = ((/* implicit */int) var_3);
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) ((-6005124500825092023LL) / (((/* implicit */long long int) arr_10 [i_1] [i_2]))));
                var_25 |= ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 4 */
                for (short i_4 = 3; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((var_7) - (8060283953408420727LL))))))));
                    var_27 ^= ((/* implicit */unsigned short) var_3);
                }
                for (short i_5 = 3; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) -2598108934132108877LL))));
                    var_30 = ((/* implicit */long long int) (signed char)2);
                    var_31 = ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_1] [i_2] [i_2] [i_3] [i_5])) + (2147483647))) << (((((((/* implicit */_Bool) (short)-14370)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) var_11)))) - (18)))));
                    var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_5 - 3] [i_5 + 2] [i_5 - 3] [i_5 + 4]))));
                }
                for (short i_6 = 3; i_6 < 19; i_6 += 1) /* same iter space */
                {
                    arr_19 [i_6] [i_6] [i_3] [i_3] [i_1] [i_1] |= ((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_3] [i_2]);
                    var_33 = ((/* implicit */signed char) var_13);
                    var_34 = ((8931105442819939189LL) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_6]))));
                    var_35 += ((/* implicit */signed char) var_10);
                }
                for (short i_7 = 3; i_7 < 19; i_7 += 1) /* same iter space */
                {
                    var_36 -= ((/* implicit */int) (unsigned short)49152);
                    var_37 = ((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_1]);
                    arr_22 [i_1] [i_1] [i_3] [i_7] = ((/* implicit */unsigned int) var_2);
                    var_38 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((-8931105442819939175LL) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))))))));
                }
            }
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
            {
                arr_25 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && ((((_Bool)1) || (((/* implicit */_Bool) var_12))))));
                var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))));
            }
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
            {
                arr_28 [i_1] [i_2] [i_1] = ((unsigned char) (+(var_1)));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) var_2);
                    var_41 = ((/* implicit */_Bool) ((((-9223372036854775800LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (78)))));
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned short) (unsigned char)247);
                        var_43 = (+(((/* implicit */int) arr_13 [i_1] [i_2])));
                    }
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)112)) == (((/* implicit */int) arr_9 [i_12] [i_9] [i_2] [i_1]))));
                        var_45 *= ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_11 [i_1] [i_1] [i_9])));
                    }
                    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        var_46 ^= ((/* implicit */unsigned int) (-(2598108934132108880LL)));
                        arr_41 [i_1] [i_2] [i_10] [i_1] [i_13] [i_9] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)0))))) < (((var_4) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47741)))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_1] [i_2] [i_9] [i_14] [i_9])) - (((/* implicit */int) arr_17 [i_14] [i_10] [i_9] [i_2] [i_1])))))));
                        var_48 = ((/* implicit */unsigned int) min((var_48), (var_3)));
                        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0))))))))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_1] [i_2])) == (((/* implicit */int) var_5)))))));
                            arr_50 [i_1] [i_2] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (arr_10 [i_1] [i_1]) : (arr_10 [i_1] [i_2])));
                            arr_51 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_16]))));
                            arr_52 [i_16] [i_15] &= ((/* implicit */signed char) var_15);
                            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) 5958312459397088744LL))));
                        }
                    } 
                } 
            }
            arr_53 [i_1] [i_1] = var_7;
        }
        for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            var_52 = ((/* implicit */unsigned short) var_9);
            var_53 = ((/* implicit */unsigned short) var_7);
        }
        for (long long int i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            var_54 = (+(((/* implicit */int) var_12)));
            var_55 = ((/* implicit */unsigned int) var_17);
        }
        arr_61 [i_1] = ((/* implicit */unsigned char) (~(1061248575U)));
        /* LoopNest 2 */
        for (signed char i_19 = 1; i_19 < 19; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                {
                    var_56 = ((/* implicit */unsigned long long int) max((var_56), (((6361930344812597210ULL) ^ (((/* implicit */unsigned long long int) var_3))))));
                    arr_66 [i_1] [i_19] [i_19] = ((/* implicit */short) ((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                }
            } 
        } 
    }
}
