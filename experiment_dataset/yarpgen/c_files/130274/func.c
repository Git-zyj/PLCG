/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130274
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned short)3] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */int) -4853484821968276251LL);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            arr_16 [i_4] [i_1] = ((/* implicit */unsigned short) ((signed char) ((_Bool) var_0)));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = (-(arr_9 [i_1] [i_3 + 1] [i_3] [i_3 + 1]));
                        }
                        var_13 = ((int) (unsigned char)255);
                        /* LoopSeq 3 */
                        for (signed char i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29621))) + (3504063702615791750LL)))) ? (((/* implicit */unsigned long long int) var_7)) : (4233191674411922863ULL)));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_9))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 1530400467))) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) != (var_6))))));
                            arr_25 [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)54)) : (((var_7) & (((/* implicit */int) var_11))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_28 [i_0] [i_1] [4U] [i_1] [i_0] = ((/* implicit */short) (-(((unsigned long long int) var_2))));
                            arr_29 [2LL] [i_1] [i_1] [i_7] [2LL] [i_1] &= ((/* implicit */short) var_7);
                            arr_30 [i_0] [i_1] [i_2] [i_3] [(short)14] = ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_3 + 1] [i_3 - 1] [i_1]))) - (arr_9 [i_7] [i_3 + 1] [i_3 + 1] [i_3 + 1]));
                        }
                    }
                } 
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_10))))) : ((-(arr_19 [i_0] [12] [i_0] [i_0] [9LL] [i_0])))));
    }
    var_17 = max((((/* implicit */long long int) ((_Bool) var_7))), (3504063702615791750LL));
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)24595))))))))));
    /* LoopNest 3 */
    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            for (unsigned int i_10 = 2; i_10 < 20; i_10 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        var_19 -= ((/* implicit */unsigned short) ((unsigned long long int) arr_32 [i_10]));
                        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_9])) ? (arr_44 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) var_4)))) << (((((((/* implicit */_Bool) arr_44 [(_Bool)1] [i_8 - 2] [i_9] [i_8 - 2])) ? (((/* implicit */int) (unsigned short)37049)) : (((/* implicit */int) var_2)))) - (36992)))));
                        arr_45 [i_8] [i_8] [i_10 - 1] [i_11] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_8])) | (((/* implicit */int) arr_35 [i_8]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) arr_39 [i_8 + 1] [i_10] [i_8 + 1]);
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            arr_51 [i_8] [i_9] [i_10] [(unsigned char)8] [i_8] = var_11;
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)29632)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -106737955080904517LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7364))) : (6207720959367333083LL)))) : (((arr_36 [i_13]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_10] [i_12]))))))))));
                            var_23 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (unsigned short)35915)))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_24 ^= (+(((/* implicit */int) var_8)));
                            arr_55 [i_10] [i_8] [i_10] [i_9] [i_10] [i_12] [i_14] |= ((/* implicit */short) (-(9824120959076327935ULL)));
                            var_25 -= ((/* implicit */unsigned short) arr_34 [i_9]);
                        }
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) (-(((int) ((long long int) (unsigned short)65535)))));
                        var_27 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)37063))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)7823)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)1)))) : (((/* implicit */int) min(((unsigned short)29629), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)30011)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)3))))), (1011229022707245790LL))) : (((/* implicit */long long int) arr_39 [i_8] [4U] [i_15])))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) 3350686774U);
                        var_30 |= ((/* implicit */unsigned int) var_2);
                    }
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_18 = 1; i_18 < 19; i_18 += 4) 
                        {
                            arr_65 [i_8] [i_18] [i_18] [i_8] [i_8] [i_18] [i_9] = ((/* implicit */unsigned short) (~(min(((-(((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) ((_Bool) 703159593U)))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)1807)) ? (6090099831173665487ULL) : (((/* implicit */unsigned long long int) var_7)))))))))));
                            arr_66 [i_10] [i_10] [i_10] &= max((((long long int) ((unsigned char) var_4))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (4155251059U)))));
                        }
                        for (unsigned short i_19 = 3; i_19 < 20; i_19 += 1) 
                        {
                            var_32 = ((/* implicit */int) (-(max((7414137471085651637LL), (-3504063702615791751LL)))));
                            arr_69 [i_8] [i_8] [i_8] [i_10] [i_17] [i_19 - 3] [i_8] = ((/* implicit */signed char) ((var_9) / (((/* implicit */long long int) arr_39 [i_19 + 1] [i_17] [i_10]))));
                            arr_70 [i_17] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((-1958731674) + (2147483647))) << (((3775413750U) - (3775413750U)))));
                            arr_71 [i_10] |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-27409)) ? (((/* implicit */unsigned int) var_7)) : (arr_39 [i_19 + 1] [i_10 - 2] [i_8 - 3]))));
                            var_33 = ((/* implicit */unsigned short) min(((~(((unsigned int) 7148635075007152524LL)))), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)35919)) & (((/* implicit */int) (unsigned short)35906)))) & (((/* implicit */int) min((((/* implicit */short) (signed char)118)), ((short)7364)))))))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 21; i_20 += 1) 
                        {
                            var_34 = ((long long int) min((((/* implicit */unsigned int) arr_33 [i_10 - 2])), (arr_39 [i_8 - 1] [i_9] [i_17])));
                            arr_75 [i_8] [(short)1] [i_8] [i_8] [i_20] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((unsigned char) 22987925))))), ((-((-(((/* implicit */int) var_11))))))));
                        }
                        arr_76 [i_10] [i_8] [i_10] = ((/* implicit */int) min((-293064418011698499LL), (((/* implicit */long long int) (short)-22609))));
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) arr_52 [i_8] [i_9] [i_8] [i_10] [i_21] [i_21]);
                        /* LoopSeq 3 */
                        for (int i_22 = 0; i_22 < 21; i_22 += 1) /* same iter space */
                        {
                            arr_82 [i_8] [i_9] [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32741)) + (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_10 + 1] [i_21] [i_8 + 1] [i_8] [i_21] [i_8]))) : (((((/* implicit */_Bool) arr_44 [i_22] [i_10] [i_9] [i_8 + 1])) ? (arr_44 [i_8] [i_10] [i_21] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_83 [i_8] [i_9] [i_10 + 1] [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 10076155894842228504ULL)) ? (arr_80 [i_8] [i_9] [i_10] [i_21] [i_8] [i_22]) : (((/* implicit */long long int) var_0)))) : (((12LL) / (arr_42 [i_8] [i_9] [i_21] [i_22])))));
                            arr_84 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 3] = ((/* implicit */int) (~(arr_64 [i_8])));
                            arr_85 [i_8] [i_21] [i_10] [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 15719967244911417407ULL))))) | (((((/* implicit */int) (_Bool)1)) >> (((18446744073709551615ULL) - (18446744073709551597ULL)))))));
                        }
                        for (int i_23 = 0; i_23 < 21; i_23 += 1) /* same iter space */
                        {
                            var_36 = arr_46 [i_10] [i_23];
                            arr_90 [i_8] [i_8] [i_10 - 1] [i_21] [i_23] = ((/* implicit */unsigned short) arr_81 [i_8 - 3] [i_8 - 3]);
                            var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_8 - 3] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_42 [i_10 - 1] [i_10 - 2] [i_8 - 1] [i_8 - 3])));
                        }
                        for (unsigned int i_24 = 0; i_24 < 21; i_24 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1958731671)) ? (12960553359243254189ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32749)))));
                            arr_94 [i_10] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) arr_58 [i_24] [i_10 - 1] [i_8] [i_8]);
                            var_39 += ((/* implicit */_Bool) arr_36 [i_8]);
                        }
                    }
                }
            } 
        } 
    } 
}
