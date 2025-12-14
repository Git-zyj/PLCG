/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107303
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_15 = arr_1 [i_0];
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 4; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] = arr_12 [i_0 + 2] [i_1] [i_0 + 2] [i_0] [i_3 - 2];
                        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)4494)) != (min((((/* implicit */int) (unsigned char)189)), (-379964875)))))) >> (((((/* implicit */_Bool) max((arr_1 [i_1]), (var_14)))) ? (((/* implicit */int) ((unsigned char) (unsigned short)16384))) : (-1711057830)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)53)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_0 + 2] [i_0])) > (13835058055282163712ULL))))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) 
            {
                var_17 = max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_5 - 2])) > (((/* implicit */int) (unsigned char)242)))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) % (9074556799079668416ULL)))))), (max((arr_7 [i_5 + 4] [i_0 - 1] [i_4] [i_0 - 1]), (arr_7 [i_5 + 1] [i_0 + 2] [i_5] [i_0 + 2]))));
                arr_21 [(signed char)8] [i_4] [(signed char)8] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0 + 1] [i_4 + 1] [i_5] [16] [i_5]))))) - ((((!(((/* implicit */_Bool) arr_9 [i_5] [(short)10] [i_5])))) ? (max((((/* implicit */unsigned long long int) var_7)), (16341335774195689347ULL))) : ((~(11385336254171905974ULL)))))));
            }
            /* vectorizable */
            for (short i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) ((arr_9 [i_0 + 1] [i_0] [i_6]) == (arr_9 [i_0 - 1] [i_0] [i_4])));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (~(arr_4 [i_0])));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */int) (short)12919)) < (((/* implicit */int) var_5)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 2105408299513862284ULL)) ? (((/* implicit */int) (short)-17513)) : (((/* implicit */int) var_7)))))))));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((int) var_4))) : (((((/* implicit */_Bool) arr_12 [7LL] [i_4] [i_6] [i_0] [i_7])) ? (-7525521802133643253LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12919)))))));
                }
                var_21 = ((/* implicit */short) var_1);
                arr_27 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((arr_16 [i_0 + 2] [i_6 - 1] [i_0 + 2]) / (((/* implicit */int) arr_19 [i_0 + 2] [i_0] [i_0 + 2]))));
            }
            /* vectorizable */
            for (unsigned short i_8 = 3; i_8 < 17; i_8 += 4) 
            {
                arr_30 [i_0] = ((7061407819537645628ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                /* LoopSeq 3 */
                for (short i_9 = 4; i_9 < 18; i_9 += 4) 
                {
                    arr_33 [i_9 - 4] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((4363686772736ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(unsigned short)10] [i_8]))))))) & (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12943))) : (var_3)))));
                    arr_34 [i_0 + 2] [i_9] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 3] [i_9 + 1] [i_9 - 3]))));
                }
                for (unsigned short i_10 = 2; i_10 < 18; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_14)))) : (((((/* implicit */_Bool) -1186233673)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) : (var_13)))));
                        arr_40 [i_0] [i_8] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_0])) >= (2105408299513862279ULL)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 3; i_12 < 16; i_12 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((short) var_5));
                        var_24 *= ((/* implicit */short) ((_Bool) arr_35 [(unsigned short)18] [(unsigned short)18]));
                        var_25 -= ((((((/* implicit */int) var_7)) | (((/* implicit */int) arr_19 [i_10 + 1] [(unsigned short)6] [i_4])))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [(short)0] [(unsigned char)0])) : (((/* implicit */int) (short)(-32767 - 1))))));
                    }
                    for (long long int i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        arr_47 [i_0] [i_8] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_35 [i_0] [i_0]))));
                        var_26 = ((((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) (unsigned short)992))))));
                    }
                    var_27 = ((/* implicit */int) ((((unsigned int) 18446744073709551600ULL)) << ((((~(1ULL))) - (18446744073709551589ULL)))));
                    var_28 &= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_8] [i_0 + 1] [(unsigned char)16])) + (((/* implicit */int) var_9))));
                }
                for (int i_14 = 4; i_14 < 17; i_14 += 2) 
                {
                    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1186233684)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_31 = ((/* implicit */int) 9169569905239676033LL);
                }
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-12929)) & ((~(((/* implicit */int) (unsigned short)29))))));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0 - 1] [16U] [i_0 - 1])) ? (((/* implicit */int) arr_32 [8] [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)24015)))) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)46460)) : (((/* implicit */int) (short)(-32767 - 1))))))))));
            }
        }
    }
    for (int i_15 = 1; i_15 < 17; i_15 += 4) /* same iter space */
    {
        arr_54 [i_15] = ((/* implicit */short) ((arr_4 [16ULL]) <= ((-(arr_48 [i_15 + 1] [i_15 - 1] [i_15] [i_15 + 2])))));
        var_34 = ((/* implicit */short) (unsigned short)61752);
        var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_16 = 3; i_16 < 16; i_16 += 1) 
        {
            arr_58 [i_16] [i_16] = ((/* implicit */short) var_3);
            arr_59 [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_15 + 1] [i_16] [i_16 - 3]))));
        }
        for (unsigned int i_17 = 3; i_17 < 17; i_17 += 4) 
        {
            arr_62 [(short)15] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_17])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (var_0)))) ? ((-(((/* implicit */int) arr_41 [i_15] [i_15] [i_15] [i_17] [i_17])))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)4487))))))) : (((((/* implicit */long long int) 4294967275U)) - (((((/* implicit */_Bool) arr_16 [i_15] [i_15] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (short)12919))) : (arr_37 [i_15] [i_15] [i_15 - 1] [i_15 - 1] [i_15] [i_15])))))));
            var_36 = ((/* implicit */unsigned int) max(((-((-(((/* implicit */int) (unsigned short)28741)))))), (((/* implicit */int) ((((/* implicit */_Bool) 50331648LL)) && (((/* implicit */_Bool) (unsigned char)126)))))));
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_15 - 1])) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (-99495753) : (((/* implicit */int) arr_2 [i_17]))))) / (((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) : (arr_55 [i_17] [i_17])))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_18 = 3; i_18 < 15; i_18 += 3) 
        {
            var_38 = ((/* implicit */unsigned long long int) ((unsigned int) arr_49 [i_15] [i_18] [i_15 - 1]));
            var_39 = ((/* implicit */signed char) var_7);
            /* LoopSeq 2 */
            for (unsigned long long int i_19 = 2; i_19 < 18; i_19 += 1) 
            {
                var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)0]))));
                var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 883813378477920953LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_19]))))))));
            }
            for (long long int i_20 = 1; i_20 < 17; i_20 += 3) 
            {
                arr_71 [i_15 - 1] [(unsigned short)6] [(unsigned char)8] [i_20 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_15] [i_18] [i_20])) / (arr_57 [i_20 - 1] [4ULL] [i_20 + 2])));
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_3 [(unsigned short)16]))));
            }
        }
    }
    var_43 = ((/* implicit */unsigned long long int) var_8);
    var_44 = ((/* implicit */unsigned long long int) var_13);
    var_45 &= ((/* implicit */unsigned char) var_8);
}
