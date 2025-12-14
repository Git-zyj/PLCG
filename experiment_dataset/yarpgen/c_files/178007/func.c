/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178007
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
    var_17 *= ((/* implicit */unsigned long long int) ((int) var_5));
    var_18 = ((/* implicit */short) (~((~(((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42957))))))))));
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((min((-1636101754536408975LL), (1636101754536408975LL))) != (min((1636101754536408979LL), (((/* implicit */long long int) (unsigned char)182)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */int) max((arr_0 [i_1] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (2757406378U))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (-(min((arr_1 [i_1]), ((+(-1)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_1] [i_2] [i_3] = (((-(arr_1 [i_2]))) != (var_3));
                        var_21 = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])));
                        var_22 = ((/* implicit */unsigned short) (~(1537560897U)));
                        arr_11 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_1] = ((/* implicit */int) var_4);
                        arr_12 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((17732772394541034952ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_0] [(signed char)7] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) min((arr_8 [5] [i_1] [i_1] [(_Bool)1] [i_4]), (arr_8 [(signed char)0] [i_1] [(signed char)0] [i_1] [(unsigned short)12])))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_13 [i_2] [9ULL] [9ULL] [i_2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)42957)))))))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(_Bool)1] [i_4] [i_4]))) : (max((((/* implicit */long long int) (unsigned short)8176)), (arr_0 [i_4] [i_4]))))), (((/* implicit */long long int) arr_3 [i_1] [i_0]))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */unsigned char) ((short) (unsigned char)1));
                            arr_19 [i_0] [i_1] [i_1] [i_1] [i_2] [10ULL] [i_0] = ((/* implicit */_Bool) max((min(((+(var_8))), (min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (var_8))))), (((/* implicit */long long int) min(((signed char)0), ((signed char)98))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1537560915U)) ? (3961175989349821419LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [5] [i_5]))))) : (((/* implicit */int) ((signed char) -1636101754536408975LL)))))) || (((/* implicit */_Bool) (-(((var_10) / (((/* implicit */int) (unsigned short)2753)))))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) (~((~(arr_7 [i_0])))));
                            var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (arr_17 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1]) : (-1636101754536408973LL)));
                        }
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_27 = ((unsigned short) 4194303);
                                var_28 = ((/* implicit */unsigned short) var_8);
                                var_29 = ((((/* implicit */_Bool) max((arr_28 [i_7] [i_8] [i_7] [i_1]), (((unsigned short) var_16))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(713971679168516673ULL)))) ? (((/* implicit */long long int) arr_2 [i_1])) : (max((((/* implicit */long long int) (unsigned short)29259)), (1636101754536408971LL)))))));
                                arr_32 [i_0] [i_0] [i_7] [(signed char)0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_11)))))))));
                            }
                        } 
                    } 
                    var_30 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((13049712685881296591ULL) >= (((/* implicit */unsigned long long int) 1636101754536408965LL)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (-527227126) : (((/* implicit */int) var_13)))) : ((~(((/* implicit */int) var_9)))))))));
                }
                /* vectorizable */
                for (signed char i_10 = 2; i_10 < 12; i_10 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((((arr_29 [i_1] [i_10] [i_1]) != (((/* implicit */int) (_Bool)1)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)112)) >> (((17658581089637137071ULL) - (17658581089637137064ULL)))))) - (4294967273U))))));
                                arr_39 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (+(18446744073709551615ULL)));
                                var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)182)))))));
                                arr_40 [(signed char)6] [i_1] [i_10] [i_11] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */int) ((((arr_34 [i_1] [i_1] [i_11]) + (9223372036854775807LL))) >> (((/* implicit */int) ((var_3) != (1187771508))))))) : (((/* implicit */int) ((((((arr_34 [i_1] [i_1] [i_11]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((var_3) != (1187771508)))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12)))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_36 *= ((((/* implicit */_Bool) ((signed char) 1187771508))) ? (((/* implicit */unsigned int) arr_38 [i_0] [i_1] [i_10 - 2] [i_0] [i_0] [5LL])) : (((unsigned int) var_13)));
                        arr_43 [i_13] [i_1] [i_10] [i_13] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_10] [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 - 1] [(short)4])) > (((/* implicit */int) (unsigned short)22665))));
                        arr_44 [(unsigned short)5] [(unsigned short)5] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3458764513820540928LL)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (_Bool)1))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (216172782113783808ULL)))))));
                        arr_45 [i_0] [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) arr_13 [i_13] [i_10] [i_1] [i_0]);
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (!(((((/* implicit */int) arr_28 [(signed char)11] [(signed char)11] [i_10] [i_13])) != (((/* implicit */int) (unsigned short)65535)))))))));
                    }
                    for (unsigned short i_14 = 2; i_14 < 11; i_14 += 3) 
                    {
                        var_38 = ((/* implicit */_Bool) (unsigned char)31);
                        arr_48 [i_0] [i_1] [i_10] [i_14] [i_10] = ((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_10]);
                        arr_49 [i_0] [i_1] [i_1] [i_0] [11] = ((var_1) != (((/* implicit */int) (signed char)-1)));
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_39 += ((/* implicit */long long int) (signed char)127);
                            arr_53 [i_1] = ((/* implicit */unsigned char) (+(var_7)));
                        }
                        for (signed char i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
                        {
                            arr_57 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10] [(signed char)6]))) != (arr_0 [(unsigned char)12] [i_1]))))) : ((+(9223372036846387200ULL)))));
                            arr_58 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2650480749299670082ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_23 [i_1] [i_1] [i_1] [i_14 - 2] [(unsigned short)3])))) == (((unsigned long long int) arr_6 [i_0] [i_0] [(_Bool)1]))));
                            arr_62 [i_1] [i_1] [i_10] = ((/* implicit */int) ((unsigned short) (signed char)-50));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 2; i_18 < 10; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 1; i_19 < 12; i_19 += 2) 
                        {
                            {
                                arr_67 [i_19] [(unsigned short)10] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(arr_30 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])));
                                var_41 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned short)0)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    var_42 ^= ((/* implicit */unsigned long long int) (~((+(min((((/* implicit */int) (short)4064)), (-33554432)))))));
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_12))) % (((/* implicit */unsigned int) (~(var_1))))))));
                }
            }
        } 
    } 
}
