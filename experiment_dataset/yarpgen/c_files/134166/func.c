/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134166
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
    var_10 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) 3234764270U);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = arr_12 [i_0 + 1] [i_0 - 1];
                                var_12 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)7)) > (((/* implicit */int) (unsigned char)242))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = ((/* implicit */short) max(((unsigned char)168), ((unsigned char)168)));
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
                }
            } 
        } 
    } 
    var_13 = var_6;
    var_14 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9))))) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6])) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)36640)))) : (((/* implicit */int) arr_17 [i_5] [i_5]))));
            /* LoopSeq 4 */
            for (unsigned char i_7 = 3; i_7 < 14; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_25 [(short)2] [i_8] [i_7] [i_6] [i_5] [(short)2] |= ((/* implicit */int) ((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */unsigned long long int) arr_19 [(unsigned char)2] [i_7 - 2] [i_7 + 1])) : (12844109143961847807ULL)));
                    arr_26 [i_5] = ((/* implicit */long long int) (short)-32764);
                }
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((unsigned long long int) (short)-4841));
                        arr_32 [i_10] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned char) arr_20 [i_5] [i_6] [i_7 + 1]);
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_21 [i_7] [i_7] [i_7 - 1] [i_7 - 3]))));
                        arr_33 [i_5] [i_6] [i_7 - 1] [i_9] = (short)32766;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_7] [i_7] [i_5] [i_7] [i_7] [i_7] [3LL] = arr_22 [14ULL];
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1910890277)) ? (((/* implicit */int) (short)4820)) : (((/* implicit */int) (short)23)))) + (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)96)))))))));
                        arr_39 [i_11] [i_11] [i_5] [i_9] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_6] [i_5] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((int) arr_31 [i_5] [i_6] [i_7] [i_5] [i_6] [i_5] [i_11]))) : ((+(-8964241692803806019LL)))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_5] [i_6] [15LL] [i_9] [i_5] = ((/* implicit */int) (unsigned short)12288);
                        arr_45 [i_7] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_7 - 2] [i_5] [i_7 - 2] [i_5] [i_7])) ? ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-4843)))) : (((/* implicit */int) ((unsigned char) (unsigned short)53248)))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_19 += ((/* implicit */unsigned char) ((_Bool) arr_40 [i_7 + 2] [i_7 - 2] [8] [i_7] [i_7] [i_7] [i_7 - 3]));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_41 [i_7 - 1] [i_7] [i_7 + 2] [(short)14] [i_7 - 2]) << (((((/* implicit */int) arr_35 [i_5] [i_7 + 1] [i_7] [i_9] [i_13] [i_7])) - (139))))))));
                        var_21 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13] [i_9] [i_7 + 1] [i_6] [i_5]))) : (arr_21 [i_5] [12LL] [i_7] [i_9]))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)24309)) + (((/* implicit */int) arr_36 [i_5] [(unsigned short)14] [i_5] [i_5] [2ULL])))) < (((/* implicit */int) var_4)))))));
                        arr_48 [i_13] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)12274)) >> (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 14; i_14 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned int) arr_34 [i_5] [(unsigned char)12] [i_14 + 1] [i_9] [i_5] [i_14 + 1])))));
                        var_24 = ((/* implicit */unsigned char) (short)8);
                        arr_53 [i_5] [i_5] [i_6] [i_7] [i_5] [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-32764)) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned long long int) ((long long int) var_3)))));
                        arr_54 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) (-(20ULL)));
                    }
                    var_25 = ((/* implicit */unsigned int) var_2);
                }
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_50 [(_Bool)1]))));
            }
            for (int i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
            {
                var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) 1182908660)) ? (((/* implicit */int) (unsigned char)147)) : (536870912)));
                var_28 = ((/* implicit */unsigned long long int) ((long long int) arr_17 [i_5] [i_6]));
            }
            for (int i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
            {
                var_29 -= ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [4] [i_17] [i_17] [i_17] [i_16] [i_6] [4]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) 693063791178247106LL))))))))));
                            var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)3))));
                            arr_65 [i_5] [i_5] [i_16] [i_17] [i_18] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_5] [i_6] [i_16] [i_17] [i_5]))) | (((arr_41 [i_5] [i_6] [i_16] [i_5] [i_18]) | (var_5)))));
                        }
                    } 
                } 
                arr_66 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4024027447U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) arr_57 [i_5] [i_6] [i_6])) * (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (unsigned char)252))))));
            }
            for (unsigned short i_19 = 4; i_19 < 15; i_19 += 3) 
            {
                arr_70 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((unsigned long long int) (~(2U))));
                /* LoopSeq 1 */
                for (unsigned char i_20 = 1; i_20 < 14; i_20 += 3) 
                {
                    arr_74 [i_5] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-32732)) : (((/* implicit */int) (unsigned char)232))));
                    var_32 = ((/* implicit */unsigned char) arr_19 [i_5] [i_5] [i_20]);
                }
                var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_19 - 2] [i_19 - 1] [i_19] [i_19 - 4])) ? (-1182908661) : (1182908660)));
                arr_75 [i_5] [i_5] [0] |= ((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_6] [i_19 + 1])) ? (arr_21 [i_19] [i_19] [i_19] [i_19 - 3]) : (arr_21 [i_19] [i_19] [i_19] [i_19 - 3]));
                /* LoopSeq 3 */
                for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (12) : (((/* implicit */int) (short)32068))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_5] [(unsigned char)8] [i_6] [i_5] [i_21])))))) : (arr_24 [i_5] [i_19 - 4] [i_19] [i_19])));
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [4LL] [i_5] [i_5])) ? (((/* implicit */long long int) arr_28 [i_5] [i_5] [i_6] [14U] [i_19] [i_21])) : (693063791178247106LL))))));
                    var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_76 [i_19 - 3] [i_19 - 1] [i_19 - 2] [i_19 - 3] [i_19]))));
                }
                for (unsigned char i_22 = 4; i_22 < 15; i_22 += 3) 
                {
                    var_37 = ((((/* implicit */_Bool) (short)29)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)508)) : (((/* implicit */int) (unsigned char)162))))) : (arr_55 [i_22 + 1] [i_22] [i_22 - 3] [i_22 - 2]));
                    var_38 -= ((/* implicit */unsigned char) ((12844109143961847807ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_5] [i_5] [i_19 + 1] [i_19 - 1] [i_19] [i_22])) / (((/* implicit */int) arr_16 [2])))))));
                    arr_81 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755))) : (18446744073709551584ULL)));
                }
                for (unsigned long long int i_23 = 1; i_23 < 12; i_23 += 3) 
                {
                    var_39 -= ((/* implicit */int) ((unsigned char) (unsigned char)0));
                    arr_84 [i_6] [i_6] [i_5] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_62 [i_5] [i_5]))) ? (((((/* implicit */_Bool) arr_56 [(unsigned char)1] [i_6] [i_19])) ? (((/* implicit */int) (short)10)) : (((/* implicit */int) arr_76 [i_5] [i_5] [i_6] [i_6] [i_23])))) : (((/* implicit */int) ((arr_20 [(unsigned char)4] [i_19] [i_23]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
                    arr_85 [i_5] [2] [i_5] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_6] [i_19] [i_23]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_19 - 2] [8ULL] [i_23 - 1] [i_23 - 1] [i_23]))) : (((unsigned int) (short)-32753))));
                }
            }
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 16006119490409834317ULL)) ? (((/* implicit */int) ((unsigned char) (unsigned char)113))) : (((/* implicit */int) (unsigned char)210)))))));
            arr_86 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_30 [i_5] [i_5] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184)))))) ? (((((/* implicit */_Bool) (short)30410)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5] [(short)14] [i_6] [i_5] [(unsigned char)5] [i_5]))) : (arr_29 [i_6] [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)32767)))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_24 = 4; i_24 < 14; i_24 += 3) 
        {
            var_41 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)23677))));
            arr_90 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) -1950955834)) ? (((/* implicit */int) ((unsigned char) arr_17 [i_5] [i_24]))) : (((/* implicit */int) arr_88 [i_5] [i_24] [i_5]))));
        }
    }
    for (int i_25 = 2; i_25 < 21; i_25 += 3) 
    {
        /* LoopNest 2 */
        for (short i_26 = 0; i_26 < 22; i_26 += 3) 
        {
            for (unsigned char i_27 = 0; i_27 < 22; i_27 += 3) 
            {
                {
                    arr_101 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_97 [i_25 + 1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min(((short)23681), (((/* implicit */short) (unsigned char)12))))) : (((/* implicit */int) (short)32764)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (short)31833)))))))));
                    var_42 = ((/* implicit */long long int) min((var_42), (((((/* implicit */_Bool) arr_91 [i_25] [(unsigned short)19])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-2))) | (max((((/* implicit */long long int) arr_92 [i_25])), (arr_91 [i_25] [i_25]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_100 [i_25] [i_26] [i_27] [i_26]))))) ? ((+(-8796657473070575502LL))) : (((/* implicit */long long int) ((-1784748651) / (((/* implicit */int) (unsigned char)246)))))))))));
                    arr_102 [i_27] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_92 [i_26]), ((short)2929))))))) ? (((/* implicit */int) ((short) arr_92 [(_Bool)1]))) : (((/* implicit */int) max(((unsigned char)255), ((unsigned char)238))))));
                    arr_103 [i_25] [i_25] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_93 [i_25] [i_25]))));
                }
            } 
        } 
        var_43 += ((/* implicit */unsigned char) min((727643490U), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15966))) - (3748535191U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)16839)))))));
    }
}
