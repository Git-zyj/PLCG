/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161903
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (+(((/* implicit */int) (!((_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((min((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */int) arr_1 [i_2])))) > (((/* implicit */int) (unsigned char)209))));
                            arr_10 [i_3] [i_1 - 1] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (-(2419429026U)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (3296915023U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)2]))))))))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((1875538270U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)71)), (arr_6 [i_1 - 1] [i_1 - 1]))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1536))))) ? (((/* implicit */int) ((signed char) 3089044185U))) : (((1199672786) + (arr_6 [i_0] [11U])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */int) (signed char)89)) : (arr_4 [i_0 + 1] [i_1 - 1])))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)131)), (1993094453U)))) - (min((((/* implicit */unsigned long long int) (unsigned short)56750)), (13535724718413842324ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 7; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                arr_17 [i_5 - 1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_5 - 1] [i_4]))))), (((unsigned long long int) ((((/* implicit */int) (unsigned char)146)) + (arr_0 [i_4] [i_5]))))));
                /* LoopSeq 2 */
                for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8766)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)83)) > (-839164909)))) : ((~(((/* implicit */int) (unsigned short)35296))))));
                            var_16 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_9 [i_7] [i_5] [i_6] [i_7] [i_8])) | (((/* implicit */int) (_Bool)1)))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((arr_19 [i_4 + 3]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8 - 1] [i_8 + 1] [8] [i_5 - 1] [i_8] [i_5 - 1]))))))));
                            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)15160))));
                        }
                        for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) ((unsigned char) ((((arr_23 [i_5 - 1] [i_5] [(unsigned short)8] [(unsigned short)0] [i_6 - 2]) + (2147483647))) >> (((arr_23 [i_5 - 1] [i_5] [i_5] [i_5] [i_6 - 2]) + (1352573154))))));
                            arr_31 [i_4] [i_9] [0LL] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (short)-14160)))))) : ((-(arr_21 [i_4] [i_5] [i_4]))))) + (((/* implicit */unsigned long long int) ((long long int) (-(13535724718413842350ULL)))))));
                            arr_32 [i_4] [i_4 + 2] [i_4] [i_4] [i_9] [i_4 + 2] = ((/* implicit */short) -5369864330193820961LL);
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_6 - 2] [(_Bool)1] [i_6])) ? ((~(3833246604815862544LL))) : (((/* implicit */long long int) arr_0 [i_4 + 1] [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) ? (761530917U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5 - 1] [i_5 - 1] [i_6] [i_6 - 2])))))) : ((+(min((((/* implicit */unsigned long long int) arr_15 [i_5] [i_7] [i_5])), (14393929559137832889ULL))))))))));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_26 [i_6 - 1]))))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)11330)) << (((arr_29 [1] [i_7] [(signed char)4] [9U]) - (1013560904U))))))));
                            var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) arr_14 [2])) : (((/* implicit */int) (short)11781)))))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_39 [i_4] [3ULL] [i_6] [i_7] [i_11] [i_6] [i_7] = ((/* implicit */_Bool) ((int) min((((/* implicit */int) arr_36 [i_11] [i_5])), (arr_2 [i_5 - 1] [i_6]))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_15 [i_5 - 1] [(short)1] [i_5 - 1]), ((unsigned char)213)))))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_30 [i_11] [i_7] [i_11] [i_11] [i_11] [6]))));
                            arr_40 [i_4] [i_11] [i_6] [(_Bool)1] = ((/* implicit */signed char) min(((-(arr_21 [i_4] [i_7] [i_11]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_5 - 1] [i_6 - 1])) / (((/* implicit */int) (signed char)-85)))))));
                            arr_41 [i_4] [i_5] [i_6] [i_7] [i_11] = ((/* implicit */_Bool) (unsigned short)17157);
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 7; i_12 += 3) 
                        {
                            arr_44 [i_12] [i_7] [i_7] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_25 [i_4 + 1] [i_7] [i_6 - 1] [i_7] [i_6 - 1] [(unsigned char)4]))));
                            arr_45 [(unsigned short)7] [i_5 - 1] [(unsigned char)0] [5] [i_12] [(unsigned char)4] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_20 [i_12] [i_12 + 3]))))));
                            var_26 &= ((/* implicit */signed char) ((int) (+(arr_34 [i_5] [i_5 - 1] [i_12 + 3] [i_12 + 3]))));
                        }
                        arr_46 [6] [i_6 - 2] [i_5] [(unsigned char)5] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_16 [i_4 + 1])))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        var_27 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 13535724718413842324ULL))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-2)))) : (((/* implicit */int) (unsigned char)204))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [(unsigned short)4] [4]))) ^ (min((1430737816U), (((/* implicit */unsigned int) 290786396)))))));
                        var_28 = ((/* implicit */short) ((min((((/* implicit */int) arr_7 [i_4 - 2])), (290786396))) % ((-(((/* implicit */int) (signed char)-84))))));
                    }
                    for (unsigned int i_14 = 3; i_14 < 7; i_14 += 2) 
                    {
                        arr_52 [i_4] [i_6 - 2] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)82))))) <= (((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5] [i_4])) ? (arr_21 [i_5 - 1] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_29 [i_6 - 2] [i_5 - 1] [i_5] [i_4]))))));
                        var_29 -= ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)20191)) * (((/* implicit */int) (unsigned short)52095))))));
                        var_30 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) arr_37 [(signed char)4] [(unsigned short)6] [i_5 - 1])) != (1386547995289775968LL))));
                    }
                    arr_53 [i_4] = ((/* implicit */short) max(((~((-(1169739326))))), ((-(((/* implicit */int) arr_9 [(unsigned short)0] [i_4] [i_4] [i_4 + 3] [i_5 - 1]))))));
                    arr_54 [1] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108))))) << (((((/* implicit */_Bool) arr_16 [i_4 - 1])) ? (((/* implicit */int) (signed char)3)) : ((+(((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4 + 2] [i_4]))))))));
                }
                for (int i_15 = 1; i_15 < 9; i_15 += 4) 
                {
                    var_31 = ((/* implicit */short) max(((-(((unsigned int) arr_50 [i_15 - 1] [i_15 - 1] [i_5] [i_4] [i_4])))), (((/* implicit */unsigned int) (unsigned short)65258))));
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        for (int i_17 = 2; i_17 < 8; i_17 += 2) 
                        {
                            {
                                arr_62 [(unsigned char)6] [i_15] [i_15] [i_16] [i_17 + 2] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) max(((unsigned short)48626), (((/* implicit */unsigned short) arr_13 [i_4] [i_4]))))))), ((~(((/* implicit */int) (unsigned char)114))))));
                                arr_63 [i_4 + 2] [i_5 - 1] [i_15] [(unsigned short)6] [i_5 - 1] [i_17] = ((unsigned short) max((arr_56 [i_15 + 1] [i_15 + 1] [i_15 - 1]), (((/* implicit */int) arr_60 [i_4 - 2] [i_5] [i_15 + 1] [i_4 - 2] [i_4 - 2] [i_15]))));
                                arr_64 [i_16] [i_16] [i_16] [4] [i_16] [i_15] [i_16] = ((/* implicit */unsigned long long int) (-(((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10911))) == (7705348274709904532ULL))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) 5151825261211224684ULL);
                }
                var_33 &= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_25 [(signed char)4] [i_4] [i_4] [i_5] [i_5] [i_5])) ^ (((/* implicit */int) arr_30 [i_5] [(signed char)2] [i_5] [i_5 - 1] [i_5] [(signed char)2])))), (((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_5 - 1] [i_5 - 1] [i_4] [i_4 - 2] [i_4 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1376608478))))) : (((/* implicit */int) ((unsigned short) arr_23 [i_4] [i_5] [i_5] [i_5] [i_5])))))));
                arr_65 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (signed char)122))), (max(((unsigned short)1376), ((unsigned short)48625)))))) <= ((~(-1599113657)))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned int) var_0);
}
