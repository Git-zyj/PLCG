/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126428
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
    var_10 = ((/* implicit */unsigned short) ((4386570322752828335ULL) ^ (((/* implicit */unsigned long long int) 4211926293U))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)146)) - (132)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                arr_10 [i_2 + 3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_6 [i_0] [7ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1]))) : (-6986083891814014929LL)))));
                arr_11 [i_0] [i_1] = ((((arr_5 [i_0]) << (((arr_5 [i_1]) - (17954636560878799621ULL))))) + (((/* implicit */unsigned long long int) ((unsigned int) var_6))));
                arr_12 [i_0] [i_1] = ((/* implicit */int) arr_6 [i_1] [i_1]);
            }
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3])) && (((/* implicit */_Bool) var_8))));
                arr_16 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) -3LL);
                arr_17 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */_Bool) arr_2 [i_0] [i_3]);
                arr_18 [i_0] = ((/* implicit */_Bool) ((var_1) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (576443160117379072LL)))));
                arr_19 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (short)-1);
            }
            arr_20 [i_0] [i_1] = ((/* implicit */int) (unsigned char)214);
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
            arr_22 [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) ((arr_0 [i_0]) << (((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1])) - (178))))));
            arr_23 [i_1] = ((/* implicit */_Bool) arr_5 [i_0]);
        }
        arr_24 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_13 [i_0] [3ULL] [i_0] [i_0])) >= (((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_29 [i_4] |= ((/* implicit */long long int) (+(arr_26 [i_4])));
        arr_30 [i_4] = ((/* implicit */_Bool) var_6);
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        arr_35 [i_5] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_32 [i_5] [i_5])), (arr_34 [i_5]))) == (((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_33 [i_5] [i_5])) : (((/* implicit */int) arr_31 [i_5] [i_5]))))) : (((((/* implicit */_Bool) arr_33 [i_5] [i_5])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        arr_36 [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_5]))));
        arr_37 [i_5] [i_5] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5] [i_5])) ? (((/* implicit */int) arr_31 [i_5] [i_5])) : (var_8)))) ? (max((((/* implicit */long long int) arr_33 [i_5] [i_5])), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11LL))))))))));
        arr_38 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 7491234698576223119LL)) == (18446744073709551613ULL)));
        arr_39 [i_5] = ((/* implicit */unsigned char) arr_33 [i_5] [i_5]);
    }
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_42 [i_6] = ((/* implicit */_Bool) 10346020546656529578ULL);
        arr_43 [i_6] [3ULL] = var_1;
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            arr_52 [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_8 - 1])) ? (((/* implicit */int) arr_51 [i_7] [i_7] [i_8])) : (((/* implicit */int) (short)26))));
            arr_53 [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_62 [i_7] [i_8] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) var_3);
                            arr_63 [i_8 - 1] [i_8] [i_8 - 1] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_8 - 1] [i_8 - 1] [i_9]))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    arr_67 [i_8 - 1] [i_9] [i_9] = ((/* implicit */unsigned int) arr_45 [i_12]);
                    arr_68 [i_7] [i_8] [i_7] [i_12] = ((/* implicit */long long int) 4318604934106352521ULL);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        arr_71 [i_7] [i_7] [i_9] [i_8 - 1] [i_13] = arr_70 [i_8] [i_9];
                        arr_72 [i_12] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_51 [i_8] [i_7] [i_8 - 1]))));
                        arr_73 [i_13] [i_7] [i_12] [8U] [i_7] [8U] = ((/* implicit */unsigned long long int) var_3);
                        arr_74 [i_7] [i_8] [i_7] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_8 - 1]))) : (0ULL)));
                    }
                    arr_75 [i_7] [i_12] [i_7] [i_12] &= ((/* implicit */unsigned char) ((arr_64 [i_12] [i_8 - 1] [i_8 - 1] [8U]) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) -24LL))))));
                }
                for (signed char i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    arr_78 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_31 [i_7] [i_8]))))) ? (((long long int) (signed char)1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) (unsigned char)137)))))));
                    arr_79 [i_7] [i_9] = ((/* implicit */unsigned int) ((14128139139603199094ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107)))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    arr_83 [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (short)-18)) | (((/* implicit */int) arr_69 [i_8 - 1] [3LL]))));
                    arr_84 [i_8 - 1] [i_8] [i_9] [i_8] &= ((/* implicit */long long int) arr_33 [i_8 - 1] [i_8 - 1]);
                    arr_85 [i_7] [i_8 - 1] [i_8 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 26LL))));
                }
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    arr_89 [i_8] [i_7] [i_16] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_51 [i_7] [i_7] [i_9])) % (((/* implicit */int) (signed char)106))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        arr_94 [i_7] [i_7] [i_9] [i_9] [i_9] [i_7] = ((/* implicit */unsigned char) ((int) 981675017U));
                        arr_95 [i_7] [i_8 - 1] [i_7] [i_9] [i_16] [i_17] = ((/* implicit */long long int) arr_58 [i_7] [i_8] [i_9] [i_7]);
                        arr_96 [i_7] [i_8] [i_9] [i_16] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (4787569519991314290LL)));
                        arr_97 [(short)2] [i_8 - 1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_44 [(short)7]))));
                        arr_98 [(short)12] [i_8 - 1] [i_16] [i_16] [i_17] = ((/* implicit */unsigned char) ((5774757163657588398ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14128139139603199094ULL)) ? (((/* implicit */long long int) arr_88 [i_17] [i_17] [(short)14])) : (arr_49 [i_7]))))));
                    }
                    arr_99 [i_7] [i_7] [i_9] [i_16] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_64 [i_7] [i_8] [i_8 - 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 1]))) : (arr_64 [i_7] [i_8] [i_8 - 1] [i_7])));
                    arr_100 [i_7] [i_9] [i_7] [i_16] [i_8] [i_7] = ((/* implicit */long long int) arr_33 [i_7] [i_7]);
                    /* LoopSeq 2 */
                    for (signed char i_18 = 1; i_18 < 16; i_18 += 2) 
                    {
                        arr_103 [i_9] = ((/* implicit */short) ((((14128139139603199094ULL) != (((/* implicit */unsigned long long int) arr_49 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (12770310184818218621ULL))))) : (((unsigned int) 18446744073709551608ULL))));
                        arr_104 [i_7] [i_9] [i_16] [i_18] = ((unsigned long long int) ((long long int) (signed char)-5));
                        arr_105 [i_7] [i_8] [i_9] [i_8] [i_7] [i_18] = ((/* implicit */short) arr_59 [i_7] [i_8] [i_9] [i_16] [i_7] [i_18]);
                        arr_106 [i_7] [i_8] [i_9] [i_16] [16ULL] [i_8 - 1] = ((/* implicit */_Bool) arr_64 [i_16] [i_8] [i_8 - 1] [i_18 + 2]);
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_110 [i_7] [i_8] [i_9] [i_16] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)14337)))))));
                        arr_111 [i_7] [i_7] [i_9] [i_7] [i_19] = ((/* implicit */unsigned short) var_2);
                        arr_112 [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */short) 18446744073709551613ULL);
                    }
                }
                arr_113 [i_7] [i_9] [i_9] [i_9] = arr_87 [i_8 - 1] [i_9] [i_8 - 1] [i_8 - 1];
            }
            arr_114 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) arr_33 [i_8 - 1] [i_7])) : (((((/* implicit */int) (signed char)121)) >> (((/* implicit */int) var_2))))));
            arr_115 [i_7] = ((/* implicit */signed char) ((arr_48 [i_7] [i_8 - 1] [i_7]) < (((/* implicit */unsigned long long int) arr_88 [i_7] [i_7] [i_7]))));
        }
        /* LoopSeq 3 */
        for (signed char i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            arr_118 [i_7] [i_7] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) (signed char)121)), (var_1))))) ? (((/* implicit */int) max((max((((/* implicit */short) (unsigned char)249)), (var_9))), (((/* implicit */short) arr_86 [i_7] [i_7] [(signed char)17]))))) : (((/* implicit */int) (short)14317))));
            arr_119 [i_7] [i_20] [12LL] &= ((/* implicit */_Bool) min((min((max((((/* implicit */unsigned long long int) arr_60 [i_7] [i_7] [i_7] [i_7] [i_7])), (arr_76 [i_7] [8ULL] [i_20] [i_7] [i_20] [(_Bool)1]))), (((/* implicit */unsigned long long int) arr_58 [i_7] [i_20] [12LL] [(short)14])))), (min((((var_3) ? (arr_91 [i_7] [i_7] [i_7] [i_7] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_101 [i_7] [i_20] [i_20] [i_20] [i_20]))))), (arr_80 [i_7] [i_20] [i_7] [i_7] [i_7] [i_20])))));
            arr_120 [16U] [i_20] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) arr_48 [i_7] [i_7] [12ULL])) && (((/* implicit */_Bool) var_5)))) ? (var_8) : (((/* implicit */int) arr_31 [i_7] [i_20]))))));
            arr_121 [10ULL] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) < (max((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) ^ (arr_57 [(signed char)4]))), (((/* implicit */unsigned long long int) (unsigned short)16053))))));
        }
        for (signed char i_21 = 0; i_21 < 19; i_21 += 3) 
        {
            arr_124 [i_7] [i_7] [(short)13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_117 [i_21] [i_21] [i_7])))));
            arr_125 [i_7] [i_7] [i_21] = ((/* implicit */long long int) var_2);
        }
        for (unsigned int i_22 = 1; i_22 < 17; i_22 += 4) 
        {
            arr_130 [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 6310085998008140235LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_127 [i_7] [i_7] [i_22])))))), (max((((/* implicit */unsigned long long int) arr_64 [i_7] [i_7] [i_7] [i_22])), (5774757163657588398ULL)))));
            arr_131 [i_7] [i_7] = ((/* implicit */int) min((arr_116 [i_7] [i_22] [i_22]), (((/* implicit */long long int) ((signed char) min((((/* implicit */int) var_5)), (arr_90 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        }
    }
    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 1) 
    {
        arr_135 [i_23] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_23] [i_23]))) : (min((((/* implicit */unsigned long long int) var_1)), (18446744073709551589ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 10ULL)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))));
        arr_136 [i_23] = ((/* implicit */long long int) ((((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551582ULL))) < (((((/* implicit */_Bool) arr_6 [i_23] [i_23])) ? (arr_48 [(_Bool)1] [i_23] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) min(((short)-1), (((/* implicit */short) var_2)))))))));
    }
}
