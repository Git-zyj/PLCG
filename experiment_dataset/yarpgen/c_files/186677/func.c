/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186677
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_8 [i_1 + 1] = ((/* implicit */unsigned int) var_9);
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_15 [i_1] [i_1] = ((/* implicit */int) var_7);
                        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (+(var_8))))));
                        arr_16 [i_0 + 2] [i_0 + 2] [(_Bool)1] [i_3] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned long long int) var_4);
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_20 [0] [(unsigned short)8] [i_1] [7U] [0] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)46999)) : (((/* implicit */int) (unsigned short)46991))))) != (min((((/* implicit */long long int) var_1)), (arr_19 [i_4] [i_2] [i_1] [i_0])))))), (((arr_13 [i_1 + 3] [i_0 - 2] [i_0 - 1] [i_0 - 2]) >> (((arr_2 [i_0]) - (811418561U)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            arr_23 [i_2] [i_2] [(unsigned short)0] [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1] [i_2] [8ULL])) ? (arr_13 [1U] [i_4] [(_Bool)1] [(unsigned char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27845))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1])))));
                            arr_24 [i_5] [(unsigned char)6] [i_2] [i_1 - 1] [i_0] = var_9;
                            var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_1 + 1])) ? (arr_22 [i_0 - 1]) : (arr_22 [i_0 + 2]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            var_12 *= (!(((/* implicit */_Bool) (signed char)96)));
                            arr_28 [i_6] [i_1 + 3] [i_2] [i_1 + 3] [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_27 [i_6] [(_Bool)1] [i_2] [(_Bool)1] [i_0]))))));
                            var_13 += ((/* implicit */unsigned int) ((arr_10 [i_1 + 2] [i_0 + 1] [i_0 + 1]) ? (arr_26 [6U] [i_2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_2]))))));
                            arr_29 [i_0] [i_0] [i_0] [9U] [i_0] [(unsigned short)8] = ((/* implicit */long long int) -1692175236);
                        }
                    }
                    arr_30 [9ULL] [i_1] [i_1] = ((/* implicit */signed char) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)18513)) : (((/* implicit */int) arr_27 [i_2] [(unsigned char)4] [i_1] [i_0] [i_0])))))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) arr_18 [(signed char)6] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)8160)))) : (((/* implicit */int) ((signed char) var_7))))), ((-((-(var_5))))))))));
                    var_15 |= ((short) (short)8160);
                    arr_31 [i_0] [i_0 + 2] [i_0 - 1] [8] = ((/* implicit */short) ((18446744073709551604ULL) >> (((/* implicit */int) (_Bool)1))));
                }
                for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_16 = (+(((((/* implicit */int) (!(arr_1 [i_8])))) ^ (((/* implicit */int) arr_14 [i_8 - 2] [i_8 - 1] [i_1 - 1] [i_0 + 1])))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_41 [i_8] = ((/* implicit */short) arr_39 [i_8] [i_7] [2ULL] [2ULL]);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_8)) - ((((_Bool)1) ? (3372552966074874160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-303)))))));
                        }
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_4))));
                            arr_44 [i_8] [i_10] [i_8 - 1] [i_8] [6ULL] [i_8] = ((/* implicit */unsigned char) min((arr_32 [i_0]), (((/* implicit */int) arr_1 [i_8]))));
                            arr_45 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((488957823), (((((/* implicit */int) arr_10 [i_10] [i_8] [(short)1])) ^ (2130706432)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [9LL] [i_1]))))))))) : (arr_6 [i_0] [i_0])));
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            var_19 = ((/* implicit */short) min(((-((~(((/* implicit */int) (short)32767)))))), (67108864)));
                            arr_48 [i_0] [i_0] [i_8] [i_8] [i_7] = ((/* implicit */int) 9223372036854775807LL);
                        }
                        arr_49 [i_0] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-27851))))) ? (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) var_3))))) : (min(((-(((/* implicit */int) arr_9 [i_0] [i_0 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2027)))))))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        arr_53 [i_0] [i_1] [i_7] [i_12] = ((/* implicit */_Bool) 9ULL);
                        arr_54 [i_1 + 3] [i_7] [i_12] = ((/* implicit */short) ((0ULL) / (((/* implicit */unsigned long long int) arr_32 [i_0]))));
                    }
                    for (unsigned char i_13 = 3; i_13 < 9; i_13 += 3) /* same iter space */
                    {
                        arr_57 [i_13] = (unsigned char)235;
                        var_20 = ((/* implicit */signed char) arr_33 [i_13] [i_1] [i_0]);
                        var_21 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (short)-27845)) ? (-68719476736LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17148))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 3; i_14 < 9; i_14 += 3) /* same iter space */
                    {
                        arr_60 [i_14] [(unsigned short)9] [(signed char)7] [(signed char)7] [i_0] = ((/* implicit */int) (-(296060558U)));
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) arr_33 [i_14 - 3] [i_14] [i_1 + 1]);
                            var_23 = ((/* implicit */unsigned short) ((long long int) arr_40 [i_0 + 1] [i_1 + 3] [i_1 + 2] [i_14 - 2] [i_14]));
                            arr_64 [i_0] [i_1 + 3] [i_15] [i_0] [i_15] = ((/* implicit */unsigned char) arr_33 [i_15] [(unsigned short)5] [i_0]);
                            var_24 = arr_6 [i_0] [i_1 + 1];
                        }
                        for (short i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            arr_69 [1] = ((/* implicit */unsigned char) (~((-(16382U)))));
                            arr_70 [i_0 + 2] [i_1] [i_7] [i_14] [i_7] = ((/* implicit */unsigned char) 12ULL);
                            arr_71 [i_0] [i_1] [i_0] [i_14] [i_16] [i_0] [0U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_16] [i_1] [(unsigned short)1])) ? (3998906737U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(signed char)10] [i_0 + 1] [i_7] [i_1] [i_0 + 1]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16)))))));
                            var_25 -= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)55675));
                            var_26 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (signed char)-2)))))));
                        }
                    }
                    arr_72 [i_0] [(unsigned char)6] [i_7] = ((/* implicit */short) min((9223372036854775807LL), (((/* implicit */long long int) (signed char)77))));
                }
                for (unsigned short i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    arr_75 [i_0] |= ((/* implicit */long long int) arr_61 [i_0] [i_0 - 3] [i_1] [i_17 + 3]);
                    arr_76 [i_0] [i_17] = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned char) arr_65 [i_0] [i_0] [i_0] [i_0 - 3]))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))))));
                    var_27 += ((/* implicit */unsigned short) var_2);
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((var_7) ? (4194272LL) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_0] [i_1] [i_17] [i_17])))))))) ? (18446744073709551593ULL) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (4354437703191449126ULL))) >> (((min((((/* implicit */int) (unsigned short)46100)), (arr_55 [i_17] [i_17] [i_1 + 3] [i_0]))) + (1146979954)))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_18 = 1; i_18 < 9; i_18 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_1 [i_0]))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (signed char)81)) & (((/* implicit */int) (unsigned short)14336)))) : (((/* implicit */int) arr_4 [i_1]))));
                    arr_79 [i_0] [i_18] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [(short)5])) : (-546154429)))) ? (((/* implicit */int) arr_11 [i_1 + 3] [i_0 + 2])) : (((/* implicit */int) arr_68 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1] [i_1] [i_1]))));
                }
                for (int i_19 = 1; i_19 < 9; i_19 += 3) /* same iter space */
                {
                    var_31 = ((((/* implicit */_Bool) arr_63 [i_19] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [(signed char)10])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (unsigned short)65535))))) : (-6582341840903420102LL));
                    arr_82 [i_19] [i_1 + 1] [i_19 - 1] = arr_77 [i_1];
                    var_32 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((18446744073709551613ULL) >> (((((/* implicit */int) arr_38 [i_19] [i_0] [i_19] [6ULL] [i_0] [i_0])) - (6784))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101)))))));
                    arr_83 [i_19] [i_1] [i_1 + 1] [i_19] = ((/* implicit */_Bool) (((-(((long long int) arr_42 [i_19 + 3] [i_19] [i_1 + 3] [i_1 + 1] [i_0] [i_0] [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) (_Bool)1))))))));
                }
                arr_84 [(signed char)2] [i_0 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)12))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)96)), ((+(((/* implicit */int) (unsigned short)45978))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)53401), (((/* implicit */unsigned short) (unsigned char)254))))) ? (((/* implicit */int) min(((unsigned short)9853), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55661))) > (0U))))))) : (min((var_0), (var_0)))));
    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (unsigned char)255))));
}
