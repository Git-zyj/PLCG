/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108443
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) 7387048629534396646ULL)) ? (((/* implicit */int) (signed char)99)) : ((-2147483647 - 1)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_7) : (arr_2 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) ((unsigned char) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) * (var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned int) var_2)), (var_5))))) : (((((/* implicit */_Bool) (unsigned char)172)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3180368647U))) : (((/* implicit */unsigned int) var_1)))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(max((12252002265052326111ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_9) : (var_15)))))))))));
    }
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_13))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((max((((/* implicit */int) var_12)), ((-2147483647 - 1)))) <= (-2147483647))))));
                            arr_18 [i_4] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) arr_14 [i_2] [i_4] [i_5] [i_6])))), (((/* implicit */int) min((var_6), (var_6))))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) arr_4 [i_3])), (arr_5 [i_4]))));
                            arr_20 [i_2] [i_3] [i_2] [i_2] [(unsigned char)4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (arr_9 [i_3] [i_3]))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_3] [i_3] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2] [i_3]))) ? (((/* implicit */int) ((unsigned short) (signed char)23))) : (((/* implicit */int) max((var_10), (arr_10 [i_2])))))) + ((+(((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_7))))))));
                            arr_25 [9LL] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_16 [i_7] [i_7 - 2] [(unsigned char)0] [i_7] [i_7 - 1] [i_7]) > (var_9)))), ((+(((/* implicit */int) min((var_10), (var_10))))))));
                            arr_26 [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-38))))), (max((((/* implicit */unsigned long long int) 2147483643)), (1354097519382833410ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (7U) : (var_9)))) ? (((/* implicit */int) arr_17 [i_7] [i_2] [i_5] [i_4] [i_3] [i_2])) : (((((/* implicit */int) var_14)) / (((/* implicit */int) arr_15 [i_2] [i_2] [0LL] [i_4] [(unsigned short)6] [i_3])))))))));
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_7 - 1] [7ULL] [1U] [i_7 - 2] [i_7 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_2] [i_3] [i_5] [i_7 - 1])) * (((/* implicit */int) (unsigned short)46749))))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) arr_2 [i_2])) : (var_13))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-11)), ((unsigned char)254)))))));
                            arr_27 [3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) var_15)), (arr_0 [i_7 + 2] [i_7 + 1])))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_31 [i_4] [i_5] [i_4] [i_4] [i_3] [i_2]))));
                            arr_32 [1] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */signed char) 4U);
                        }
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_35 [i_3] [(unsigned char)3] [7LL] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_2] [i_3] [i_2] [i_9]))))));
                            var_23 ^= max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)18395));
                        }
                        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */unsigned int) var_7)), (var_8))))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) 2147483619)) + (var_15)))))) >= (var_8))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_2] [i_3] [i_12])) - (((/* implicit */int) arr_13 [i_2] [i_3] [i_2]))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) (unsigned char)117)))))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (6194741808657225502ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46724)))))) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) arr_12 [i_2] [i_3] [i_2]))));
                            var_29 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_40 [i_2] [i_3] [i_4] [i_11] [i_12]))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                        {
                            arr_46 [i_2] [i_2] [i_4] [i_11] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_15)));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_11])) | (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_44 [i_2] [i_3] [i_4] [i_3] [i_13])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) < (2147483623))))));
                        }
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_23 [i_2] [i_3] [i_3] [i_4] [i_11]))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_53 [i_3] [i_14] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)220)), (min((arr_12 [i_2] [i_3] [i_15]), (arr_12 [i_2] [i_3] [(signed char)10])))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_30 [i_2] [i_3] [i_4] [i_14] [i_15])))) ? (max((420807949), ((~(((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) (unsigned char)135)) ? (-2147483619) : (((/* implicit */int) (unsigned char)110)))))))));
                            arr_54 [i_3] [i_3] [i_4] [i_3] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3] [i_2] [i_14] [i_4] [i_3] [i_2]))) & (((arr_7 [(signed char)11]) * (((/* implicit */unsigned long long int) var_15))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_8))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))))))) : ((+(((((/* implicit */_Bool) arr_45 [i_2] [i_3] [i_3] [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1) > (((/* implicit */int) var_14)))))) : (arr_41 [i_2] [i_3] [i_4] [i_2] [i_16]))))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)131)))))));
                            arr_57 [i_16] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)96))));
                            var_35 *= ((/* implicit */unsigned int) arr_2 [i_2]);
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            arr_61 [10LL] [i_2] [6U] [i_2] [i_2] |= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                            arr_62 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) 524287);
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ^ ((-(max((arr_48 [i_2] [i_4] [(unsigned char)0] [i_14] [i_14] [i_2]), (((/* implicit */unsigned long long int) arr_28 [i_2] [i_3] [i_4] [i_17] [i_4] [(unsigned char)4] [i_17])))))))))));
                            var_37 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 524283)) ? (min((5590038136707100249ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-122)) ^ (((/* implicit */int) var_2)))))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (524296) : (((/* implicit */int) (unsigned char)158))))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [(unsigned short)5] [i_2])) >= (((/* implicit */int) arr_64 [i_4]))))))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) -97582626))));
                            arr_66 [i_18] [i_3] [i_2] [i_4] [i_3] [i_2] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))), (min((((/* implicit */unsigned long long int) var_11)), (var_13))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_58 [i_2] [i_3] [i_3] [i_3] [i_18] [i_14] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_3] [i_3] [i_3] [i_14] [i_3])))))), (((((/* implicit */int) arr_11 [i_14])) / (var_7))))))));
                        }
                        for (signed char i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
                        {
                            var_40 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) (signed char)-42)) ^ (((/* implicit */int) (signed char)15)))), ((+((-2147483647 - 1))))));
                            var_41 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((signed char) arr_48 [i_2] [i_3] [i_3] [i_4] [i_3] [i_19]))))) | ((+(((((/* implicit */_Bool) var_0)) ? (-3) : (((/* implicit */int) (signed char)-57))))))));
                            var_42 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) * (arr_23 [i_2] [i_3] [i_4] [i_14] [i_19])))) ? ((~(arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) 4580444231431908633LL)) ? (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_23 [i_2] [i_3] [i_4] [i_14] [i_19]))));
                        }
                        for (signed char i_20 = 0; i_20 < 12; i_20 += 1) /* same iter space */
                        {
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_2])), (var_14)))))))));
                            arr_72 [i_3] [i_2] [i_3] [i_3] [i_3] [i_14] [i_14] = arr_70 [i_2] [i_3];
                            var_44 = ((/* implicit */unsigned char) max((((((2634551033289194924ULL) * (((/* implicit */unsigned long long int) 2147483611)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) arr_14 [i_2] [i_3] [9LL] [8U]))));
                            arr_73 [i_3] [i_3] = ((/* implicit */unsigned long long int) (((~(arr_45 [i_2] [7LL] [i_4] [i_14]))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_48 [i_20] [i_3] [i_14] [6U] [i_3] [i_2]))))));
                        }
                    }
                    var_45 = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        arr_78 [i_2] [6U] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -524302)) || (((/* implicit */_Bool) 3873982939U)))) ? (((int) 2634551033289194919ULL)) : (((/* implicit */int) (unsigned char)91))));
                        var_46 = ((/* implicit */unsigned int) min((var_46), (var_5)));
                    }
                }
            } 
        } 
    } 
    var_47 = ((/* implicit */unsigned char) max((var_5), (((max((var_5), (var_9))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))))));
    var_48 = var_11;
}
