/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166757
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) var_0))))) ? (((var_12) - (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) (+(3622340288U))))))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_14) < (var_8)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_5 [i_1]))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_7 [i_0 - 1] [(_Bool)1] [(_Bool)1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)4]))))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_22 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)72))));
                arr_10 [(unsigned short)8] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) * (var_17)));
            }
            for (unsigned short i_3 = 4; i_3 < 23; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) (_Bool)1);
                arr_13 [i_1] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2057804420U)) ? (2237162894U) : (((/* implicit */unsigned int) 1882826211)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                var_24 = ((/* implicit */signed char) var_11);
            }
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
            {
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_0 - 1] [i_1] [(_Bool)1] [i_1] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_5 - 1] [i_4] [i_5])) : (((/* implicit */int) (signed char)-56))));
                    var_26 = ((/* implicit */_Bool) (+(var_7)));
                }
                for (signed char i_6 = 1; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) var_12);
                    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)18)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6 - 1] [i_0 - 1] [i_0 - 1]))))) - (((/* implicit */unsigned long long int) var_17))));
                }
            }
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
            {
                arr_26 [i_1] [i_1] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_7])) || (((/* implicit */_Bool) 0ULL))))));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)35134))))) : ((+(var_8))))))));
                var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_16)))))) : (arr_22 [i_0] [16] [i_0] [i_0] [i_0])));
                arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)38107)) ? (((/* implicit */unsigned int) 8323072)) : (var_15)));
            }
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~((+(var_0))))))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 3; i_8 < 23; i_8 += 4) 
        {
            var_32 &= ((/* implicit */unsigned int) 5276468912806700652ULL);
            arr_31 [i_0] [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) ((var_17) / (arr_4 [i_8 - 1] [i_0 - 1])));
            arr_32 [i_0] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_0 - 1]))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            var_33 = ((/* implicit */_Bool) min((((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4191271024U)) || (((/* implicit */_Bool) arr_12 [i_0] [i_9] [i_9])))))) : (var_15))), (((/* implicit */unsigned int) arr_36 [(unsigned short)0] [i_9]))));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                var_34 = ((/* implicit */signed char) ((unsigned int) max((min((arr_39 [i_0] [i_9] [i_10]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_20 [i_0 + 1] [i_10]))))))));
                arr_40 [i_10] [i_9] [i_0] = ((/* implicit */_Bool) (unsigned char)106);
                arr_41 [i_10] [i_9] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((short) arr_20 [8] [i_10])))))));
            }
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                var_35 = ((/* implicit */unsigned short) ((signed char) (signed char)119));
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (short)15922))))))));
                arr_45 [i_9] [17ULL] [i_11] = max((var_7), (((/* implicit */int) (signed char)24)));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_48 [i_12] [i_9] [i_0] = ((/* implicit */unsigned int) var_13);
                arr_49 [i_0] [i_9] [i_12] = ((/* implicit */short) ((-1161738627) / (2051508120)));
                arr_50 [i_0] [i_9] [i_12] [i_12] = ((/* implicit */unsigned char) -8323074);
                arr_51 [(unsigned char)18] [i_9] = ((/* implicit */_Bool) var_3);
            }
            var_37 = ((/* implicit */_Bool) var_13);
            var_38 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((signed char)122), ((signed char)21)))), (max((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])), (arr_29 [i_0 + 1])))));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 1) 
        {
            var_39 = (!(((/* implicit */_Bool) var_10)));
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    var_40 = ((/* implicit */unsigned char) var_9);
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0 - 1])) ? (arr_29 [i_15]) : (((/* implicit */unsigned long long int) arr_30 [i_0 - 1]))));
                    arr_59 [i_0] [i_0] [i_14] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2051508107)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_22 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_15] [i_0 - 1])));
                }
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) arr_5 [(_Bool)1]))));
                    arr_64 [i_0] [i_14] [i_0] = ((/* implicit */signed char) 8323072);
                }
                /* LoopSeq 4 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    var_43 += ((/* implicit */unsigned int) (signed char)127);
                    arr_67 [i_17] [i_14] [i_14] [i_13] [i_14] [i_0] = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) (signed char)21);
                        var_45 = arr_53 [i_13] [i_18];
                    }
                }
                for (int i_19 = 1; i_19 < 20; i_19 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) ((-1161738627) * (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_33 [i_0]))))));
                        var_47 ^= ((/* implicit */unsigned short) (signed char)119);
                        arr_75 [i_14] [i_19] [i_14] [17U] [17U] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_68 [i_0] [i_13] [i_14] [i_19] [i_14] [i_20]))))));
                        var_48 &= ((/* implicit */unsigned long long int) ((((long long int) 1808555300)) >> ((((~(var_11))) - (371391114U)))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) /* same iter space */
                    {
                        var_49 = (((~(arr_74 [(signed char)8] [i_13] [i_14]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)127)))))));
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_14] [8] [i_14])) ? (arr_1 [i_0 - 1]) : (var_12)));
                    }
                    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((arr_42 [i_19 + 4] [i_13 + 1] [i_0 + 1]) << (((arr_42 [i_19 - 1] [i_13 + 2] [i_0 + 1]) - (2343738757U))))))));
                        var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_54 [i_14] [i_13]) & (((/* implicit */int) arr_14 [i_14]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                    }
                    arr_81 [i_14] [i_14] [i_19] = ((/* implicit */signed char) (+(3953563353U)));
                    var_53 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
                }
                for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    arr_84 [i_14] [i_14] [i_13] [i_14] [i_23] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) | (3236910782U)));
                    var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) -465614842)) ^ (var_14)))) ? (((((/* implicit */int) (unsigned char)155)) * (8323072))) : (((((/* implicit */_Bool) var_12)) ? (-1161738627) : (((/* implicit */int) (unsigned char)96))))));
                    var_55 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)41)))) : (((var_1) ? (-8323072) : (((/* implicit */int) (short)32767))))));
                    var_56 = ((/* implicit */unsigned short) (((((~(var_8))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_0])))))));
                }
                for (unsigned int i_24 = 0; i_24 < 24; i_24 += 2) 
                {
                    var_57 = ((/* implicit */signed char) arr_87 [i_0] [i_0 + 1] [i_0 + 1] [i_13] [i_13 + 2]);
                    /* LoopSeq 2 */
                    for (long long int i_25 = 0; i_25 < 24; i_25 += 3) 
                    {
                        arr_90 [i_0] [i_13 + 3] [i_14] [i_13 + 3] [i_25] [i_24] [i_25] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_2 [i_0]) << (((var_6) - (272994731U)))))) | (arr_58 [i_24] [i_13] [i_13 + 1] [i_0 + 1] [i_0 - 1] [i_24])));
                        var_58 = ((/* implicit */unsigned int) var_16);
                    }
                    for (unsigned short i_26 = 0; i_26 < 24; i_26 += 3) 
                    {
                        arr_93 [i_0] [i_0] [i_13 + 3] [i_14] [i_14] [i_26] = ((/* implicit */long long int) (signed char)20);
                        arr_94 [i_0] [i_14] [i_14] [15U] [i_14] [i_14] = ((/* implicit */int) ((unsigned short) 8323049));
                        var_59 *= ((/* implicit */unsigned long long int) arr_78 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]);
                    }
                    arr_95 [i_14] = ((/* implicit */int) var_0);
                }
            }
            var_60 = ((/* implicit */unsigned char) (+(((var_13) - (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_0] [i_0] [i_0 + 1] [i_0] [i_13] [i_13])))))));
        }
        arr_96 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)64102)) == (((/* implicit */int) var_1)))))) ? ((~((+(((/* implicit */int) (unsigned short)46946)))))) : (((/* implicit */int) var_10)));
        var_61 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_14)) : (((unsigned long long int) arr_12 [i_0] [i_0] [i_0]))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
        var_62 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (signed char)-124)), (var_17))), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_11))))))));
    }
    for (long long int i_27 = 4; i_27 < 19; i_27 += 1) 
    {
        var_63 = ((/* implicit */signed char) var_2);
        arr_101 [i_27] = ((/* implicit */unsigned char) arr_68 [i_27 - 2] [i_27] [i_27 - 2] [i_27] [i_27 - 2] [i_27 - 4]);
        arr_102 [i_27 - 3] [i_27] = ((/* implicit */unsigned int) var_12);
    }
    for (long long int i_28 = 1; i_28 < 12; i_28 += 3) 
    {
        var_64 ^= ((/* implicit */unsigned int) max((-8323094), (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_28] [i_28] [i_28])))))));
        var_65 = ((/* implicit */unsigned short) max((var_65), (((unsigned short) ((arr_39 [i_28 - 1] [i_28] [i_28 - 1]) / (arr_52 [i_28 - 1] [i_28 - 1] [i_28 + 1]))))));
    }
}
