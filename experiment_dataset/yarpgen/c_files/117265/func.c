/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117265
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((4267746700106048122ULL), (((/* implicit */unsigned long long int) var_8))));
                    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4267746700106048100ULL)) ? (((/* implicit */int) (signed char)97)) : (-8)));
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_1 + 1] [i_1 - 1] [i_0]) : (((/* implicit */unsigned int) var_9))))) != (min((var_16), (((/* implicit */unsigned long long int) arr_3 [0LL] [11ULL] [i_1 + 1]))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)18] [i_1] [i_1] [0U])) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-103))))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((short) var_15));
                }
            } 
        } 
        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)4568)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4294967294U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17)))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_14)))))) != (((((/* implicit */int) var_4)) << (((/* implicit */int) var_17))))));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) var_1);
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_16 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_4] [i_5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_5]))) / (arr_10 [i_3] [i_4])))));
                    var_25 = ((/* implicit */_Bool) var_11);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_26 &= ((/* implicit */signed char) var_6);
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_6] [14U] [i_4] [14LL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_5] [i_4] [i_3]))))) : (((/* implicit */int) min((arr_6 [i_3] [i_4] [i_4] [i_6]), (arr_6 [i_3] [i_4] [i_3] [i_6]))))));
                        var_28 = ((/* implicit */int) var_4);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) -454996829439997781LL);
                        arr_23 [i_4] = ((/* implicit */unsigned int) (~(max((var_11), (((long long int) var_4))))));
                        arr_24 [i_3] = ((/* implicit */unsigned short) var_4);
                        var_30 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                    }
                    for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (unsigned char)132))))) : (((((/* implicit */_Bool) min((arr_5 [i_8] [i_4] [i_8]), (((/* implicit */unsigned int) (short)-4554))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_22 [i_4] [i_4] [i_4] [i_3])))));
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            arr_32 [i_9] [1ULL] [i_5] [i_4] [10ULL] = ((/* implicit */_Bool) var_5);
                            var_32 &= ((/* implicit */int) (+(((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)37), ((unsigned char)21))))) : (((unsigned long long int) var_13))))));
                            var_33 |= arr_3 [i_3] [i_4] [i_4];
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_18 [i_3] [(short)15] [i_3] [i_3] [i_9]), (((/* implicit */unsigned long long int) arr_9 [i_5]))))) ? (((/* implicit */int) (_Bool)1)) : (var_9)))) ? (min((arr_27 [i_3] [i_4] [i_5] [0ULL] [0ULL] [i_5]), (arr_27 [i_3] [i_4] [(signed char)7] [i_5] [i_8] [i_3]))) : (((((/* implicit */_Bool) (short)-4554)) ? (581529445U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_35 |= ((/* implicit */signed char) var_4);
                            var_36 -= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 242547479U)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_10 [i_4] [i_4]))) << (((((/* implicit */int) var_14)) - (194))))), (((/* implicit */unsigned long long int) arr_11 [13U] [16U] [(unsigned short)9]))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            arr_38 [i_11] [i_8] [i_5] [i_4] [(unsigned char)7] = var_5;
                            arr_39 [i_3] [(unsigned short)14] [i_5] [i_8] [i_11] [i_11] = ((/* implicit */unsigned int) var_8);
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (arr_22 [(unsigned char)1] [10LL] [i_4] [i_4])));
                            arr_40 [i_4] [i_4] [i_3] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */int) ((unsigned short) 2275935966U));
                        }
                        /* vectorizable */
                        for (short i_12 = 1; i_12 < 16; i_12 += 2) 
                        {
                            var_38 ^= ((/* implicit */unsigned char) (short)32767);
                            var_39 -= ((/* implicit */short) (_Bool)1);
                        }
                        arr_44 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (var_7) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-11801)))))));
                    }
                }
            } 
        } 
        var_40 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (32767LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            arr_47 [i_13] = (-(914840487U));
            var_41 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_28 [i_13] [i_13] [i_13] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) 1248479858)) : (var_10))) != ((-(var_7)))));
            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(signed char)6] [i_3] [i_3])) - (((/* implicit */int) arr_13 [i_3] [i_13]))))))))));
            /* LoopSeq 3 */
            for (short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                var_43 = ((/* implicit */signed char) ((unsigned int) var_2));
                var_44 = ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
            }
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (short)7238))));
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (~(((/* implicit */int) arr_6 [i_3] [i_13] [i_15] [i_15])))))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 2) 
                    {
                        arr_65 [i_3] [i_3] [i_13] [i_16] [i_17] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((short) 2097151U))) : (((/* implicit */int) (signed char)87))));
                        arr_66 [i_3] [i_16] [i_17] [i_18] = ((/* implicit */_Bool) 1248479858);
                    }
                    for (long long int i_19 = 1; i_19 < 15; i_19 += 2) 
                    {
                        var_47 = ((/* implicit */int) max((var_47), (((((/* implicit */int) arr_28 [i_19 + 2] [i_19] [i_19] [i_19 + 2] [i_19 - 1] [i_19 - 1])) & (((/* implicit */int) var_17))))));
                        arr_69 [(unsigned short)15] [i_13] [2U] [2U] [i_19 + 2] = ((/* implicit */signed char) var_7);
                    }
                    for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        arr_72 [(unsigned short)9] [(short)0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_4)) - (((/* implicit */int) var_12))))));
                        arr_73 [i_3] [i_13] [(unsigned short)15] [i_16] [i_17] [i_20] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        var_48 |= ((/* implicit */unsigned short) var_8);
                        arr_78 [i_3] [i_3] [i_3] [i_16] [i_17] [i_21] [i_3] = ((/* implicit */unsigned int) (unsigned char)153);
                        arr_79 [7ULL] [i_13] [i_13] [i_17] [(short)16] = ((/* implicit */int) ((((/* implicit */_Bool) 18014394214514688ULL)) ? (2225156779U) : (1U)));
                    }
                    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)240)))));
                }
                for (unsigned char i_22 = 0; i_22 < 17; i_22 += 2) 
                {
                    arr_83 [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_3]))));
                    var_50 = ((/* implicit */long long int) ((unsigned short) var_2));
                }
                for (unsigned int i_23 = 0; i_23 < 17; i_23 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_24 = 0; i_24 < 17; i_24 += 2) 
                    {
                        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) 4294967293U))));
                        var_52 ^= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)6513));
                    }
                    for (int i_25 = 1; i_25 < 16; i_25 += 2) 
                    {
                        var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((((((/* implicit */int) var_17)) <= (((/* implicit */int) var_17)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (-32768LL)))) : (((((/* implicit */_Bool) (unsigned short)42952)) ? (((/* implicit */int) arr_63 [i_3] [i_13] [i_16] [i_25])) : (((/* implicit */int) (unsigned short)22584)))))))));
                        arr_92 [i_3] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_85 [i_16] [i_23] [i_25 + 1] [i_25 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                    var_54 += ((/* implicit */unsigned char) (+(((int) (unsigned char)89))));
                }
                var_55 ^= ((/* implicit */_Bool) (~(var_13)));
                arr_93 [(short)15] [i_13] = ((/* implicit */int) 3526113053U);
            }
        }
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 17; i_26 += 2) 
        {
            for (int i_27 = 0; i_27 < 17; i_27 += 2) 
            {
                {
                    var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((((_Bool) (short)-12528)) ? (((((/* implicit */_Bool) var_14)) ? ((-(arr_10 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))))))));
                    arr_100 [i_3] [i_26] = ((/* implicit */int) ((long long int) (unsigned short)57130));
                }
            } 
        } 
    }
    var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) var_17))));
    var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) var_7))));
    var_59 = ((/* implicit */_Bool) var_6);
    var_60 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 914840472U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3380126834U)))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (unsigned short)59048))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))))));
}
