/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159535
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0] [i_4])));
                            arr_15 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_15))))))) ? (min(((~(68719476735ULL))), (((/* implicit */unsigned long long int) var_13)))) : (((((/* implicit */unsigned long long int) 228408211U)) / (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                            var_20 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(1603154568U))))))), (var_7));
                        }
                        var_21 = ((/* implicit */short) 18446744004990074883ULL);
                    }
                    for (short i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] [i_1] |= ((var_19) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((4294967272U) << (((1266312085) - (1266312076)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)11))))) : (min((var_9), (((/* implicit */unsigned int) (_Bool)1)))))));
                        arr_19 [i_2] [i_1] [i_0] &= ((/* implicit */int) var_9);
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (short)(-32767 - 1));
                            arr_23 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)37754)) <= (-1266312095))))))), ((((((_Bool)0) ? (arr_2 [i_5]) : (2657609607U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_17)))))))));
                            arr_24 [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_1])) ? ((~(((/* implicit */int) var_16)))) : (1289723770))) == (max((((/* implicit */int) (!((_Bool)0)))), ((+(((/* implicit */int) var_12))))))));
                            arr_25 [i_1] [i_6] = ((var_18) || (((/* implicit */_Bool) var_8)));
                            arr_26 [i_0] [i_1] [i_0] [i_6 - 1] = ((/* implicit */unsigned int) -1289723771);
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */_Bool) (-(2118139842U)));
                            var_22 = ((/* implicit */unsigned int) (_Bool)1);
                            var_23 = ((/* implicit */unsigned short) (+(var_6)));
                            var_24 = ((/* implicit */unsigned char) ((7764132728358491160LL) | (((/* implicit */long long int) (~(arr_3 [i_0] [i_0] [i_0]))))));
                            arr_32 [i_0] [i_2] [i_2] [i_5] [i_0] [i_7] = ((440320750U) > (min(((~(var_9))), (min((2458994989U), (((/* implicit */unsigned int) var_17)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_36 [i_8] [i_8] = 1835972306U;
                            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 3] [i_5 + 2] [i_5 + 1])) ? (((/* implicit */int) var_18)) : (arr_12 [i_5 + 2] [i_5 + 2] [i_5 - 1])));
                            arr_37 [i_0] [i_1] [i_0] [i_5 + 2] [i_8] = ((/* implicit */short) (unsigned char)27);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) 1498103564U))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_45 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */int) 2458994989U);
                            var_27 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 7241568664280991509LL)) ? (arr_11 [i_0] [i_0] [i_2] [i_9] [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))))) ^ (((/* implicit */unsigned long long int) arr_10 [i_0])))), (((/* implicit */unsigned long long int) var_18))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 3) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 68719476750ULL);
                            var_28 += ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_9] [i_0] [i_0])))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_29 = ((((/* implicit */int) var_16)) < (((/* implicit */int) ((620552201U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_17))));
                            arr_51 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) / ((~(arr_10 [i_2])))));
                            arr_52 [i_12] [i_12] [i_2] [i_9] [i_12] = ((/* implicit */unsigned int) ((-6131520788137085316LL) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                        }
                        for (long long int i_13 = 4; i_13 < 12; i_13 += 4) 
                        {
                            arr_55 [i_0] [i_0] [i_1] [i_1] [i_2] [i_9] [i_13] = ((/* implicit */int) arr_29 [i_0] [i_1] [i_2] [i_9] [i_13] [i_13]);
                            var_31 = ((/* implicit */int) min((((/* implicit */long long int) max((arr_43 [i_0] [i_1] [i_2] [i_1] [i_13] [(unsigned short)4]), (((/* implicit */unsigned int) (short)25281))))), (((((/* implicit */long long int) -1289723768)) - ((((_Bool)1) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 1266312085))))))));
                        }
                        for (short i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((min((((/* implicit */int) (_Bool)1)), (1489620876))), (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (_Bool)1)))))))));
                            arr_59 [i_0] [i_14] [i_0] [i_0] [5U] = ((/* implicit */int) var_12);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            arr_62 [i_0] = ((/* implicit */unsigned char) max((((arr_29 [i_0] [i_9] [i_2] [i_9] [i_15] [i_9]) * (arr_29 [i_0] [i_1] [i_2] [i_9] [2LL] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_16))))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((var_3) >= (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))) ? (633363492884596570ULL) : (((/* implicit */unsigned long long int) 17146314752LL)))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_34 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_1])) ? (arr_35 [i_16] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_54 [i_16] [i_9] [i_2] [i_0])))) ? (((((/* implicit */_Bool) (+(var_13)))) ? (496U) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 237876885)))))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-105))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (475U)))))));
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((475U), (var_3)))) ? (max((((/* implicit */int) ((arr_10 [i_0]) <= (((/* implicit */unsigned int) 1414420699))))), (1792057710))) : (((/* implicit */int) arr_34 [i_9] [i_2] [i_2] [i_2] [i_16])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))), (3651152591U)))) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1370897279)) >= ((~(var_6)))))))));
                            var_38 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_42 [i_17] [i_9] [i_2] [i_1] [i_0]))))), (var_8)));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                    {
                        arr_72 [i_0] [i_0] [(_Bool)1] [i_2] [i_18] |= (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-25818))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_19 = 4; i_19 < 15; i_19 += 4) 
                        {
                            arr_75 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) 3697736319U);
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_19 + 1] [i_1] [i_2] [i_18] [i_19] [i_18] [i_18]))) / (1835972306U)));
                        }
                        arr_76 [i_1] [i_2] [i_18] |= var_12;
                        var_40 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) var_11)) : (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31259))) : (arr_35 [i_1] [i_18])))));
                        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) 2331094762U)) ? (((((/* implicit */_Bool) var_9)) ? (arr_57 [i_0] [i_0] [i_2] [i_1] [i_2] [i_0] [i_18]) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_40 [i_0] [i_1] [i_0] [i_2] [i_18])))))));
                    }
                    var_42 ^= ((/* implicit */_Bool) 497U);
                    var_43 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (!(var_19)))))) << (((4134591290U) - (4134591283U)))));
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_44 = ((/* implicit */short) var_12);
                        var_45 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) arr_34 [i_1] [i_2] [i_2] [i_1] [i_1])) != (((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) min(((unsigned char)80), (((/* implicit */unsigned char) var_5))))))) <= (min((var_14), (max((((/* implicit */int) (_Bool)1)), (arr_12 [i_0] [i_1] [i_20])))))));
                        var_46 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        var_47 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294966822U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (3089753388U)))))) ? (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) (short)-25835))))) : (((var_7) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_19)))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_22 = 0; i_22 < 16; i_22 += 3) 
                        {
                            arr_85 [i_0] [i_1] [i_2] [i_2] [i_21] [i_22] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) -76751898)) - (((((/* implicit */unsigned long long int) -943094439)) + (17480406150742420167ULL))))) + (((/* implicit */unsigned long long int) (+(4294966821U))))));
                            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (+(1716741154726013241LL))))));
                        }
                        /* vectorizable */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            arr_89 [(_Bool)1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_9))))));
                            var_49 -= ((/* implicit */_Bool) (-(var_14)));
                        }
                        arr_90 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-15);
                        arr_91 [i_0] [i_1] [i_2] [i_21] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((min((-1716741154726013256LL), (((/* implicit */long long int) 2402651566U)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_1] [i_1] [i_0])))))), ((~(((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                    }
                    for (unsigned int i_24 = 0; i_24 < 16; i_24 += 4) 
                    {
                        arr_94 [i_2] = ((/* implicit */unsigned short) max((var_13), (((/* implicit */long long int) max(((-(4294967288U))), (max((arr_77 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_1)))))))));
                        var_50 = ((/* implicit */_Bool) max((var_50), (var_10)));
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) (((_Bool)1) ? (min((((966337922967131449ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_24] [i_0] [(unsigned char)8] [4U] [i_1] [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_21 [i_24] [i_2] [i_2] [i_2] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) var_8)))))));
                        arr_95 [i_0] [i_2] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2142313923U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_24] [i_2])) != (((-1610360280) | (((/* implicit */int) (unsigned char)117)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_25 = 2; i_25 < 13; i_25 += 1) 
                    {
                        arr_98 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (-(4294967278U)));
                        var_52 = ((/* implicit */unsigned int) ((arr_29 [i_0] [i_1] [i_25 + 1] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) 2152653395U))));
                    }
                }
            } 
        } 
    } 
    var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_19))))))) ? ((((!(((/* implicit */_Bool) (signed char)-13)))) ? (((((/* implicit */_Bool) -936197418)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) 2152653373U)) ? (((var_10) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
}
