/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169005
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
    var_18 = ((/* implicit */int) var_0);
    var_19 = ((/* implicit */unsigned short) 232272683348106697ULL);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = min((232272683348106704ULL), (((/* implicit */unsigned long long int) 881146200)));
        var_21 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((18214471390361444919ULL), (232272683348106697ULL)))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((18214471390361444919ULL) >= (((/* implicit */unsigned long long int) ((arr_7 [(signed char)20] [i_1 - 1] [i_0]) ? (var_10) : (((/* implicit */long long int) 2016U))))))))) : (max((18214471390361444902ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 917680506U)), (var_0))))))));
                var_23 = arr_3 [17LL];
                var_24 = ((/* implicit */int) var_11);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    var_25 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) -9223372036854775800LL)))) ? (1073741820U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2 + 4] [i_3] [i_3])))));
                    arr_11 [(unsigned char)18] [22U] [i_2] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 + 2] [i_2 + 2]))));
                }
                for (unsigned char i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (18214471390361444913ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [17ULL] [(signed char)13] [17ULL])))) : (((18214471390361444919ULL) - (((/* implicit */unsigned long long int) arr_2 [i_5] [i_1 - 1])))))) >= (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])), (arr_13 [i_0] [12LL] [12LL]))))))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))) | (min((((arr_10 [i_0] [i_1] [i_2] [i_4 - 3] [i_5]) ? (18214471390361444901ULL) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_15 [i_0] [i_2 - 1] [i_2] [i_4 + 1]) : (((/* implicit */int) var_14))))))))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_7 [i_2] [i_1] [i_2 + 4])), ((unsigned short)65535))), (((/* implicit */unsigned short) arr_7 [i_0] [i_4 + 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_12 [i_2] [i_2] [13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_5] [i_4])))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_0] [i_2] [i_1 - 1] [i_0]) == (((/* implicit */int) arr_7 [i_0] [i_0] [9LL])))))))))))));
                        var_30 = ((/* implicit */unsigned char) (~(18214471390361444923ULL)));
                        var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), ((((+(18446744073709551610ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_0] [i_1]), (((/* implicit */short) arr_18 [i_0] [9LL] [i_2] [i_5] [i_5]))))))))));
                    }
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
            {
                arr_23 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) arr_14 [i_1 - 1] [i_1 - 1] [i_0]);
                arr_24 [i_0] [i_0] [16] [i_0] = ((/* implicit */_Bool) (~(arr_15 [i_1 + 1] [i_1] [i_6] [i_0])));
                arr_25 [i_6] [i_6] [i_1] [i_0] = ((/* implicit */short) 18214471390361444919ULL);
            }
            for (int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_32 -= ((/* implicit */long long int) ((((((/* implicit */long long int) arr_15 [i_8] [i_8] [i_8] [i_8])) > (285978576338026496LL))) ? (((((/* implicit */_Bool) 1876974574402551338ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (18214471390361444918ULL))) : (((/* implicit */unsigned long long int) (~(var_12))))));
                        var_33 = ((/* implicit */_Bool) var_1);
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_37 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)236))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46922))) - (285677789297948964LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_7] [i_0])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_21 [i_1] [i_0])))))));
                        arr_38 [i_0] [i_0] [i_0] [i_7] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_34 = ((/* implicit */short) (!(arr_34 [i_7] [i_7] [i_1 + 1] [i_7] [i_1 + 1])));
                    }
                    var_35 += ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) (unsigned char)187)) - (161)))))));
                }
                var_36 = ((/* implicit */int) -285978576338026475LL);
                var_37 &= ((/* implicit */long long int) (unsigned char)170);
                var_38 += ((/* implicit */_Bool) var_5);
            }
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_39 = min((((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))))), (arr_0 [i_11] [14U]));
                var_40 = ((/* implicit */unsigned short) (~(((var_0) << (((((/* implicit */int) arr_4 [i_11] [i_1 + 1])) - (1)))))));
                arr_41 [i_0] [i_1] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -285978576338026497LL)) ? (((((/* implicit */_Bool) 232272683348106720ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))) : (2050608491355644902ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
            }
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1975239999U), (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 1]))))) : (max(((~(arr_1 [i_1] [i_0]))), (((/* implicit */unsigned int) arr_15 [i_0] [i_1 - 1] [i_0] [i_1 - 1]))))));
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) -285978576338026496LL)) && (((/* implicit */_Bool) (~(arr_1 [i_1 - 1] [i_1]))))));
            arr_42 [i_1] [i_1] [i_1 - 1] = ((/* implicit */int) min((3836139095U), (4294967295U)));
        }
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            arr_49 [i_12] [i_12] = ((/* implicit */unsigned short) arr_14 [i_12] [i_12] [i_12]);
            arr_50 [(short)7] [3LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -278667150355821313LL)) ? (((/* implicit */int) arr_7 [i_12] [i_13] [i_13])) : ((-2147483647 - 1))));
            arr_51 [i_12] [10U] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) arr_0 [i_12] [i_13]))));
        }
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            var_43 -= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_19 [i_12]))));
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6U)) ? (528580710678115737LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_12] [i_14] [i_12] [i_12])))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) var_6)) : (16396135582353906714ULL)))));
        }
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (3456540889U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12])))))) ? (((/* implicit */long long int) ((var_16) << (((525149113635378303ULL) - (525149113635378303ULL)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_15]))) : (arr_8 [i_15] [i_12] [i_12] [i_12]))))))));
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_12] [i_12] [0ULL] [i_15]))))) : ((~(0LL)))));
        }
        for (unsigned char i_16 = 1; i_16 < 17; i_16 += 4) 
        {
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 525149113635378303ULL)) ? (((((/* implicit */_Bool) (unsigned short)5883)) ? (4011909205419688970ULL) : (((/* implicit */unsigned long long int) arr_15 [i_16] [i_16 + 1] [i_16] [i_16 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12] [i_16 + 1] [i_16 - 1])))));
            arr_60 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ^ (var_2)))) ? (((/* implicit */unsigned long long int) 3657406069U)) : (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_16] [i_12]))) : (17286853515381674188ULL)))));
            var_48 ^= ((/* implicit */short) (-2147483647 - 1));
        }
        arr_61 [i_12] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 4) 
    {
        arr_64 [i_17] [i_17] |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (-2147483647 - 1))), (arr_0 [i_17] [i_17])));
        var_49 ^= ((/* implicit */signed char) (~(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_10 [i_17] [i_17] [i_17] [i_17] [i_17])))))));
    }
    for (int i_18 = 0; i_18 < 19; i_18 += 3) 
    {
        var_50 = ((/* implicit */unsigned long long int) ((((arr_2 [i_18] [21LL]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4667191702297502500ULL)) ? (((/* implicit */int) arr_29 [i_18])) : (((/* implicit */int) (_Bool)1))))))) >> (((/* implicit */int) arr_10 [(unsigned char)4] [i_18] [i_18] [i_18] [(unsigned char)4]))));
        var_51 = ((/* implicit */_Bool) arr_65 [i_18] [i_18]);
    }
}
