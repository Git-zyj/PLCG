/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118336
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
    var_20 = ((/* implicit */short) ((unsigned int) var_0));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 4294967291U)) : (arr_1 [i_0]))), (max((7916666013170552387ULL), (((/* implicit */unsigned long long int) var_0))))));
        arr_5 [(_Bool)1] = ((unsigned char) ((unsigned int) var_9));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_10 [i_2 + 1])), (3179850718U))), (((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned char) var_2)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_2] [i_1] [i_3] [i_4] [(unsigned short)7] [i_5] = ((/* implicit */unsigned int) min((max((arr_10 [i_4]), ((_Bool)0))), (min((arr_14 [i_1] [i_2] [i_1] [i_1] [i_4] [i_5]), (arr_10 [i_1])))));
                                arr_19 [i_2] [i_3] [i_1] [i_2] [i_5] = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (short)6112)))), (((/* implicit */int) ((_Bool) arr_17 [i_2] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_4] [i_5]))));
                                arr_20 [i_1] [i_3] [i_1] [i_1] [(_Bool)1] = ((unsigned int) 67108863);
                                arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) 10530078060538999229ULL))), (((int) var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_1] = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)193))))) ? (((arr_10 [(unsigned short)1]) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (signed char)-46))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            arr_26 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned short) var_14));
            arr_27 [i_1] = ((/* implicit */unsigned char) ((unsigned short) 7916666013170552379ULL));
            arr_28 [10U] = ((/* implicit */unsigned long long int) ((_Bool) 16422250807302478354ULL));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_32 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -823060878)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10221))) : ((-9223372036854775807LL - 1LL))))) ? (((arr_30 [i_1] [i_7]) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)198)))))));
            arr_33 [i_1] [(unsigned char)17] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_7] [i_1])))));
        }
        for (long long int i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            arr_36 [12U] [i_8] [0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_1] [i_8 - 1] [0] [i_1] [i_1] [i_1]))), (max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_9))))), (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) ? (arr_29 [i_1] [(unsigned char)6] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_9 = 4; i_9 < 17; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    arr_44 [i_1] [i_9] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_8 + 1] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59)))));
                    arr_45 [i_10] [(signed char)6] [(signed char)6] [12LL] = ((/* implicit */unsigned char) ((short) var_12));
                }
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        arr_52 [i_1] [i_1] [i_9] = ((unsigned char) 2392804261U);
                        arr_53 [i_1] [i_11] [i_1] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_47 [i_8] [i_8 + 1] [i_9 - 2] [i_1] [i_12 + 1]));
                    }
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        arr_56 [i_1] [i_8 + 1] [12LL] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5241)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_7)));
                        arr_57 [0LL] [i_11] [i_11] [(unsigned short)2] [i_11] [i_11] = ((/* implicit */signed char) ((int) (unsigned char)93));
                        arr_58 [i_1] [(unsigned char)10] [i_9 - 3] [i_11] [i_13] = ((/* implicit */short) ((int) arr_37 [i_8 + 1] [i_9 + 1]));
                    }
                    for (int i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        arr_63 [i_1] [i_8] [i_1] = ((((/* implicit */_Bool) (unsigned char)215)) ? (11236932106119913377ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))));
                        arr_64 [i_1] [i_8] [i_1] [i_1] [i_11] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25721)) ? (arr_59 [i_8 - 1] [i_8 + 1]) : (((/* implicit */int) var_14))));
                        arr_65 [i_1] [i_1] [i_1] [3LL] [(_Bool)1] [4] [i_14] = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */int) arr_48 [i_8 - 1] [i_9] [i_1] [i_9] [i_9 - 1])) : (((/* implicit */int) (signed char)6))));
                        arr_66 [0U] [i_1] [i_9] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) var_16));
                    }
                    arr_67 [i_8] [i_1] [i_1] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6112)) ? (((/* implicit */int) var_1)) : (arr_24 [i_8 - 1] [i_1] [i_9])));
                    arr_68 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_1] [i_8 - 1] [i_9 - 1])) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) arr_40 [i_1] [i_8 - 1] [i_9 - 4]))));
                }
                arr_69 [8LL] [8LL] [i_9] = ((/* implicit */unsigned char) ((short) arr_9 [i_9 - 4] [4] [i_8 - 1]));
                arr_70 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) arr_6 [i_8 + 1] [i_9 - 4]));
            }
            for (signed char i_15 = 4; i_15 < 16; i_15 += 3) 
            {
                arr_73 [i_1] [i_8 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((short) ((_Bool) arr_40 [i_8 - 1] [i_15 - 2] [i_15 - 3])));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        {
                            arr_78 [i_17] [i_16] [i_15] = ((/* implicit */short) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) ((unsigned char) arr_14 [(unsigned char)18] [(unsigned char)18] [i_16] [(short)6] [(unsigned short)2] [i_8 + 1])))));
                            arr_79 [i_1] [i_8 + 1] [i_1] [i_1] [i_17] [i_16] [i_1] = ((/* implicit */_Bool) max((min((2510693800U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) ((signed char) arr_6 [i_15] [i_8 + 1])))));
                            arr_80 [i_17] [i_16] [i_15] [i_15] [i_17] [i_16] [i_17] = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) var_13))), (min((9223372036854775803LL), (((/* implicit */long long int) min((((/* implicit */int) (short)25717)), (2147483647))))))));
                        }
                    } 
                } 
                arr_81 [14ULL] [i_8] [i_15 + 2] = ((((/* implicit */_Bool) max((144115188075855864LL), (((/* implicit */long long int) (short)-25721))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_8 - 1] [i_15 - 2])) ? (((/* implicit */int) var_8)) : (arr_59 [i_8 + 1] [i_15 + 1])))) : (((((/* implicit */_Bool) min((arr_9 [i_8 + 1] [i_8] [i_1]), (3380080854U)))) ? (((unsigned long long int) (unsigned char)96)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_15 + 2] [i_8 + 1]))))));
            }
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
            {
                arr_85 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) (unsigned char)68)));
                arr_86 [i_1] [i_1] [i_1] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_41 [i_1] [i_8 + 1] [i_8 + 1] [i_1])) : (((/* implicit */int) arr_41 [i_1] [i_8 + 1] [i_8 + 1] [i_1]))));
                arr_87 [(signed char)14] [(signed char)14] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)6))) ? (((/* implicit */unsigned long long int) arr_24 [i_1] [i_8 + 1] [i_18])) : (((unsigned long long int) 3939518339U))));
            }
            for (unsigned short i_19 = 0; i_19 < 19; i_19 += 2) /* same iter space */
            {
                arr_90 [i_19] [i_8] [i_19] = max((((/* implicit */int) max(((_Bool)1), (arr_8 [i_8 - 1] [i_8 + 1] [i_8 - 1])))), (((((/* implicit */_Bool) -152108213)) ? (arr_24 [i_8 + 1] [i_8 + 1] [i_8 - 1]) : (((/* implicit */int) arr_8 [i_8 + 1] [i_8 - 1] [i_8 - 1])))));
                arr_91 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8410)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1048544U)))) : (((((/* implicit */_Bool) arr_23 [i_8 + 1])) ? (((/* implicit */unsigned long long int) -9223372036854775805LL)) : (var_12)))));
                arr_92 [i_1] [(unsigned short)5] [i_8] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (signed char)2))) ? (min((((/* implicit */long long int) 4294967295U)), (var_7))) : (((/* implicit */long long int) ((((_Bool) arr_30 [i_1] [i_8 + 1])) ? (((/* implicit */int) max((arr_72 [i_1] [(signed char)6] [i_1] [i_19]), (((/* implicit */short) var_2))))) : (((/* implicit */int) var_17)))))));
            }
        }
    }
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))), (min((max((((/* implicit */unsigned int) (unsigned char)68)), (1673027450U))), (((/* implicit */unsigned int) var_14))))));
    var_22 = ((/* implicit */int) var_0);
}
