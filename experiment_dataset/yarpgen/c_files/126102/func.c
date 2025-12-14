/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126102
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (short)-10431))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-16)) + (((/* implicit */int) var_4))))) : (((-1848426505821354063LL) - (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) : (min((min((var_10), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 8767303551438485739LL)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_5))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_22 = ((/* implicit */int) max((max((((/* implicit */unsigned int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), ((-(var_6))))), (((/* implicit */unsigned int) (signed char)1))));
                arr_8 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) 13192140145614343809ULL);
            }
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)202)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [(unsigned short)8] [2])) ? (((/* implicit */int) (unsigned short)0)) : (var_0)))))))));
                arr_13 [0] &= ((/* implicit */long long int) (signed char)108);
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */unsigned int) ((int) arr_5 [i_4] [i_0]));
            arr_18 [i_0] [(signed char)6] &= ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_9 [12ULL] [i_0 - 1] [i_0 + 1] [i_0 + 2])) / (1065710060))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((var_9), ((~(((/* implicit */int) (signed char)13))))));
            arr_20 [i_0] [i_4] = ((/* implicit */_Bool) 2090953313643786588LL);
            arr_21 [i_0] [i_0] [i_0] = (+(((((/* implicit */int) (unsigned char)0)) + (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (signed char)-83)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_26 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)22466))));
            var_24 = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_0] [i_0 + 2])))), (((((/* implicit */_Bool) arr_25 [i_0 + 1] [4] [i_0 + 1])) ? (arr_10 [(unsigned char)6]) : (((/* implicit */long long int) var_0)))))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((short) arr_14 [i_0 + 2]))) % (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0 + 1])) == (((/* implicit */int) arr_14 [i_0 - 1]))))))))));
        }
        arr_27 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_0] [i_0])) - (((/* implicit */int) var_12))))) + (min((var_6), (((/* implicit */unsigned int) arr_23 [i_0] [i_0 - 1])))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                arr_35 [i_0] [i_7 + 1] [(signed char)10] [i_6] = (((+(((/* implicit */int) arr_1 [i_6] [i_7])))) ^ (((((((/* implicit */int) arr_25 [i_7] [i_0] [i_0])) | (((/* implicit */int) arr_2 [i_6])))) % (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_6] [i_7 + 1])))));
                arr_36 [i_0] [i_0] = ((((/* implicit */_Bool) arr_24 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_32 [(short)12] [(short)12] [i_0 + 2])) : (max((((/* implicit */unsigned long long int) var_18)), (var_10))));
                arr_37 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) || (var_12)))) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [12LL])))))));
            }
            for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 4) 
            {
                arr_40 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_31 [i_0] [i_0] [i_8 - 2]))));
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1LL)))) ? (((((((/* implicit */_Bool) var_5)) ? (arr_24 [i_6]) : (((/* implicit */unsigned long long int) arr_12 [14] [i_6] [i_0] [14])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_0] [i_0]), (((/* implicit */short) var_4))))) || (((/* implicit */_Bool) (-(-7488170270006666108LL))))))))));
                var_27 = ((/* implicit */_Bool) (unsigned char)0);
            }
            arr_41 [i_0] [(_Bool)0] [10LL] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 5254603928095207804ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-44))))))))));
        }
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)1667), ((short)-18764)))) / (var_5))))));
    }
    var_29 = ((/* implicit */unsigned char) (~(1239107997)));
    /* LoopNest 3 */
    for (unsigned char i_9 = 3; i_9 < 22; i_9 += 4) 
    {
        for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            for (signed char i_11 = 2; i_11 < 22; i_11 += 1) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)63))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) arr_48 [i_9] [i_10] [i_11] [i_10])) : (((/* implicit */int) arr_51 [(signed char)9] [(signed char)9] [19ULL] [(unsigned short)8] [i_11 + 2]))))) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (arr_46 [i_9]))))))));
                        var_32 = ((/* implicit */long long int) arr_48 [i_12] [i_9] [i_9] [i_9]);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        arr_56 [4ULL] &= ((/* implicit */signed char) arr_51 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1]);
                        arr_57 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_11])) >> (((((/* implicit */int) arr_51 [i_9] [i_9 + 1] [i_9] [i_9 + 2] [i_9 + 2])) - (69)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_13])) ? (1065710060) : (((/* implicit */int) arr_42 [i_9 - 1]))))) : (min((((/* implicit */long long int) arr_42 [i_9])), (arr_49 [i_9] [i_9] [i_11] [(_Bool)1]))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_9] [i_9] [i_10 - 1] [i_10 - 1] [10U])) && (((/* implicit */_Bool) var_15))))))));
                        var_33 = ((/* implicit */unsigned long long int) arr_55 [i_9] [(signed char)8] [i_13]);
                        var_34 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_43 [i_11 - 2])))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) var_14);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            arr_63 [i_9] [i_10] [i_10] [i_14] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_10] [i_9] [i_11] [i_14] [(unsigned short)12])) || (((/* implicit */_Bool) arr_54 [i_10] [i_10] [9] [i_15] [18ULL]))))) == (((/* implicit */int) ((signed char) (~(arr_59 [19ULL] [19ULL] [i_10 + 2] [(signed char)6] [i_14] [i_15])))))));
                            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) 4240777865U)) ? ((~(((((-1893036090) + (2147483647))) << (((((((/* implicit */int) (signed char)-46)) + (74))) - (28))))))) : (((/* implicit */int) max((arr_44 [i_9 - 1]), (((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_11])) != (((/* implicit */int) var_2))))))))))));
                            var_37 &= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_10 + 2])) && (((/* implicit */_Bool) var_13)))))));
                            arr_64 [i_9] [i_10] [(unsigned short)20] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_55 [(unsigned short)5] [i_11] [i_10])) ? (((/* implicit */int) arr_44 [i_9])) : (var_5))))), (((((/* implicit */_Bool) min((arr_45 [i_10] [i_10] [i_10]), (((/* implicit */short) var_4))))) ? (((/* implicit */int) arr_42 [i_10 + 1])) : (((/* implicit */int) arr_53 [i_9 + 1]))))));
                        }
                        for (unsigned long long int i_16 = 2; i_16 < 23; i_16 += 3) 
                        {
                            arr_67 [i_10] [i_10] [i_11] [i_14] [i_16] = (i_10 % 2 == zero) ? (((/* implicit */long long int) ((((unsigned int) arr_46 [i_16 + 1])) >> (((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (3091494284U)))), (((arr_54 [i_10] [i_10] [i_11] [i_11] [i_16 - 2]) >> (((67108863ULL) - (67108822ULL))))))) - (3646826LL)))))) : (((/* implicit */long long int) ((((unsigned int) arr_46 [i_16 + 1])) >> (((((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (3091494284U)))), (((arr_54 [i_10] [i_10] [i_11] [i_11] [i_16 - 2]) >> (((67108863ULL) - (67108822ULL))))))) - (3646826LL))) + (2454007LL))))));
                            var_38 = ((/* implicit */unsigned int) (-(((((((/* implicit */long long int) ((/* implicit */int) var_13))) | (3043183935303872625LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (var_1)))))))));
                            var_39 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_50 [i_11]) != (arr_50 [i_16 - 2]))))) != ((-(10887599602613328770ULL))))))));
                        }
                    }
                    var_40 = ((/* implicit */unsigned char) arr_49 [i_9] [i_9] [i_9] [i_9 + 1]);
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_18 = 1; i_18 < 22; i_18 += 3) 
                        {
                            arr_75 [i_10] = ((/* implicit */unsigned char) (signed char)10);
                            var_41 ^= ((/* implicit */int) min((max((arr_69 [i_9 - 1] [i_11 - 2] [i_18 + 2] [(unsigned char)16]), (arr_69 [i_9 - 1] [i_11 + 2] [i_18 + 1] [(unsigned char)0]))), ((-(arr_69 [i_10 + 1] [16] [i_10 + 1] [(short)12])))));
                            var_42 = ((/* implicit */unsigned int) var_16);
                            arr_76 [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_65 [i_10 + 1] [i_11 + 2] [i_9 + 2] [i_10 + 1])))));
                            arr_77 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_58 [i_10] [i_9 - 3] [(unsigned char)18] [9ULL])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_74 [1] [i_9 - 1] [i_10] [i_9])) * (((/* implicit */int) arr_74 [i_9] [i_9 - 3] [i_10] [i_9 - 3]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_9] [i_9 + 1] [i_10] [17LL]))) / (arr_58 [i_10] [i_9 - 2] [i_10] [i_10])))));
                        }
                        for (int i_19 = 3; i_19 < 21; i_19 += 2) 
                        {
                            var_43 -= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_80 [i_19] [i_19] [i_19 - 3] [i_11] [i_11])) - (((/* implicit */int) arr_80 [i_19] [i_19] [i_19 - 3] [i_19] [i_11])))), (min((var_17), (((/* implicit */int) var_2))))));
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)16)), (1268772028U)))) ? (((/* implicit */int) max((arr_47 [i_9] [i_9 - 3] [i_9 + 2]), (arr_47 [4LL] [i_9] [i_9 + 1])))) : (((/* implicit */int) arr_47 [i_9] [i_9] [i_9 - 2]))));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            arr_84 [i_9] [i_10] [17U] [i_17] [17U] = ((/* implicit */int) (~((~(((long long int) -18))))));
                            var_45 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) arr_74 [i_11] [0] [i_10] [i_11 + 1])), (arr_60 [(unsigned short)0] [(unsigned short)0] [i_11] [i_17] [i_9 - 3])))));
                            arr_85 [i_9] [i_9 - 3] [i_10] [i_9 - 3] [i_10] [(short)1] = min(((unsigned char)62), (((/* implicit */unsigned char) (signed char)-67)));
                        }
                        arr_86 [i_10] [i_10] [i_10 + 1] [i_10] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (_Bool)1)))));
                        var_46 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((-18), (((/* implicit */int) (_Bool)1))))) <= (((unsigned int) arr_72 [(short)10] [i_11 + 2] [(signed char)12] [(signed char)12] [i_10 - 1] [i_9 + 1]))));
                        arr_87 [i_10] = ((/* implicit */int) (~(arr_50 [i_11])));
                        arr_88 [i_10] [i_10] [i_11] [(short)15] = ((/* implicit */long long int) (+((((-(((/* implicit */int) arr_47 [i_17] [(short)12] [(short)12])))) % (((/* implicit */int) var_18))))));
                    }
                }
            } 
        } 
    } 
}
