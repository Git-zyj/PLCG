/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169626
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
    var_12 = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) var_2)));
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0]))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_15 &= ((signed char) ((unsigned short) max(((unsigned short)65535), ((unsigned short)0))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_2 [i_1 + 2]))));
                var_17 -= ((/* implicit */short) 1632211308U);
                var_18 = ((/* implicit */signed char) arr_3 [i_0] [i_1 + 2]);
                var_19 = (signed char)(-127 - 1);
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                arr_11 [i_3] [i_1 + 3] [i_0 + 2] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1]))) : (min((((/* implicit */unsigned int) (short)18548)), (98304U))))), (min((((/* implicit */unsigned int) arr_8 [i_0 - 2] [i_1 + 1] [i_1 - 2])), (587826828U)))));
                arr_12 [(_Bool)1] [7] [(short)4] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_7 [i_3]))), (arr_0 [i_3]))), (((((/* implicit */_Bool) ((short) (short)-25528))) ? (arr_5 [i_0] [i_0 - 3] [i_0 + 2]) : (max((9223367638808264704ULL), (((/* implicit */unsigned long long int) (short)13427))))))));
                var_20 = ((/* implicit */_Bool) ((unsigned short) arr_5 [i_1 + 2] [i_0] [i_0 - 3]));
                var_21 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
            }
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) arr_2 [i_0 + 2])))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((short) ((unsigned long long int) arr_2 [i_0]))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((unsigned long long int) arr_7 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
            var_25 = ((/* implicit */short) 16061409102234723155ULL);
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2]);
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                arr_20 [i_0] [i_5] = ((/* implicit */unsigned int) arr_0 [(short)7]);
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [i_0 + 2]), (arr_14 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) 3212100725U)) : (min((((((/* implicit */_Bool) 3969993161U)) ? (arr_5 [i_5] [i_5] [i_5]) : (arr_15 [i_5]))), (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (_Bool)1))))))))))));
                arr_21 [i_0] [i_5] [i_5] [i_6] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)8128)), (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (signed char)-98))))))), (arr_5 [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 7; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 7; i_8 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (unsigned short)62497))));
                            arr_26 [i_8 + 2] [i_5] [i_7] [i_7] [i_6] [i_5] [i_0] = arr_2 [i_0];
                        }
                    } 
                } 
            }
            arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0 - 2]))) ? (min((((unsigned long long int) 4294967295U)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_5])) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_9 [i_5] [(short)2] [i_5] [i_0]))))))) : (13462390014095222728ULL)));
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_29 += ((/* implicit */signed char) min((arr_9 [i_0] [i_5] [i_9] [(unsigned short)3]), (((/* implicit */unsigned short) arr_3 [i_0 - 4] [i_0 + 1]))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (arr_15 [4ULL])));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    var_31 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_35 [i_0 + 2] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)108)) : (arr_8 [i_0 + 1] [i_0 - 4] [i_0]))), (((/* implicit */int) (signed char)42))));
                    arr_36 [i_0] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */short) max((max((123145302310912ULL), (((/* implicit */unsigned long long int) arr_16 [i_0 - 1])))), (min((arr_34 [i_10] [i_0 - 4] [i_10]), (arr_5 [i_0 + 1] [i_0 - 4] [i_0 - 1])))));
                    var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_22 [i_0] [i_0] [5ULL] [i_11])), (max((min((((/* implicit */unsigned int) (signed char)127)), (0U))), (arr_13 [i_0 - 1] [i_0])))));
                    var_33 ^= ((/* implicit */int) 10375885743554365563ULL);
                    arr_37 [i_11] [i_5] [i_5] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) arr_23 [i_0] [i_5] [i_10] [i_11])) ? (max((((/* implicit */unsigned int) arr_16 [i_0])), (4294967292U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_31 [i_10] [i_10] [i_10])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-10578)) : (((/* implicit */int) arr_1 [i_0 + 2]))))), (((((/* implicit */_Bool) 9223367638808264704ULL)) ? (9007199254740480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_10])))))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    arr_41 [i_10] [i_5] [i_12 - 1] [i_5] [i_5] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_12 + 1])) : (((/* implicit */int) (unsigned short)17542))));
                    arr_42 [i_0] [i_0] [i_10] [i_12 + 1] = ((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0 - 3] [i_12 - 1]);
                }
                for (unsigned short i_13 = 1; i_13 < 10; i_13 += 4) /* same iter space */
                {
                    var_34 &= ((/* implicit */unsigned long long int) max(((unsigned short)6144), (((/* implicit */unsigned short) (signed char)63))));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) 13683631452580848297ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) : (arr_39 [i_13] [i_13 + 1] [i_13] [i_13] [i_13 - 1] [i_13 - 1])));
                        var_36 = ((/* implicit */unsigned int) arr_34 [i_10] [i_5] [i_10]);
                        arr_47 [i_10] [i_10] [i_10] [i_10] [i_5] [i_10] = ((/* implicit */unsigned int) arr_15 [i_0]);
                        var_37 = ((/* implicit */unsigned int) min((9223367638808264703ULL), (((/* implicit */unsigned long long int) ((_Bool) (short)8188)))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 4) 
                {
                    arr_50 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0 - 2] [i_15 + 3])) ? (((/* implicit */int) arr_29 [i_0 - 2] [i_15 + 3])) : (((/* implicit */int) arr_29 [i_0 - 2] [i_15 + 3]))));
                    arr_51 [i_0] [i_10] [i_10] [i_0 - 2] = ((/* implicit */unsigned short) ((arr_43 [i_0 - 3] [i_15 - 1]) ? (((((/* implicit */_Bool) 13574731465002608643ULL)) ? (((/* implicit */unsigned long long int) arr_22 [i_15] [i_0] [i_5] [i_0])) : (9223367638808264697ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_30 [i_0 + 2] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) (unsigned short)48968)))))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                    {
                        var_38 += ((/* implicit */signed char) arr_45 [i_0] [i_0] [6ULL] [i_0] [i_17] [i_10] [i_17]);
                        var_39 = ((/* implicit */unsigned short) ((unsigned long long int) min((max((1152921504606846972ULL), (((/* implicit */unsigned long long int) 1927299640U)))), (min((4763112621128703319ULL), (((/* implicit */unsigned long long int) arr_19 [i_0 - 3] [6ULL] [6ULL])))))));
                        arr_56 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 4] [i_10] = ((/* implicit */unsigned short) max((max((min((arr_49 [i_0] [i_10] [(unsigned short)10] [i_0] [i_0] [i_0]), (9223367638808264711ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_44 [i_0] [i_10] [i_0]))))), (((/* implicit */unsigned long long int) (signed char)127))));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) 1294554540U))));
                        arr_57 [i_0] [i_10] [0] = ((unsigned short) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_40 [i_16] [i_10] [i_5] [i_0])) : (((/* implicit */int) arr_40 [i_17] [i_10] [i_0] [i_0])))) : (((int) arr_38 [i_10]))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0 + 2] [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_0 - 2])) : (((/* implicit */int) (unsigned short)256))));
                        arr_61 [i_0] [i_0] [i_10] [i_16] [i_18] = ((/* implicit */int) arr_32 [i_0 + 2] [i_0]);
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1455029496U)) ? (((/* implicit */int) arr_31 [i_10] [(unsigned short)0] [(unsigned short)0])) : (((/* implicit */int) (unsigned short)48968))));
                        arr_62 [i_18] [i_10] [i_18] = ((/* implicit */unsigned short) ((int) ((unsigned long long int) arr_9 [i_0] [i_0] [i_10] [i_10])));
                    }
                    for (short i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 4])) ? (((/* implicit */int) (unsigned short)62875)) : (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)117)))))))), (min((min((arr_19 [i_0] [i_0] [i_16]), (arr_58 [i_10] [i_5] [i_5] [i_16] [i_5]))), (((/* implicit */unsigned int) arr_32 [i_0 - 3] [i_16]))))));
                        var_44 = ((/* implicit */signed char) ((int) max((max((arr_22 [i_0 - 3] [i_5] [i_5] [i_0]), (((/* implicit */int) (unsigned short)12377)))), (((/* implicit */int) max((arr_30 [i_0] [i_5] [i_10]), (((/* implicit */short) (signed char)-43))))))));
                        var_45 = min((min((arr_18 [4ULL] [i_5] [i_0 - 3]), (arr_18 [i_16] [i_16] [i_0 - 1]))), (max((15376357132199426258ULL), (arr_18 [i_0] [i_0 - 4] [i_0 + 2]))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)65535)), (min((((int) arr_23 [i_0] [i_5] [i_10] [i_0])), (((/* implicit */int) arr_46 [i_0 - 3] [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))))))));
                        var_47 += ((/* implicit */unsigned int) min((arr_55 [i_20] [i_10] [i_5] [i_0]), (((/* implicit */short) (signed char)30))));
                        arr_69 [i_0] [5ULL] [i_10] [i_16] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)2047))) ? (3753936164U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 - 3] [i_5])))));
                        var_48 = ((/* implicit */unsigned int) min(((short)8192), (((short) (unsigned short)28646))));
                    }
                }
            }
            var_49 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_2 [i_5])), (arr_9 [(unsigned short)4] [1ULL] [i_0] [i_0])))), (((unsigned int) arr_29 [i_0 - 1] [6ULL]))))), (min((min((((/* implicit */unsigned long long int) arr_14 [i_0])), (18437736874454811122ULL))), (((unsigned long long int) arr_35 [i_0] [10ULL] [i_0 - 1] [i_0 - 1]))))));
        }
        for (signed char i_21 = 0; i_21 < 11; i_21 += 2) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned long long int) arr_40 [(short)6] [9U] [i_0] [i_21]);
            arr_73 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_43 [i_21] [i_0])), (arr_72 [i_0 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [(_Bool)1] [i_0 - 4] [i_0] [i_0 - 3]), (arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 2]))))) : (min((((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])), (1044102066U))));
            /* LoopSeq 3 */
            for (unsigned long long int i_22 = 3; i_22 < 8; i_22 += 4) 
            {
                arr_76 [(short)8] [i_21] [i_22] = ((/* implicit */unsigned short) ((short) arr_34 [i_0 - 1] [i_0 + 2] [i_22]));
                arr_77 [i_22] [i_22] [i_22] [i_22] = ((short) arr_0 [i_21]);
                arr_78 [i_0 + 2] [i_22] = ((/* implicit */int) min((max((min((((/* implicit */unsigned long long int) arr_23 [(short)4] [i_21] [i_21] [i_21])), (arr_15 [i_0 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_14 [(signed char)1])), (arr_17 [i_0] [i_0] [i_22] [i_0])))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_21])))));
                arr_79 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 66846720U)) ? (((((/* implicit */_Bool) max((2477984638U), (((/* implicit */unsigned int) arr_28 [i_0] [i_21] [2U]))))) ? (((/* implicit */int) ((short) arr_13 [i_0 - 1] [i_22 - 2]))) : (((/* implicit */int) arr_64 [0U] [i_22 + 1] [i_21] [i_21] [i_0])))) : (-1)));
            }
            for (unsigned long long int i_23 = 4; i_23 < 9; i_23 += 4) /* same iter space */
            {
                var_51 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((3049593192054780728ULL), (((((/* implicit */_Bool) arr_24 [i_0] [(_Bool)1] [i_0] [i_23] [i_0] [i_0 - 3] [i_21])) ? (arr_66 [8U] [i_23 + 2] [i_23] [(unsigned short)3] [i_0] [(unsigned short)3] [i_0]) : (arr_18 [i_0] [i_21] [i_23])))))) ? (((/* implicit */int) arr_16 [i_23 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 3] [i_23 - 4]))));
                arr_82 [i_21] [i_23] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_81 [i_0] [i_21] [i_23])) ? (((/* implicit */int) arr_32 [i_23 + 2] [i_0 - 3])) : (((/* implicit */int) (signed char)127))))), (min((arr_49 [i_0 - 4] [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) arr_38 [i_23]))))));
            }
            for (unsigned long long int i_24 = 4; i_24 < 9; i_24 += 4) /* same iter space */
            {
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((3966469999130775887ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_0])))))) ? (((((/* implicit */_Bool) 2477984607U)) ? (min((1364194698U), (((/* implicit */unsigned int) (short)(-32767 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_21] [i_21] [i_21] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_85 [9U] = ((/* implicit */_Bool) arr_33 [i_0] [i_0] [3U]);
            }
        }
        arr_86 [i_0 - 4] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_63 [i_0 - 1] [9] [i_0 - 4] [i_0] [i_0 - 4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2305843000623759360ULL)))) : (((((/* implicit */_Bool) 2477984589U)) ? (5430215406832802072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)10] [i_0 - 1] [(short)10]))))))));
    }
    var_53 = ((/* implicit */unsigned long long int) (unsigned short)4808);
    var_54 = ((/* implicit */signed char) var_7);
}
