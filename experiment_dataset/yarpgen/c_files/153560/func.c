/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153560
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((((/* implicit */int) var_6)) / (((/* implicit */int) var_14)))), (var_5)))) * (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_17)) > (var_11))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (((var_1) << (((min((arr_6 [i_0] [(unsigned short)12] [i_1] [6ULL]), (var_11))) - (369485397934482081LL)))))));
                    var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_2 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_9)))))));
                    var_22 = ((/* implicit */unsigned short) var_18);
                    arr_9 [10] [i_1] [(unsigned char)7] = ((((_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) ((_Bool) arr_4 [i_1 - 1]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 3 */
    for (signed char i_3 = 3; i_3 < 19; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = min((((((/* implicit */_Bool) var_7)) ? (arr_11 [i_3 - 2]) : (arr_11 [i_3 + 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_17) : (var_4)))));
        arr_13 [i_3] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (+(0ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))))));
        var_24 = ((/* implicit */_Bool) var_17);
    }
    for (signed char i_4 = 3; i_4 < 19; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))) : (min((((((/* implicit */long long int) arr_14 [i_4])) % (arr_17 [i_4] [i_4 - 1] [(unsigned short)14]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))))))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (arr_16 [i_4 - 3])))) % (((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5])) && (((/* implicit */_Bool) var_9))))) * (((/* implicit */int) var_13))))));
                var_27 |= ((((/* implicit */_Bool) -17LL)) ? (max((((/* implicit */long long int) var_0)), (arr_11 [i_4 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_28 = ((/* implicit */signed char) 133693440);
                    /* LoopSeq 3 */
                    for (long long int i_8 = 3; i_8 < 18; i_8 += 2) 
                    {
                        arr_27 [i_8 - 1] [i_5] [i_5] [i_8 - 1] [i_8] = min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */long long int) -133693440)))))), (((long long int) arr_25 [i_4] [i_5] [i_5] [i_7] [i_8 - 3] [i_6])));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((long long int) ((long long int) var_0))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        arr_30 [i_5] [i_5] [i_5] [i_7] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_31 [i_4] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */int) var_12);
                    }
                    for (signed char i_10 = 1; i_10 < 20; i_10 += 2) 
                    {
                        arr_35 [i_5] [i_5] [12LL] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_24 [i_10 - 1]) : (arr_24 [i_10 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_10 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-9223372036854775807LL - 1LL))))));
                        var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65535), (var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_15)))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) var_8)))))) : (arr_18 [i_4]))))));
                        var_32 = ((/* implicit */unsigned int) var_10);
                    }
                }
            }
            for (int i_11 = 4; i_11 < 20; i_11 += 3) 
            {
                var_33 = var_14;
                var_34 = ((/* implicit */long long int) max((min((var_12), (arr_28 [i_11] [i_11] [i_5] [i_5] [3U] [i_11 - 4]))), (var_13)));
                arr_38 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((min(((((_Bool)0) ? (-9223372036854775782LL) : (((/* implicit */long long int) -133693458)))), (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) arr_28 [i_4] [i_5] [i_5] [i_5] [i_11] [11ULL])) ? (arr_32 [i_4] [i_4] [i_5] [i_5] [(signed char)1] [i_11] [i_11]) : (((/* implicit */unsigned long long int) var_15)))))) - (3923145844ULL)))));
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) 
                {
                    for (unsigned char i_14 = 3; i_14 < 20; i_14 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) ((((arr_32 [i_5] [i_14] [i_5] [i_14 - 2] [i_5] [i_14] [(unsigned char)2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -19LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_46 [i_4] [i_5] [i_12] [i_12] [i_13] [i_12] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) arr_43 [i_14 - 1] [i_14 - 2] [i_14 + 1] [i_5])) == (((/* implicit */int) var_16)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_14 - 2] [i_14 - 1] [i_14 - 1] [i_5]))) + (arr_32 [i_14 + 1] [i_14] [i_5] [i_14 - 2] [i_14 - 1] [2ULL] [i_14 - 1]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_32 [i_14 - 2] [i_14 - 2] [i_5] [i_14 - 1] [i_14 - 2] [9U] [i_14 - 1])))));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) var_10)) << (((var_5) - (1638587478))))))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_15 [i_13 + 2])))) ? (((/* implicit */int) arr_15 [i_4 - 3])) : (((/* implicit */int) arr_15 [i_4 - 3]))));
                        }
                    } 
                } 
                arr_47 [i_12] [i_12] &= ((/* implicit */unsigned long long int) ((_Bool) ((int) arr_18 [i_4 + 2])));
                arr_48 [8U] [i_5] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (9223372036854775770LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
        }
        for (long long int i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_16))))) ? (((((/* implicit */int) arr_41 [i_15] [i_15] [i_15] [i_4])) / (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_42 [i_4] [i_4 - 2] [20] [i_15])) : (((/* implicit */int) var_8))))))) : (1125762467889152LL))))));
            /* LoopNest 2 */
            for (signed char i_16 = 1; i_16 < 17; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                        {
                            var_39 *= ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((unsigned int) var_16))))));
                            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */long long int) ((int) var_0))) & (arr_19 [(_Bool)1]))))));
                            var_41 |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_12)))))) + (9223372036854775807LL))));
                            arr_58 [i_15] [i_15] [i_16] [i_17] [i_15] [i_18] [i_17] = ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_42 [i_17] [i_16] [i_16] [i_4 + 1])) : (((/* implicit */int) var_6))));
                            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) | (((/* implicit */int) var_10)))) / (((/* implicit */int) ((signed char) arr_53 [i_4 + 1] [8LL] [i_16] [i_15] [i_18] [i_15]))))))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) 
                        {
                            arr_61 [i_19] [i_16] [i_16] [i_16] [i_4] = ((/* implicit */unsigned short) var_7);
                            arr_62 [i_17] [i_16] [i_16] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_16] [i_15])) ? (((/* implicit */int) ((var_18) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_43 [i_4] [i_4] [i_17] [i_16]))));
                        }
                        for (unsigned short i_20 = 2; i_20 < 19; i_20 += 3) 
                        {
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [i_4 + 2])) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) 2147483616U)))), (((/* implicit */unsigned long long int) arr_49 [i_16] [i_16 + 2] [i_16]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (4294967295U)))), (arr_64 [i_4] [i_4 - 3] [i_20 + 2] [(signed char)10] [i_4] [i_16 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_4 - 3] [i_16 + 3] [2ULL] [i_20 + 1]))) : (var_17)))))))));
                            var_44 *= ((/* implicit */_Bool) ((int) arr_21 [i_4] [(_Bool)1]));
                        }
                        for (long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((max((var_7), (((/* implicit */long long int) var_5)))), (max((((/* implicit */long long int) var_17)), (arr_19 [i_16]))))) : (((((/* implicit */_Bool) var_17)) ? (arr_60 [i_4] [19U] [i_16] [i_16 - 1] [i_21] [i_21]) : (((/* implicit */long long int) var_4))))));
                            arr_70 [i_21] [i_16] [i_16] [i_16] [i_16] [i_15] [i_4] = ((/* implicit */signed char) arr_60 [i_4] [17] [i_16] [i_16] [17] [i_21]);
                            var_46 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((1048544ULL) - (1048520ULL)))));
                            var_47 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))), (var_17)));
                            arr_71 [i_16] [i_15] [i_15] [i_15] = ((min((((/* implicit */unsigned long long int) ((_Bool) 4294967295U))), (arr_64 [i_15] [9LL] [i_16] [i_15] [i_21] [i_4]))) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (min((arr_14 [(signed char)1]), (((/* implicit */unsigned int) var_16))))))));
                        }
                        arr_72 [i_17] [14LL] [14LL] [i_15] [i_4] &= ((/* implicit */unsigned int) ((((arr_23 [i_4] [i_4] [6U] [i_4] [(_Bool)1] [i_4 - 1]) == (arr_23 [i_4] [i_4] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 3]))) ? (((/* implicit */int) var_6)) : (((int) var_16))));
                        var_48 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((arr_63 [0U]) ? (9223372036854775781LL) : (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) 0U)) : (4ULL))), (((/* implicit */unsigned long long int) ((arr_54 [i_16 - 1] [i_4 - 1] [i_15] [17LL]) ^ (((/* implicit */long long int) arr_20 [i_16 + 3] [i_4 + 1])))))));
                        arr_73 [i_16] [i_15] [i_16] = ((/* implicit */int) var_7);
                    }
                } 
            } 
        }
        var_49 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (274877906943ULL) : (((/* implicit */unsigned long long int) -9223372036854775781LL)))), (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) (unsigned char)20)))))));
        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_2)) ? (arr_40 [(_Bool)0] [(unsigned char)8]) : (((/* implicit */unsigned int) var_5))))));
    }
    for (signed char i_22 = 3; i_22 < 19; i_22 += 1) /* same iter space */
    {
        var_51 = var_1;
        var_52 |= ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [(unsigned char)12] [6] [(signed char)10] [i_22 - 2] [6] [i_22 - 2]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
    }
}
