/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104597
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
    var_10 = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (9223372036854775807LL))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 3] [i_0 + 2])))) ? (arr_0 [i_0 + 3] [i_0 + 1]) : (max((9223372036854775807LL), (arr_0 [i_0 + 3] [i_0 + 3])))));
        var_12 += ((/* implicit */long long int) var_7);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0 - 1] [i_0] [i_0] = ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) ((max((((/* implicit */int) var_6)), ((-2147483647 - 1)))) != (((((/* implicit */int) var_5)) / (1750474500)))))));
                    var_13 -= ((/* implicit */int) ((unsigned short) var_4));
                }
            } 
        } 
        arr_8 [(short)10] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)8] [(unsigned short)9]))) | (((arr_5 [(unsigned short)2] [i_0] [(unsigned short)2]) ^ (((/* implicit */long long int) var_3))))))) ? ((+(max((9223372036854775807LL), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) var_9))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_3))));
    }
    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) (short)32767))), (((int) min((arr_1 [i_3 + 2]), (((/* implicit */unsigned short) (short)32767))))))))));
        var_16 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((unsigned char) (unsigned char)255))), (((((/* implicit */_Bool) arr_13 [i_4])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_9)))))), (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) & (15174665441689469LL))), (((/* implicit */long long int) ((arr_13 [14LL]) >= (((/* implicit */int) var_6)))))))));
        arr_16 [(unsigned char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)18433))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)511)) / (((/* implicit */int) var_6))))) : (min((((/* implicit */long long int) var_0)), (9223372036854775807LL)))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) -1388903091)) : (1197136171U)))) ? (min((((/* implicit */long long int) min((arr_14 [i_4]), (arr_14 [i_4])))), (min((((/* implicit */long long int) 1110847957U)), (9223372036854775807LL))))) : (((/* implicit */long long int) max((((/* implicit */int) (short)32484)), (((var_8) ? (((/* implicit */int) arr_14 [18U])) : (((/* implicit */int) var_6)))))))));
        arr_18 [(_Bool)1] = ((/* implicit */int) (unsigned short)22584);
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_17 &= min((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) -2028851363)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7289))) : (4294967295U))))), ((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) min((1284270322), (((/* implicit */int) (unsigned short)65535))))))));
            var_18 ^= ((/* implicit */unsigned char) (unsigned short)65535);
            var_19 = ((/* implicit */int) ((short) (unsigned char)255));
            var_20 = ((/* implicit */short) (((~(((int) 3097831125U)))) ^ (((/* implicit */int) ((arr_23 [i_5]) != (1690989543))))));
            arr_26 [0] [i_5] &= (unsigned short)42951;
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                var_21 = (+(((((/* implicit */_Bool) 2077447732)) ? (((((/* implicit */_Bool) arr_19 [i_5] [i_7])) ? (arr_31 [i_5] [i_5] [i_5] [3U]) : (var_9))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) var_8)))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (_Bool)1))));
                var_23 += ((/* implicit */long long int) ((min((1197136171U), (((/* implicit */unsigned int) 2047795701)))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
            }
            var_24 = ((/* implicit */unsigned char) var_0);
            var_25 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (var_1) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_1)))))));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) 1197136171U))));
        }
        for (int i_9 = 3; i_9 < 24; i_9 += 4) 
        {
            arr_34 [(unsigned char)16] [i_5] [i_9] &= ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2)))) == (((((/* implicit */int) var_6)) | (1690989543)))));
            var_27 ^= ((/* implicit */unsigned char) var_2);
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    {
                        arr_41 [i_9] [24] [i_10] = ((/* implicit */int) (_Bool)1);
                        var_28 = ((/* implicit */int) min((var_28), ((+(386593358)))));
                        var_29 = 17592186044415LL;
                    }
                } 
            } 
            var_30 = ((/* implicit */int) min((var_30), (min(((~(((/* implicit */int) (unsigned short)42829)))), ((+(((/* implicit */int) var_2))))))));
            arr_42 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) 832754397))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((arr_14 [i_5]) && (((/* implicit */_Bool) (short)(-32767 - 1)))))), (var_7))))) : (((min((((/* implicit */unsigned int) var_2)), (3474372393U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (short)4749)))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_12 = 3; i_12 < 24; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_13 = 1; i_13 < 24; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            arr_53 [i_5] [i_5] [i_5] [i_5] [i_12] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [i_12] [i_12]))))));
                            arr_54 [i_5] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)8437)) : ((-2147483647 - 1))));
                        }
                    } 
                } 
            } 
            var_31 = arr_49 [i_12] [i_12 - 1] [i_12] [i_12] [i_12];
            var_32 = ((/* implicit */_Bool) ((((17592186044415LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12970))))) ? (((/* implicit */int) (unsigned short)42829)) : (((/* implicit */int) var_6))));
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            var_33 -= ((/* implicit */short) (unsigned char)32);
            arr_57 [i_5] [i_16] [i_16] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_37 [i_5] [i_5] [i_5] [i_16] [i_5] [(unsigned short)17])))) ? (3097831125U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) < (var_1))))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) (unsigned short)0)), (arr_37 [i_5] [i_5] [i_16] [22LL] [i_16] [i_16])))))));
            arr_58 [i_16] = ((/* implicit */long long int) -518272152);
        }
        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            arr_61 [i_5] [i_17] |= ((/* implicit */unsigned int) min((arr_14 [i_5]), (((((((/* implicit */_Bool) arr_46 [i_5] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65535)))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1)))))))));
            arr_62 [i_5] [i_5] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)52566)) < (((/* implicit */int) var_2)))))));
            /* LoopSeq 2 */
            for (int i_18 = 1; i_18 < 21; i_18 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        var_34 = ((/* implicit */int) min((var_34), (max(((~(-1))), (((/* implicit */int) max((arr_33 [i_17]), (((/* implicit */short) var_4)))))))));
                        arr_72 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((((_Bool)1) ? (-744778499609751894LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_18 + 3] [i_18 + 3])) ? (var_9) : (((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))))));
                        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)42829))));
                    }
                    var_36 = ((/* implicit */unsigned short) 8191U);
                }
                for (unsigned int i_21 = 2; i_21 < 24; i_21 += 4) 
                {
                    arr_75 [i_5] [4U] [i_18] [(short)21] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)12970))))) : ((~(3097831124U))))));
                    var_37 = ((/* implicit */int) (unsigned short)52566);
                    var_38 = ((/* implicit */_Bool) var_7);
                }
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    for (long long int i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        {
                            var_39 *= ((/* implicit */short) ((unsigned int) var_2));
                            arr_81 [(unsigned short)2] [i_17] [i_18] [i_22] [i_22] [(unsigned char)2] [i_23] = ((/* implicit */unsigned int) min((((-1) / (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) (unsigned short)22706)) ? (arr_71 [i_18 + 2] [i_17] [i_22] [i_22] [i_23] [i_23]) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
            }
            for (int i_24 = 1; i_24 < 21; i_24 += 2) /* same iter space */
            {
                arr_86 [i_5] [i_24] [10U] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_37 [i_5] [i_17] [i_24 + 3] [i_17] [(unsigned short)8] [i_5])) : (((/* implicit */int) (unsigned short)42830))))));
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_77 [i_5] [i_24 - 1] [i_24] [i_17])))) != (min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (7)))), (min((var_9), (((/* implicit */int) (short)2014)))))))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 25; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (unsigned char i_27 = 1; i_27 < 24; i_27 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */int) arr_74 [i_5] [i_5] [17]);
                            arr_96 [i_26] [16] [i_25] [i_25] = ((/* implicit */_Bool) (+(((((((/* implicit */int) arr_89 [i_5] [i_17] [i_25] [i_17])) == (-2071454162))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_8))))));
                            var_42 = ((/* implicit */unsigned char) 2147483647);
                        }
                    } 
                } 
                arr_97 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(((/* implicit */int) var_6)))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_8))))))) < (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)42829)))) % (((/* implicit */int) min((arr_25 [i_17]), (((/* implicit */unsigned short) var_4)))))))));
            }
        }
        arr_98 [i_5] [i_5] = ((/* implicit */long long int) (unsigned short)41478);
    }
    var_43 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 21; i_28 += 1) 
    {
        for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
        {
            {
                var_44 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12970)) % (((/* implicit */int) var_5))))) ? ((~(arr_55 [i_29 + 1] [i_29] [i_29 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((-2462504681142145475LL) != (((/* implicit */long long int) var_3)))))));
                arr_104 [i_29] [i_29 + 1] = ((/* implicit */short) ((((/* implicit */int) (short)17813)) / ((-2147483647 - 1))));
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (int i_31 = 0; i_31 < 21; i_31 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_36 [i_30] [i_29 + 1] [9LL]) : (arr_36 [i_28] [i_29 + 1] [i_30])))) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65529)), (2147483647))))));
                            arr_110 [i_28] [i_29] [i_30] [i_31] = ((/* implicit */int) 2462504681142145474LL);
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))) != (max(((+(((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_47 *= (+(min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)203))))), (-2462504681142145475LL))));
                arr_111 [i_29] = ((/* implicit */int) var_0);
            }
        } 
    } 
}
