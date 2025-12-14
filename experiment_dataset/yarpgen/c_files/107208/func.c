/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107208
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) var_17)))))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
                {
                    var_21 = ((((/* implicit */int) arr_13 [i_4 + 3] [i_4] [i_4] [i_3])) >> (((/* implicit */int) arr_13 [i_4 + 3] [i_4] [i_4] [i_3])));
                    var_22 = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_4 + 3]));
                    var_23 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_4] [i_4]))) + (var_17)));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_4 + 2])) ? (((/* implicit */int) (signed char)-67)) : (var_15)));
                }
                for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_5))));
                    var_26 |= ((/* implicit */signed char) ((((17487925422941145283ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))));
                    arr_16 [i_3] [i_1] = ((/* implicit */unsigned char) ((var_6) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_1])))))));
                    var_27 = ((var_3) | (arr_15 [i_0] [i_0] [i_3] [i_0]));
                    arr_17 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 140737488224256LL))))) % ((+(((/* implicit */int) var_5))))));
                }
                arr_18 [i_0] [i_1] [i_1] |= (((~(((/* implicit */int) var_14)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) == (-140737488224257LL)))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_28 = (-(var_10));
                    var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned char)252)))) ^ ((~(((/* implicit */int) (short)24576))))));
                    var_30 = (~(arr_4 [i_6] [i_3] [i_0]));
                }
            }
            for (signed char i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_7] [i_7] [i_7])) <= (((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])) == (arr_10 [i_1] [i_1]))))))) | (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) : (arr_0 [i_0] [i_0]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_13) : (var_17)))))))))));
                var_32 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0]) | (var_8)))) ? ((+(1538729311))) : ((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_7])))))))));
            }
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [i_0] [i_0] [i_1] [i_1]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) | (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? ((~(var_9))) : (((/* implicit */long long int) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))))));
            var_34 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_16)))))) || (((/* implicit */_Bool) ((((arr_13 [i_0] [i_1] [i_0] [i_0]) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) 1777118018)) || (((/* implicit */_Bool) (signed char)-96))))))))));
            var_35 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) >= (((arr_15 [i_1] [i_1] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) == (((((/* implicit */int) (_Bool)1)) % ((-(((/* implicit */int) var_16))))))));
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 10; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_0] [i_8])) >> (((arr_4 [i_0] [i_0] [i_0]) - (1931940155579405797LL))))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0])) == (arr_4 [i_0] [i_9] [i_10]))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)95))) >= (140737488224256LL)));
            var_39 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_8))));
            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_8])) : (arr_6 [i_0] [i_0] [i_8])))) ? ((-(arr_10 [i_0] [i_8]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned short)4))))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 1; i_12 < 11; i_12 += 1) 
            {
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967295U) >> (((/* implicit */int) (signed char)2))))) ? (((arr_10 [i_0] [i_11]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)49))))) : (((/* implicit */long long int) ((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) arr_20 [i_0] [i_11] [i_12]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)13909)) >> (((((/* implicit */int) (signed char)-3)) + (34)))))) ? ((-(((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_0)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) >= (4294967295U)))) : (((((/* implicit */_Bool) (unsigned short)30)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0]))))))));
                var_42 -= ((/* implicit */unsigned char) ((140737488224256LL) - (((((/* implicit */_Bool) -1116884750169224314LL)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)2))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33))) | (-1116884750169224318LL)))))));
                arr_37 [i_12] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (630130446U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0])))))) | (arr_11 [i_0] [i_0]))))));
            }
            arr_38 [i_0] [i_11] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_17) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))))));
            var_43 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)4)) % ((-2147483647 - 1))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (arr_10 [i_0] [i_0]) : (((/* implicit */long long int) var_15))))));
            var_44 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_10 [i_0] [i_11]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_11] [i_0] [i_11] [i_11]))) : (arr_21 [i_0] [i_0] [i_11])))))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            var_45 -= ((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_0] [i_0])) : (17516073820949324787ULL))) >> (((((/* implicit */int) (unsigned char)96)) - (85))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)41015)) ? (arr_10 [i_0] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) >= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))) - (var_13))))))))));
            var_46 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (var_10))) : (-2147483629)))) | (((((/* implicit */_Bool) arr_4 [i_13] [i_0] [i_0])) ? ((~(arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_13]))) & (arr_15 [i_0] [i_0] [i_0] [i_0]))))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                for (unsigned char i_15 = 1; i_15 < 10; i_15 += 4) 
                {
                    {
                        var_47 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)31))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_15] [i_15] [i_15 + 1] [i_15 - 1] [i_13])) | (((/* implicit */int) (short)12))))));
                        var_48 = ((((/* implicit */int) (!(((/* implicit */_Bool) 140737488224268LL))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_15 - 1] [i_15 + 2] [i_15] [i_15])) && (((/* implicit */_Bool) arr_22 [i_15 - 1] [i_15 + 2] [i_15] [i_15]))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_16 = 2; i_16 < 11; i_16 += 4) 
                        {
                            arr_51 [i_0] [i_0] [i_13] [i_15] [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_13] [i_13] [i_13] [i_15] [i_16] [i_16] [i_15]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)96))))) : (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95)))))))) ? (((((/* implicit */int) arr_23 [i_14] [i_13] [i_0] [i_13])) + (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)159))))));
                            arr_52 [i_15] [i_15] [i_15] [i_14] [i_13] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0]))) : (arr_0 [i_16] [i_16]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_15 + 1])))))) <= (((/* implicit */int) ((930670252760226829ULL) >= (((/* implicit */unsigned long long int) var_7)))))));
                            var_49 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) ? (-768117373) : (768117369))))));
                            var_50 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [i_15 - 1] [i_15 + 1] [i_16 + 1])) ? (((/* implicit */long long int) var_6)) : (var_7))) % (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_13 [i_16] [i_16] [i_16 + 1] [i_15])))))));
                            var_51 = ((/* implicit */short) (((+(((/* implicit */int) arr_13 [i_0] [i_15 + 1] [i_16 - 1] [i_15])))) <= ((-((+(((/* implicit */int) arr_30 [i_0] [i_13] [i_14] [i_0] [i_15] [i_15]))))))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                        {
                            var_52 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_11 [i_15] [i_15]) <= (((/* implicit */unsigned long long int) 140737488224256LL)))))))) >= (((((((/* implicit */unsigned long long int) var_6)) | (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17516073820949324787ULL)) ? (arr_24 [i_0]) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))))));
                            var_53 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_15] [i_15] [i_15 - 1] [i_15 + 1] [i_15 - 1]))) <= (var_9))))));
                            var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (var_10)))) + (3564621591U)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_13))) * (((/* implicit */unsigned int) ((arr_24 [i_13]) / (((/* implicit */int) arr_43 [i_0]))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) var_16)) * (((/* implicit */int) arr_19 [i_0] [i_13] [i_14]))))))))))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
                        {
                            var_55 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 768117361)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_15 - 1] [i_14])) || (((/* implicit */_Bool) var_8)))))));
                            var_56 ^= ((/* implicit */int) (((~((+(arr_0 [i_0] [i_13]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3564621618U)) - (6815575708718590704LL))))));
                            var_57 -= (+(((((/* implicit */int) (unsigned short)41015)) | (((/* implicit */int) var_11)))));
                        }
                    }
                } 
            } 
            arr_59 [i_0] [i_0] = ((((/* implicit */_Bool) ((1783309875U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) <= (var_7)))) <= (((((/* implicit */int) (unsigned short)41015)) - (var_15)))))) : (((((((/* implicit */int) (signed char)34)) <= (793589486))) ? (((((/* implicit */_Bool) 268434944)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_16))))))));
            var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) >= (((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_13] [i_13]))))))))));
        }
        for (long long int i_19 = 1; i_19 < 11; i_19 += 4) 
        {
            var_59 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_16)) >> (((var_6) - (2009063164U)))))));
            var_60 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_46 [i_19 + 1] [i_19 - 1] [i_19] [i_19 + 1] [i_0])) && (((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_19]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34518))))))))));
            var_61 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) var_6)) == (var_9))))));
            /* LoopSeq 3 */
            for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
            {
                var_62 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]))) : (var_7))) >> (((((/* implicit */int) (unsigned short)24576)) - (24576))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_12)))))) == (((((/* implicit */_Bool) var_14)) ? (var_7) : (5057212229712518103LL)))))))));
                var_63 = ((((/* implicit */_Bool) ((arr_33 [i_19 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))) ? (((((/* implicit */int) (unsigned short)34521)) * (((/* implicit */int) arr_56 [i_0] [i_0] [i_19] [i_19] [i_19])))) : ((+(var_10))));
                var_64 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_10 [i_0] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_19] [i_19] [i_20]))) : (var_8))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)248))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_19 + 1]))) & (4294967292U))))));
            }
            /* vectorizable */
            for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) /* same iter space */
            {
                arr_67 [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-57)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                var_65 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30120)) ? (((/* implicit */int) arr_54 [i_0] [i_19] [i_0] [i_21] [i_0])) : (((/* implicit */int) arr_39 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_21])) || (((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_19] [i_19] [i_19]))))) : (((/* implicit */int) arr_45 [i_19 + 1] [i_19 - 1] [i_19 - 1]))));
                var_66 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_47 [i_19 + 1] [i_19] [i_0] [i_19] [i_0] [i_0]) : (arr_47 [i_19 + 1] [i_19] [i_19] [i_19] [i_19] [i_19])));
                var_67 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)47))));
            }
            for (unsigned char i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
            {
                var_68 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_19 - 1] [i_22] [i_22] [i_22])) : (((/* implicit */int) arr_39 [i_19 - 1])))))));
                arr_71 [i_0] [i_0] [i_19] [i_19] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (unsigned char)97))))));
                var_69 = ((/* implicit */unsigned char) max((var_69), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)41047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) : (15432970612745264181ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_22] [i_19] [i_19 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) % (2146959360U))) : (var_17)))))))));
            }
            var_70 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_19] [i_19]))) ^ (arr_15 [i_0] [i_0] [i_0] [i_0])))) ? (((var_8) & (2383244757923900884ULL))) : (((/* implicit */unsigned long long int) (~(var_15)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_56 [i_19] [i_19] [i_19] [i_19] [i_19])) >> (((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) + (19292))))) <= (var_15)))))));
        }
        var_71 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) <= (arr_62 [i_0] [i_0]))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((var_3) <= (((/* implicit */long long int) -1)))))))) ? (((((/* implicit */unsigned long long int) var_3)) - (6880900817173492346ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        arr_72 [i_0] = ((/* implicit */_Bool) (((+(arr_68 [i_0] [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)0)))))));
    }
}
