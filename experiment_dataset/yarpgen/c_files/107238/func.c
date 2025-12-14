/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107238
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
    var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_12)) ? (var_15) : (1207312944U))) - (min((1207312942U), (var_19))))) < ((-(3087654351U)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_11)))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31813)) * (((/* implicit */int) (unsigned char)148))))), (1207312924U)))));
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) var_8);
        arr_8 [(unsigned short)16] [(unsigned short)16] &= ((/* implicit */unsigned short) var_8);
        arr_9 [i_1] [(short)12] = ((/* implicit */short) (-(9223372036854775779LL)));
    }
    for (short i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) arr_11 [i_2 - 1] [i_2 + 1]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_16 [i_3] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_2 - 1]))));
            arr_17 [i_2] [i_2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned short)65525)) & (((/* implicit */int) var_1)))));
            arr_18 [i_2] = ((/* implicit */long long int) ((short) arr_15 [i_2]));
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_22 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((71728606482993037LL), (((/* implicit */long long int) arr_20 [i_2] [i_4] [i_2]))))) ? (((/* implicit */int) ((unsigned char) 1970324836974592LL))) : (((/* implicit */int) var_9)))) - (((/* implicit */int) arr_14 [i_4] [i_2]))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    arr_27 [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_24 [i_4] [i_2 - 2] [i_4])) : (((/* implicit */int) var_9))))), (-5769941359070746970LL)));
                    arr_28 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32748)), (9223372036854775807LL)))) ? ((~(var_18))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1207312916U)) != (-2316737037136731693LL)))))));
                    arr_29 [i_2] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_17))));
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
                {
                    arr_32 [i_5] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31799)) >> (((((/* implicit */int) (unsigned short)38663)) - (38657)))));
                    arr_33 [i_2] [i_5] [i_2] = ((/* implicit */short) arr_26 [i_2] [i_4] [i_4] [i_7] [i_5] [i_7 + 1]);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 22; i_8 += 4) 
                {
                    arr_37 [i_5] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_8 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                    arr_38 [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) ((unsigned int) arr_25 [i_2] [i_8 - 1] [i_8] [i_2 + 1]));
                    arr_39 [i_2] [i_4] [i_2] [i_5] [i_4] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)31813))));
                }
                arr_40 [i_5] [i_2] = ((/* implicit */short) max((max((min((1207312897U), (1825629076U))), (((/* implicit */unsigned int) arr_25 [i_4] [i_4] [i_2 - 1] [i_2 - 2])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_2 - 1] [i_2 - 1] [i_2 - 1])) == ((-(((/* implicit */int) arr_24 [i_2] [i_4] [i_5])))))))));
                /* LoopSeq 4 */
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    arr_45 [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) max(((short)-30044), ((short)8232))))))))));
                    arr_46 [i_9] [i_5] [i_5] [i_5] [i_2] = ((/* implicit */unsigned short) arr_13 [i_2] [i_2 - 2] [i_2 - 2]);
                }
                /* vectorizable */
                for (long long int i_10 = 2; i_10 < 23; i_10 += 3) 
                {
                    arr_50 [i_2 - 1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) arr_30 [i_2]);
                    arr_51 [i_2] [i_10] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_13)) ? (arr_48 [i_5] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [i_4] [i_5])))));
                    arr_52 [i_4] &= ((unsigned int) arr_49 [i_4] [i_10 - 1]);
                    arr_53 [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_47 [i_10] [i_10] [i_10] [i_10 + 1])) <= (((/* implicit */int) var_7))));
                    arr_54 [i_5] [i_5] [i_5] [i_5] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_10)) - (34)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53418))) : ((-(var_8)))));
                }
                for (unsigned char i_11 = 2; i_11 < 20; i_11 += 4) /* same iter space */
                {
                    arr_57 [i_2] [i_2] [i_2] [i_4] |= ((/* implicit */unsigned char) ((1825629066U) < (4294967275U)));
                    /* LoopSeq 1 */
                    for (short i_12 = 4; i_12 < 22; i_12 += 3) 
                    {
                        arr_60 [i_2] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)80))));
                        arr_61 [i_2] [i_5] [i_5] [i_5] [i_5] [i_2] [i_12] = ((/* implicit */short) ((arr_42 [i_5] [i_5] [i_11 + 4] [i_5]) >> (((arr_42 [i_5] [i_11] [i_11 + 1] [i_5]) - (2950643587593840203LL)))));
                        arr_62 [i_2] [i_2] [i_2] [i_11] [i_2] [i_11 + 2] [i_12] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 6444906130352824282LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : ((-9223372036854775807LL - 1LL))))));
                        arr_63 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) ((long long int) ((((/* implicit */int) (unsigned char)130)) / (((/* implicit */int) (unsigned short)65530))))));
                        arr_64 [i_2] [i_4] [i_2] [i_5] [i_2] [i_5] [i_2] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) arr_23 [i_5] [i_2 - 2] [i_5])), (arr_44 [i_12 + 1] [i_11 + 1] [i_2 + 1] [i_2 + 2]))));
                    }
                    arr_65 [i_2] [i_4] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-71728606482993061LL))) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_2 + 1] [i_4] [i_5] [i_11])) ? (((/* implicit */int) arr_15 [i_11])) : (((/* implicit */int) (unsigned char)198))))) : (arr_10 [i_4])))));
                    arr_66 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_44 [i_2] [i_5] [i_5] [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)79)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                }
                /* vectorizable */
                for (unsigned char i_13 = 2; i_13 < 20; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                    {
                        arr_72 [i_5] = ((/* implicit */unsigned int) ((short) arr_69 [i_13] [i_13 - 2] [i_5] [i_13 - 2] [i_13]));
                        arr_73 [i_5] [i_4] [i_13 + 1] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((long long int) arr_43 [i_5] [i_13] [i_2] [i_2] [i_5]));
                        arr_74 [i_5] [i_13] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_17)))) - (71728606482993060LL)));
                    }
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                    {
                        arr_77 [i_5] [i_5] [i_5] [i_5] [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_15] [i_13] [i_5] [i_13 - 1] [i_13])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_35 [i_2 + 2] [i_4] [i_4] [i_2 + 2]))));
                        arr_78 [i_2] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) (-(arr_11 [i_2 + 2] [i_2 - 1])));
                        arr_79 [i_2] [i_4] [i_4] [i_13] [i_15] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_59 [i_13])))) ? ((-(((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_31 [i_2 - 2] [i_13 + 2] [i_2 - 2]))));
                    }
                    for (unsigned short i_16 = 4; i_16 < 23; i_16 += 1) 
                    {
                        arr_82 [i_13] [i_13] = arr_14 [i_5] [i_5];
                        arr_83 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((long long int) arr_71 [i_2 - 2] [i_4] [i_2 - 2] [i_2] [i_16 - 2] [i_13 + 1]));
                    }
                    arr_84 [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? ((+(((/* implicit */int) arr_55 [i_2])))) : (((((/* implicit */int) (short)32744)) >> (((9223372036854775798LL) - (9223372036854775781LL)))))));
                    arr_85 [i_5] [i_5] [i_5] [i_13] = ((/* implicit */short) arr_42 [i_13] [i_13 + 1] [i_13] [i_13 + 1]);
                    arr_86 [i_2] [i_2] [i_5] [i_2 + 2] [i_2] [i_2 - 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                }
            }
            /* vectorizable */
            for (unsigned int i_17 = 1; i_17 < 22; i_17 += 4) 
            {
                arr_89 [i_2] [i_17] [i_2] [i_17] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)177)) >> (((((/* implicit */int) (unsigned short)33650)) - (33620)))))));
                arr_90 [i_17] [i_4] [i_17] = ((/* implicit */short) (-((-(arr_56 [i_2] [i_4] [i_2])))));
            }
        }
        for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            arr_93 [i_2] [i_2 - 2] = ((/* implicit */long long int) (short)-10834);
            arr_94 [i_18] = ((/* implicit */unsigned char) (unsigned short)5206);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_19 = 0; i_19 < 24; i_19 += 2) 
            {
                arr_98 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(arr_48 [i_18] [i_2 - 1])));
                arr_99 [i_2] [i_2] = ((/* implicit */long long int) ((4294967283U) << (((-71728606482993060LL) + (71728606482993079LL)))));
                /* LoopSeq 2 */
                for (unsigned char i_20 = 2; i_20 < 23; i_20 += 2) /* same iter space */
                {
                    arr_103 [i_20] [i_2] = ((long long int) (short)2968);
                    arr_104 [i_20] [i_2] [i_18] [i_2] [i_2] [i_2] = 4294967290U;
                    arr_105 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)33716)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53350))) : (-7684071958744639247LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10151)))))));
                }
                for (unsigned char i_21 = 2; i_21 < 23; i_21 += 2) /* same iter space */
                {
                    arr_110 [i_2] [i_2] [i_19] [i_2] = ((/* implicit */short) arr_109 [i_2] [i_2] [i_19] [i_2] [i_21]);
                    arr_111 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(arr_44 [i_2] [i_2 - 2] [i_2] [i_2 - 2])));
                    arr_112 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_102 [i_18]))) & (arr_107 [i_2] [i_2] [i_19] [i_2]))))));
                }
            }
            /* vectorizable */
            for (short i_22 = 0; i_22 < 24; i_22 += 4) 
            {
                arr_116 [i_22] [i_22] [i_22] = ((/* implicit */long long int) (((-(((/* implicit */int) var_13)))) >= (((/* implicit */int) arr_55 [i_2 - 2]))));
                arr_117 [i_22] [i_22] [i_18] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32748))) | (arr_58 [i_2 + 1] [i_18] [i_18] [i_18])))) ? (((/* implicit */int) (unsigned short)46226)) : (((/* implicit */int) arr_25 [i_2] [i_2] [i_22] [i_22]))));
                arr_118 [i_2] [i_18] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2]))) ^ (arr_75 [i_18] [i_22] [i_18] [i_18] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_101 [i_2] [i_2 - 1] [i_2] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_71 [i_18] [i_18] [i_18] [i_18] [i_18] [i_2])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                arr_119 [i_2] [i_2] [i_18] [i_18] = ((/* implicit */short) var_2);
            }
            arr_120 [i_2] = ((/* implicit */unsigned short) max((((max((-71728606482993067LL), (((/* implicit */long long int) (unsigned short)12169)))) | (((/* implicit */long long int) ((/* implicit */int) (short)20641))))), (71728606482993033LL)));
            arr_121 [i_2] = ((/* implicit */unsigned char) arr_109 [i_2] [i_2] [i_18] [i_2] [i_2]);
        }
    }
    for (unsigned short i_23 = 1; i_23 < 24; i_23 += 1) 
    {
        arr_125 [i_23] = ((/* implicit */unsigned char) max((min((arr_123 [i_23] [i_23]), (arr_123 [i_23] [i_23]))), (((/* implicit */long long int) var_8))));
        arr_126 [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_122 [i_23] [i_23 - 1])), (((arr_123 [i_23] [i_23]) / (((/* implicit */long long int) 3530894543U)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_24 = 1; i_24 < 23; i_24 += 4) 
        {
            arr_129 [i_23] [i_24] = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) ((2469338229U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_128 [i_23] [i_23] [i_23])))))), (((((/* implicit */_Bool) arr_128 [i_23] [i_24] [i_23])) ? (1185290605328169549LL) : (71728606482993037LL)))))));
            arr_130 [i_23] [18U] [18U] = ((/* implicit */unsigned int) max((max((arr_128 [i_24] [i_24 + 1] [i_24]), (arr_128 [i_24] [i_24 + 1] [i_24]))), (((unsigned char) arr_128 [i_24 + 2] [i_24 + 1] [i_23]))));
        }
        for (long long int i_25 = 4; i_25 < 22; i_25 += 1) 
        {
            arr_134 [i_23] [i_23] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18939))) > (-1561757850758253234LL)));
            /* LoopSeq 1 */
            for (unsigned short i_26 = 0; i_26 < 25; i_26 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_27 = 3; i_27 < 21; i_27 += 2) 
                {
                    arr_142 [(short)2] [(short)2] [(short)2] [(short)2] &= var_15;
                    arr_143 [i_23] [i_23] = ((/* implicit */short) var_14);
                    arr_144 [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)25951))));
                    /* LoopSeq 2 */
                    for (long long int i_28 = 0; i_28 < 25; i_28 += 4) 
                    {
                        arr_148 [i_23] [i_28] [i_23] [i_28] [i_23] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_123 [i_23] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) arr_122 [i_27 + 4] [i_27 + 4]))) : (71728606482993029LL)));
                        arr_149 [i_23] [i_23] [i_23] [i_23] [i_28] = ((/* implicit */long long int) ((((/* implicit */int) arr_122 [i_23 - 1] [i_27 + 2])) < (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (short)10588)) : (((/* implicit */int) (unsigned short)53201))))));
                        arr_150 [i_23] [i_25] [i_28] [i_25] [i_28] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_122 [i_23 - 1] [i_23 - 1]))));
                    }
                    for (long long int i_29 = 1; i_29 < 24; i_29 += 1) 
                    {
                        arr_154 [i_23] [i_25] [i_25] [i_25] [i_25] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_19)))))));
                        arr_155 [i_29] [(unsigned short)22] [i_29] = ((/* implicit */short) arr_122 [i_23] [i_25 - 1]);
                        arr_156 [i_23] [i_23] = ((/* implicit */long long int) var_19);
                        arr_157 [(short)16] [(short)16] [(short)16] [i_27] [(short)16] &= ((/* implicit */short) var_17);
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_30 = 0; i_30 < 25; i_30 += 3) 
                {
                    arr_160 [i_23] [i_25] [i_25] [i_23] [i_23] = ((/* implicit */unsigned short) (short)-21655);
                    arr_161 [i_23] = ((/* implicit */unsigned int) ((((long long int) arr_127 [i_23] [i_23])) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) arr_147 [i_23] [i_23] [i_23] [i_23] [i_23]))))));
                }
                /* vectorizable */
                for (short i_31 = 2; i_31 < 22; i_31 += 2) 
                {
                    arr_165 [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_141 [i_23 + 1] [i_23 + 1] [i_25 - 4] [i_23] [i_31 + 1]))));
                    arr_166 [i_23] [i_25 + 3] [i_31] [i_31 + 2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_135 [i_31 + 2] [i_31] [i_31] [i_25 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_139 [i_31])))) : (arr_138 [i_25 + 3] [i_31 - 1] [i_31 + 3])));
                }
            }
            arr_167 [i_23 + 1] [i_23 + 1] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)15309)) && (((/* implicit */_Bool) arr_128 [i_23 + 1] [i_25 - 2] [i_25 + 1]))))) > (((/* implicit */int) arr_124 [i_23]))));
            arr_168 [i_23] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) ^ (arr_152 [i_25] [i_25] [i_25] [i_25] [i_23] [i_23]))), (max((arr_135 [i_23] [i_23 - 1] [i_23 - 1] [i_23 - 1]), (arr_135 [i_23] [i_23 + 1] [i_25] [i_25])))));
        }
        arr_169 [i_23] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_159 [i_23] [i_23] [i_23] [i_23]))))));
    }
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */short) var_10)), (((short) -9223372036854775807LL))))), (max(((~(var_11))), (((/* implicit */long long int) ((unsigned int) (unsigned char)172)))))));
}
