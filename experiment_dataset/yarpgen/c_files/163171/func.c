/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163171
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */_Bool) 62914560U);
                    var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_19 = max((min((((/* implicit */long long int) (unsigned char)48)), (((((var_12) + (9223372036854775807LL))) << (((/* implicit */int) arr_6 [i_3])))))), (min((((/* implicit */long long int) max((4232052735U), (((/* implicit */unsigned int) arr_7 [i_3]))))), (((long long int) arr_7 [i_3])))));
        var_20 = ((/* implicit */long long int) arr_7 [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_17 [i_4] [i_4] [i_7] [i_7] [i_4 + 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_4])) ? (arr_16 [5] [i_5] [i_6] [i_7]) : (4232052717U)))) & ((((_Bool)1) ? (arr_12 [i_7] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4])))))));
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_7 - 1])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_7 - 1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */short) 62914560U);
                            arr_20 [i_8] [(unsigned char)0] [i_7] [i_7] [i_5] [i_4 + 1] = ((/* implicit */unsigned int) arr_14 [i_7 - 1] [i_7] [i_7] [i_4 + 1]);
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1437730464U)) ? (((/* implicit */unsigned long long int) 3888920695U)) : (12271434420379878044ULL)))) && (((/* implicit */_Bool) var_16))));
                            arr_21 [i_7] [i_5] [14U] [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) arr_11 [i_4] [i_4] [i_7 - 1]));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_24 [2ULL] |= ((/* implicit */short) ((arr_14 [i_4 + 1] [(short)2] [(unsigned short)8] [i_4 + 1]) ? (((/* implicit */int) ((signed char) arr_9 [i_7]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_7] [i_4])) + (((/* implicit */int) arr_14 [i_4] [i_4 + 1] [i_7] [i_4]))));
                            arr_25 [i_5] [i_5] [i_7] [8U] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_4] [i_5] [i_5])))) ^ (((2452899941163571928ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1940)))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_8 [i_4]))));
                        }
                        var_26 *= ((/* implicit */unsigned long long int) arr_9 [i_4 + 1]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            var_27 *= ((/* implicit */unsigned long long int) (unsigned short)4806);
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_4] [i_10] [i_4])) ? (-6065412431019555171LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18821)))))) || (((/* implicit */_Bool) arr_13 [i_4])))))));
            arr_30 [(unsigned short)9] [(unsigned short)9] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_10])) ? (arr_22 [i_10]) : (arr_22 [i_10])));
            var_29 = ((/* implicit */unsigned int) max((var_29), (var_16)));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    {
                        arr_37 [i_12] [i_10] [i_10] [i_4] &= ((/* implicit */long long int) ((arr_23 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]) > (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_8)))))));
                        arr_38 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_12] [i_12] = ((/* implicit */unsigned char) arr_9 [i_10]);
                        arr_39 [i_12] = ((/* implicit */long long int) (((~(((/* implicit */int) var_1)))) < (((/* implicit */int) ((_Bool) arr_11 [i_4] [i_11] [i_12])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) 6065412431019555171LL);
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_44 [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) 2857236831U)) ? (((/* implicit */int) arr_41 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) (unsigned short)22377)))) : (((/* implicit */int) (unsigned char)0))));
                var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_13]))));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_22 [i_13]))));
            }
            for (unsigned short i_15 = 3; i_15 < 15; i_15 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) arr_9 [i_4 + 1]);
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_15 - 3] [i_4 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_35 [i_13]))));
                var_35 = ((/* implicit */unsigned char) var_8);
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (arr_29 [i_13] [i_4]) : (((/* implicit */long long int) var_11))));
                /* LoopSeq 1 */
                for (signed char i_16 = 3; i_16 < 15; i_16 += 4) 
                {
                    var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (6065412431019555171LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_4] [i_13] [i_15] [6ULL]))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62038)))));
                    arr_51 [i_4] [(unsigned char)14] [i_15] [i_4] [i_4] [(unsigned char)14] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_11 [i_13] [i_15 - 2] [i_16 - 1])))));
                }
            }
            for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                arr_54 [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_35 [i_17])) : (((/* implicit */int) arr_35 [i_17]))));
                var_38 = ((/* implicit */unsigned char) ((arr_18 [i_13] [i_17] [i_17] [i_4 + 1] [i_4 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_17] [i_4] [i_4 + 1] [i_4])))));
            }
            /* LoopSeq 3 */
            for (long long int i_18 = 1; i_18 < 15; i_18 += 4) /* same iter space */
            {
                arr_58 [i_4] [i_4] [i_13] [i_4] &= ((/* implicit */unsigned long long int) arr_8 [i_13]);
                var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_18] [i_4] [i_18] [i_4]))));
            }
            for (long long int i_19 = 1; i_19 < 15; i_19 += 4) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1])) >= (((/* implicit */int) arr_34 [i_4 + 1] [i_13] [i_19 + 1] [i_4 - 1])))))));
                arr_61 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_4 + 1] [i_4]))) - ((-(2857236834U)))));
                arr_62 [i_19] [i_13] [i_19] = ((/* implicit */unsigned long long int) arr_45 [i_4] [i_19]);
                var_41 = ((/* implicit */unsigned short) (+((~(arr_23 [i_4] [i_13] [i_19] [1U] [i_4] [i_13] [i_13])))));
            }
            for (long long int i_20 = 1; i_20 < 15; i_20 += 4) /* same iter space */
            {
                arr_66 [i_20 - 1] [i_13] = ((/* implicit */long long int) ((var_9) | (((((/* implicit */_Bool) arr_65 [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 1])) ? (var_2) : (arr_48 [i_4] [i_4] [7LL] [i_20])))));
                arr_67 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((long long int) (unsigned short)3508)) : (arr_29 [i_4 - 1] [i_20 + 1])));
                var_42 += ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_20 + 1])) << (((((/* implicit */int) arr_8 [i_20 - 1])) - (60718)))));
            }
            arr_68 [i_4 + 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) arr_32 [i_13] [i_4 + 1] [(unsigned short)1] [i_4]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
        {
            for (unsigned char i_22 = 1; i_22 < 14; i_22 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_23 - 1] [i_23 - 1] [i_22] [7U])) >= (((/* implicit */int) arr_52 [i_23 - 1] [i_21] [i_21] [i_23]))));
                        arr_77 [i_4] [i_4] [i_4] [i_4] = (short)-14237;
                    }
                    for (long long int i_24 = 1; i_24 < 14; i_24 += 1) 
                    {
                        var_44 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)3508))));
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_43 [i_4 - 1] [i_22 - 1])) & (arr_29 [i_22 + 2] [i_22 - 1])));
                        var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
                        arr_81 [i_21] [i_21] [i_21] [i_21] [i_24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_24]))));
                        var_47 = ((/* implicit */unsigned int) ((signed char) (~(18446744073709551615ULL))));
                    }
                    for (long long int i_25 = 0; i_25 < 16; i_25 += 3) 
                    {
                        var_48 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [10ULL] [10ULL] [12U] [i_22 + 1] [i_22] [i_22 - 1])) * (((/* implicit */int) arr_70 [i_22 - 1]))));
                        arr_85 [i_4] [i_21] [i_22 - 1] [i_25] = ((/* implicit */_Bool) ((arr_73 [0LL] [i_21] [(signed char)12]) % (var_5)));
                    }
                    var_49 = ((/* implicit */unsigned short) min((var_49), (arr_8 [(short)9])));
                }
            } 
        } 
        arr_86 [i_4 - 1] = ((/* implicit */unsigned long long int) arr_55 [(signed char)10] [i_4 - 1]);
    }
    var_50 = ((/* implicit */short) 6065412431019555171LL);
}
