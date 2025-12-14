/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158831
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_13))))) ? (max((((/* implicit */unsigned long long int) var_12)), (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20327))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) (+(10447235377335957613ULL)));
                var_17 += ((/* implicit */unsigned short) ((_Bool) (unsigned char)237));
                var_18 = ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_4 [i_2] [3LL] [i_2])))) << (((((((/* implicit */_Bool) 1866727121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (7999508696373594018ULL))) - (65525ULL)))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) max((((((18446744073709551600ULL) % (((/* implicit */unsigned long long int) 6150933796972506200LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_1] [i_2] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [9ULL]))))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)217)) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [(unsigned char)3] [i_1] [4])), (var_8)))))))));
                }
                for (unsigned int i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)202)) & (((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)107))))), (((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_3 - 1] [i_3 - 3] [i_3])) ? (var_7) : (var_7))))))));
                    var_21 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((arr_2 [i_3 - 2]), ((!(((/* implicit */_Bool) 1463319419734633194LL))))))), (max((13289355157428721807ULL), (((/* implicit */unsigned long long int) (+(1602755275U))))))));
                    var_22 -= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]);
                    arr_11 [2] [(unsigned short)6] [i_1] [i_3] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) / (((/* implicit */int) (short)-4262))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)144)) << (((((/* implicit */int) (signed char)-81)) + (83)))));
                }
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) >> (((min((((/* implicit */int) (signed char)59)), (-1866727118))) + (1866727119)))));
                    arr_14 [5] [i_1] [(short)2] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), ((unsigned short)11659)))) ? (var_4) : (((/* implicit */int) var_12))))) >= (13846907861502891503ULL)));
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        arr_19 [i_6] [3] = ((/* implicit */unsigned long long int) arr_9 [(short)1]);
                        arr_20 [i_0] [i_6] [i_0] [5U] [4ULL] = ((/* implicit */unsigned short) (~(((unsigned long long int) var_12))));
                        var_25 = ((/* implicit */unsigned char) (unsigned short)51544);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 7; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */short) (+(((/* implicit */int) (short)24876))));
                            arr_23 [(short)0] [i_6] [i_5] [i_6] [(short)1] = ((/* implicit */unsigned long long int) ((unsigned char) 1866727135));
                        }
                        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            arr_26 [(short)6] [i_6] [(unsigned char)3] [i_8] [(unsigned short)3] = ((/* implicit */int) ((8173960627725192359ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7651)))));
                            arr_27 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_6] [i_1] [i_5] [i_6] [i_8])) ? (((long long int) 7999508696373594023ULL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-6946))))) * (((/* implicit */long long int) ((/* implicit */int) min((arr_24 [i_6] [(_Bool)1] [i_6] [i_8 - 1] [i_8 - 1]), (((/* implicit */unsigned char) arr_22 [i_8] [(_Bool)1] [(unsigned char)8] [i_8 + 1] [i_8 + 1] [i_8 - 1]))))))));
                            arr_28 [i_1] [(unsigned short)2] [i_8] |= ((((/* implicit */_Bool) 4576363853333798476ULL)) ? (((/* implicit */int) (short)20341)) : (((/* implicit */int) (unsigned char)35)));
                            arr_29 [i_6] [i_1] [i_5] [i_6] [4ULL] = ((/* implicit */unsigned long long int) arr_21 [(unsigned short)7] [i_0] [i_6] [(unsigned char)2] [(short)9] [i_6] [i_8]);
                            var_27 = ((/* implicit */short) (+(max((min((894520702U), (((/* implicit */unsigned int) arr_25 [4U] [i_1] [i_5] [9ULL] [i_6] [i_8])))), (((((/* implicit */_Bool) -1890685350)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) : (7U)))))));
                        }
                    }
                    var_28 = ((/* implicit */_Bool) min((((var_7) << (((((((/* implicit */int) (short)24903)) * (((/* implicit */int) (unsigned short)2393)))) - (59592831))))), (((/* implicit */unsigned long long int) -1336525782))));
                    arr_30 [i_5] [i_5] [(unsigned char)0] [i_0] = ((/* implicit */short) arr_17 [(short)4] [i_0] [i_1] [(unsigned char)6] [(unsigned char)4] [i_5]);
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_10])) ? (arr_36 [i_9] [i_10] [(unsigned char)4]) : (((/* implicit */int) (signed char)-89)))))));
            /* LoopSeq 3 */
            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2379))))) ? (arr_32 [i_10] [i_11]) : (((/* implicit */int) (short)14822)))))));
                arr_39 [9ULL] [i_10] [i_9] |= ((/* implicit */unsigned int) (short)-28794);
            }
            for (unsigned short i_12 = 3; i_12 < 9; i_12 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
                var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-1105)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7))) != (((/* implicit */unsigned long long int) arr_36 [i_9] [(unsigned char)10] [i_12 + 3]))));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [(short)7] [i_12 + 3])) ? (arr_35 [i_9] [i_12 + 2]) : (arr_35 [(unsigned char)3] [i_12 - 2])));
            }
            for (unsigned char i_13 = 2; i_13 < 9; i_13 += 3) 
            {
                arr_44 [(short)11] [i_10] [3U] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) % (((/* implicit */int) ((unsigned short) (unsigned char)23)))));
                /* LoopSeq 4 */
                for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    arr_49 [(_Bool)1] [8LL] [i_13] [i_14] [i_13] = ((((/* implicit */_Bool) arr_37 [i_13 + 1] [i_13] [i_13])) ? (((/* implicit */int) arr_45 [i_13 + 2] [i_13] [2U] [i_13])) : (((/* implicit */int) arr_45 [i_13 - 1] [4U] [i_13] [0U])));
                    var_34 -= ((/* implicit */signed char) (unsigned short)63181);
                }
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    var_35 = ((/* implicit */unsigned char) arr_38 [i_13 + 2] [i_13 + 1] [i_13 - 2]);
                    arr_53 [(short)0] [i_10] [i_13] [10LL] [i_10] = arr_50 [3ULL] [i_10] [i_10] [i_15] [4U] [(short)1];
                }
                for (int i_16 = 2; i_16 < 11; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
                    {
                        arr_58 [i_9] [i_9] [(short)0] [(signed char)2] [i_13] [i_9] = ((/* implicit */signed char) ((arr_37 [i_9] [i_10] [i_9]) >= (((/* implicit */int) arr_45 [i_16] [i_13] [i_10] [i_9]))));
                        var_36 = ((/* implicit */unsigned int) arr_38 [9ULL] [0ULL] [(_Bool)1]);
                        arr_59 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_42 [i_9] [(unsigned char)9] [0LL]))) ? (var_14) : (((/* implicit */int) (unsigned char)141))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
                    {
                        arr_64 [(signed char)5] [i_10] [i_13] [i_16] [i_10] = ((/* implicit */unsigned int) -1866727124);
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_50 [0] [(short)0] [i_13] [i_13] [(unsigned char)8] [i_13]))) >= ((-(((/* implicit */int) (short)32130))))));
                        var_38 = ((/* implicit */long long int) (signed char)126);
                    }
                    arr_65 [(unsigned short)11] [8U] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20328))) : (arr_57 [i_16] [i_13] [i_13] [i_13] [i_9])))) ? (((/* implicit */int) arr_43 [(_Bool)1] [i_13 - 2] [i_16 - 1] [(unsigned char)2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned char)52)))))));
                }
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)247)) & (((/* implicit */int) (signed char)119))));
                    var_40 = ((/* implicit */long long int) 288230376151711743ULL);
                    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [(_Bool)1] [i_13 - 1] [i_13] [6ULL])) ? (((/* implicit */int) arr_69 [(short)10] [i_13 - 2] [(unsigned short)2] [i_13])) : (((/* implicit */int) arr_69 [6U] [i_13 + 1] [4U] [6ULL])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        var_42 = ((/* implicit */short) (signed char)-105);
                        arr_74 [(signed char)10] [4LL] [i_13] [i_13] [i_20] [0U] |= ((/* implicit */unsigned char) ((_Bool) ((int) arr_31 [(short)1] [i_10])));
                        var_43 = ((/* implicit */unsigned int) ((arr_32 [i_13 + 3] [i_10]) == (((/* implicit */int) var_13))));
                        var_44 = ((/* implicit */_Bool) arr_57 [(unsigned char)1] [i_13] [i_9] [i_19] [i_13 - 2]);
                    }
                }
            }
            var_45 = ((/* implicit */unsigned int) max((var_45), (((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_9] [i_10] [(short)3] [(unsigned char)4]))) : (var_10)))));
        }
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            arr_78 [(_Bool)1] [i_21] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_21] [6LL] [8ULL] [0U])) * (((/* implicit */int) arr_69 [i_21] [i_21] [i_21] [i_21]))));
            var_46 += ((/* implicit */unsigned long long int) ((short) arr_38 [i_9] [i_21] [i_9]));
            arr_79 [0ULL] = ((/* implicit */unsigned char) ((((-1163273354) + (2147483647))) << (((((/* implicit */int) (unsigned char)3)) - (3)))));
            var_47 = ((/* implicit */unsigned char) (signed char)111);
        }
        arr_80 [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_76 [i_9] [i_9])) ? (18158513697557839876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_9] [i_9])))));
        arr_81 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [(unsigned char)6] [i_9] [i_9] [(_Bool)1] [i_9])) || (((/* implicit */_Bool) arr_56 [i_9] [i_9] [(unsigned short)2] [i_9] [10U] [i_9] [(_Bool)1]))));
    }
    for (int i_22 = 4; i_22 < 14; i_22 += 4) /* same iter space */
    {
        arr_84 [i_22] &= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) arr_83 [i_22] [(unsigned char)14]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) : (18446744073709551615ULL)))) ? ((~(((/* implicit */int) (unsigned short)42419)))) : (((/* implicit */int) (unsigned char)0))))));
        var_48 = ((((/* implicit */_Bool) ((unsigned long long int) arr_82 [i_22 + 1] [i_22 + 1]))) ? (((/* implicit */int) max((arr_83 [i_22 - 2] [i_22 - 2]), (arr_82 [(_Bool)1] [i_22 + 1])))) : (((/* implicit */int) min(((unsigned short)42424), (((/* implicit */unsigned short) (unsigned char)171))))));
    }
    for (int i_23 = 4; i_23 < 14; i_23 += 4) /* same iter space */
    {
        arr_87 [i_23] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)111)), (var_12))))));
        arr_88 [i_23] [9U] = ((/* implicit */signed char) arr_83 [i_23] [i_23]);
        arr_89 [i_23] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (min(((unsigned char)183), (((/* implicit */unsigned char) (signed char)-65)))))))) | (((min((((/* implicit */unsigned int) arr_82 [i_23] [(unsigned char)3])), (var_10))) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) arr_85 [i_23])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)61780)) - (61776))))))))));
    }
}
