/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152638
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
    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (_Bool)1))), (((((/* implicit */int) var_12)) % (((/* implicit */int) (short)24576))))))) ? (((/* implicit */int) var_8)) : ((~((~(((/* implicit */int) (short)28018))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_0 [i_0]))));
        var_15 = ((/* implicit */long long int) 4294443008U);
    }
    for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_2] [i_4] [i_4] [i_5] |= ((/* implicit */signed char) max(((~(((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 3])))), ((+(((((/* implicit */_Bool) (short)28058)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_3 [i_5]))))))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_0 [i_1 + 2]))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65515)))))))));
                            arr_14 [i_5] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) (unsigned short)0));
                        }
                    } 
                } 
            } 
            arr_15 [i_2] &= ((/* implicit */short) arr_6 [i_1 + 1] [i_1] [i_2]);
            arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_2] [i_1])) : (((/* implicit */int) var_11))))) ? ((~(arr_12 [i_1] [i_1 - 2] [1] [i_1] [i_1 - 2] [i_1 - 3]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_1 - 2])), (arr_10 [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))))));
            /* LoopSeq 4 */
            for (short i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57092)) ? (((/* implicit */int) (signed char)-40)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)43454)) : (((/* implicit */int) (_Bool)1))))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-32764)) / (((/* implicit */int) (_Bool)1))))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_19 = (!(arr_9 [i_1] [i_1 - 1] [i_6 - 1] [i_1] [i_7]));
                    arr_23 [i_1] [i_2] = min((((/* implicit */long long int) (unsigned char)202)), (((((/* implicit */_Bool) arr_10 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_1])) ? (arr_10 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_1]) : (((/* implicit */long long int) arr_21 [i_6 + 1] [i_1] [i_6 + 1])))));
                }
                var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_8 [i_1 - 1] [i_2] [i_1 - 3] [i_1 - 2]), ((_Bool)1)))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_6] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [1ULL])))))))))));
                var_21 = ((/* implicit */short) (_Bool)1);
            }
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                arr_27 [i_1] [i_2] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) (((~(((/* implicit */int) var_11)))) == (((/* implicit */int) max(((unsigned char)255), ((unsigned char)255))))))), (((((/* implicit */_Bool) 1419258817)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)9)))) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))));
                arr_28 [i_2] &= ((/* implicit */short) ((unsigned long long int) (+(1419258803))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_34 [i_1] [i_2] [i_1] [i_1] [i_9] [i_1] [i_10] = ((/* implicit */short) (-((+(arr_25 [i_1 - 2])))));
                            arr_35 [i_8] [i_8] [i_8] [i_1] [i_1] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) (short)-6552)), ((((_Bool)1) ? (((/* implicit */int) arr_30 [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_2])) : (((/* implicit */int) (short)0))))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 2; i_11 < 13; i_11 += 1) /* same iter space */
            {
                arr_38 [i_1] [i_2] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */int) (short)6551)) / (arr_0 [i_1])))) : (((long long int) (unsigned char)215))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)56)) / (((/* implicit */int) (unsigned short)57092))))) : (((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))) : (arr_32 [5U] [i_11] [i_11 + 1] [i_11] [i_11])))));
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 4) 
                {
                    var_22 ^= ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-81)) - (((/* implicit */int) (short)-6552))))) > (((((/* implicit */_Bool) arr_0 [i_12 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967295U))));
                    var_23 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) arr_24 [i_2] [i_2]))) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_11 - 2] [i_12 + 2])))) > ((+(((/* implicit */int) (_Bool)1))))));
                }
                for (signed char i_13 = 1; i_13 < 12; i_13 += 4) 
                {
                    arr_45 [i_1] [i_2] [i_11 - 1] [i_13] [i_1] [i_13] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57096)))))) | ((+(arr_31 [i_11 - 2] [i_11] [i_11 + 1] [i_11 + 1]))));
                    var_24 ^= ((signed char) (-(((/* implicit */int) arr_36 [i_11 - 2] [(unsigned char)6] [i_11 - 2] [i_13 + 2]))));
                }
                for (unsigned short i_14 = 1; i_14 < 13; i_14 += 1) 
                {
                    arr_48 [i_2] [i_2] [i_11] [i_14] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_14 + 1])) : (((/* implicit */int) arr_17 [i_14 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_17 [i_14 - 1]), ((signed char)0))))) : (((long long int) arr_17 [i_14 - 1]))));
                    var_25 = ((/* implicit */unsigned long long int) arr_2 [i_1 - 3]);
                }
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (signed char)-56))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (1439578499) : (((/* implicit */int) var_2)))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_29 [i_1 - 2] [i_1] [i_1] [(_Bool)1])) - (52))))))))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((var_11) ? ((~(((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (((((/* implicit */_Bool) -8147721711914406935LL)) ? (((((/* implicit */_Bool) arr_46 [i_2] [i_15] [i_2])) ? (9223372036854775807LL) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((-1) + (2147483647))) >> (((arr_40 [i_15] [i_11] [i_2] [i_1 - 2] [i_1 - 2]) - (3897467000303030737LL)))))))))))));
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_18 [i_1] [i_1]))));
                        var_29 = ((/* implicit */unsigned short) var_10);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        var_30 &= ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1] [i_2] [i_1])), (arr_5 [i_2] [i_2]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8433)) ? (((/* implicit */int) arr_4 [(short)9] [i_2])) : (((/* implicit */int) (short)30610))))))) ? ((-(((/* implicit */int) arr_6 [i_1 + 1] [i_11 + 1] [i_11])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                        arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] = arr_43 [i_11 - 1] [i_2] [i_1 + 1];
                    }
                }
                arr_57 [i_1] = ((/* implicit */long long int) (unsigned short)57107);
                var_31 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_47 [i_1] [i_1 - 3] [i_2] [i_2] [i_2]))));
            }
            for (signed char i_18 = 2; i_18 < 13; i_18 += 1) /* same iter space */
            {
                var_32 &= ((/* implicit */unsigned long long int) max((((unsigned short) (!((_Bool)1)))), (((/* implicit */unsigned short) arr_30 [i_1] [i_1] [i_1] [i_2] [i_2] [i_18]))));
                var_33 &= ((/* implicit */short) var_2);
                var_34 = ((/* implicit */long long int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1)))));
                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (arr_21 [i_1 + 2] [i_2] [i_1 - 1])))))));
                arr_61 [i_18] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (short)32765)) < (((/* implicit */int) var_0))))), (max((((/* implicit */long long int) (unsigned char)15)), (arr_59 [i_1] [i_2] [i_18])))))) && (((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1)))))))));
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_66 [i_1] [i_1] = (i_1 % 2 == 0) ? (((((/* implicit */_Bool) ((((((/* implicit */int) arr_39 [i_1] [(short)8] [i_1 - 3] [i_1 - 3])) + (2147483647))) << (((((((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1 - 2])) + (102))) - (8)))))) ? (((/* implicit */int) min(((signed char)80), (arr_39 [i_1] [i_1] [i_1] [i_1 + 2])))) : (((((((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1 + 2])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((((/* implicit */int) arr_39 [i_1] [(short)8] [i_1 - 3] [i_1 - 3])) + (2147483647))) << (((((((((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1 - 2])) + (102))) - (8))) - (89)))))) ? (((/* implicit */int) min(((signed char)80), (arr_39 [i_1] [i_1] [i_1] [i_1 + 2])))) : (((((((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1 + 2])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))));
            var_36 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_30 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 2] [11LL])), ((short)-16411))))) - (max((((arr_7 [i_1] [8LL] [i_1] [i_19]) ? (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_1)))));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 805954634)) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_11 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 2] [i_19] [i_19]))))) : (-1280255226594077323LL)));
            arr_67 [i_19] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_18 [i_1 - 3] [i_1 - 3])) == (((/* implicit */int) (short)32767)))) && (((/* implicit */_Bool) max((arr_24 [i_1] [i_1 - 1]), (((/* implicit */long long int) (_Bool)0)))))));
            arr_68 [i_1] [i_19] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((_Bool) 27U))), ((~(((/* implicit */int) ((arr_49 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_19]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
        }
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) max(((-(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (_Bool)0))))))), (((/* implicit */int) ((((((((/* implicit */int) var_8)) + (2147483647))) >> (((/* implicit */int) var_7)))) < (((/* implicit */int) (short)-7778))))))))));
    }
}
