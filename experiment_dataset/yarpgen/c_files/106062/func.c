/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106062
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */long long int) var_0);
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1] [i_0])) ? (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_3 [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_12 [i_4] [i_3 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_1] [i_0]));
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */int) arr_2 [i_1] [i_0])) >> (((((/* implicit */int) arr_2 [i_4] [i_2])) - (35981)))))));
                            var_20 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((9223372036854775807LL) - (9223372036854775789LL)))));
                            arr_13 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (~(arr_0 [i_3 - 1])));
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned short) ((int) (signed char)127));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned char) (+(arr_7 [i_1] [i_0])));
        }
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_9))) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_0])))));
            var_23 |= max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (var_11)))), (min((((/* implicit */unsigned long long int) (unsigned short)42115)), (arr_0 [i_0]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_24 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)61440)) ? (-142894536) : (((/* implicit */int) var_1)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (15590654710352830834ULL))))));
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) var_15)));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned short)61437))))) ? ((+(var_6))) : (((6791236386081339674LL) | (var_6)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) arr_16 [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            arr_36 [i_12] [i_12] [i_11] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_6 [i_10] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_6]))) : (arr_5 [i_12] [i_11] [i_6] [i_0])));
                            arr_37 [(unsigned char)7] [i_10] [i_6] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_19 [i_11] [i_6] [i_0]));
                        }
                    }
                } 
            } 
        }
    }
    for (short i_13 = 4; i_13 < 9; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_46 [i_13] [i_13] = ((/* implicit */signed char) ((((long long int) (((_Bool)1) ? (2251731094208512ULL) : (5128564289261297996ULL)))) ^ (((/* implicit */long long int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        for (long long int i_17 = 2; i_17 < 8; i_17 += 3) 
                        {
                            {
                                arr_52 [i_17] [i_13] [i_15] [i_13] [i_13] = ((/* implicit */short) var_14);
                                arr_53 [i_17] [i_16] [i_13] [i_14] [i_13 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)134))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) ((unsigned long long int) (unsigned char)116));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((unsigned short) var_9))), (arr_32 [i_13 + 2] [i_13 - 1] [i_13] [i_13 + 2]))), (((/* implicit */long long int) ((unsigned char) (_Bool)0)))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 10; i_18 += 3) 
    {
        arr_57 [i_18] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) | ((~(-6791236386081339674LL)))));
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned char)122))));
        var_31 -= ((/* implicit */unsigned int) ((((var_15) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (13722)))));
    }
    var_32 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    for (unsigned char i_19 = 1; i_19 < 19; i_19 += 3) 
    {
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (~(((unsigned long long int) (short)12901)))))));
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_19 - 1])))))) | (((((/* implicit */_Bool) arr_58 [i_19 + 1])) ? (((/* implicit */int) arr_59 [i_19 + 1])) : (((/* implicit */int) arr_59 [i_19 - 1])))))))));
        var_35 = ((/* implicit */unsigned long long int) 3175515916U);
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (max((var_11), (var_3))) : (((((/* implicit */_Bool) 9154207855401507060ULL)) ? (3615302848699964421ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133)))))))) ? (((/* implicit */int) var_0)) : (max((((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)-107)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [(short)15])))))))));
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((long long int) arr_9 [i_20] [i_20] [i_20])) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_20] [i_20]))))))));
        var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */int) var_2))))) ^ (((9154207855401507049ULL) << (((9223372036854775807LL) - (9223372036854775754LL)))))));
        /* LoopSeq 3 */
        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
        {
            arr_65 [i_21] [i_20] = ((/* implicit */unsigned char) ((signed char) arr_19 [4LL] [4LL] [i_20]));
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((var_5) + (2147483647))) << (((((((/* implicit */int) arr_17 [i_21] [i_21] [i_20])) ^ (((/* implicit */int) var_2)))) - (237))))))));
        }
        for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
        {
            arr_70 [i_22] [(signed char)4] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_20])) ? (((/* implicit */int) arr_22 [i_22] [i_20])) : (((/* implicit */int) arr_22 [i_22] [i_20]))));
            var_40 = ((/* implicit */unsigned char) ((arr_61 [i_20] [i_20]) ? (((/* implicit */int) arr_61 [i_22] [i_20])) : (((/* implicit */int) arr_61 [i_22] [i_20]))));
            var_41 = ((/* implicit */_Bool) var_13);
            var_42 = ((/* implicit */_Bool) (~(arr_10 [i_20] [i_20] [i_20] [i_20])));
        }
        for (unsigned char i_23 = 0; i_23 < 12; i_23 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                arr_76 [i_23] [i_20] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_0)))));
                var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) var_16))));
            }
            arr_77 [i_23] |= ((/* implicit */signed char) (+(((long long int) 463436099))));
        }
        arr_78 [i_20] [i_20] = ((/* implicit */int) var_4);
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_67 [i_25])) : (((/* implicit */int) arr_67 [i_25])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) == (((/* implicit */int) var_0)))))));
        /* LoopNest 3 */
        for (int i_26 = 1; i_26 < 10; i_26 += 3) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 4) 
            {
                for (unsigned char i_28 = 1; i_28 < 10; i_28 += 2) 
                {
                    {
                        var_45 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)16)) & ((~(((/* implicit */int) (signed char)-98))))))), (15294177423413910204ULL)));
                        var_46 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (arr_35 [i_28] [i_27] [i_25] [i_25] [i_26] [i_25])))) ? (((/* implicit */int) arr_66 [i_28] [i_27] [i_26])) : (((/* implicit */int) arr_74 [i_28 + 1] [i_26] [i_25])))), (((/* implicit */int) arr_69 [(unsigned char)11] [i_25]))));
                        arr_92 [i_28] [i_28] [i_27] [i_27] [i_26] [i_25] = ((((/* implicit */int) (signed char)19)) | (1963939638));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_29 = 2; i_29 < 11; i_29 += 1) /* same iter space */
        {
            var_47 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_60 [i_29])) / (((/* implicit */int) arr_66 [i_29 - 1] [i_29] [i_25])))))))));
            var_48 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2739164199788987074LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-125)))) | (((arr_9 [i_29] [i_29] [i_25]) >> (((/* implicit */int) (_Bool)0))))));
            var_49 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_59 [i_29 + 1]))));
            var_50 += min((((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_29 [i_29 + 1] [i_29 - 1])) - (83)))))), (((((((((/* implicit */_Bool) 6791236386081339674LL)) ? (-6791236386081339674LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))))) + (9223372036854775807LL))) >> (((9154207855401507060ULL) - (9154207855401507000ULL))))));
        }
        /* vectorizable */
        for (int i_30 = 2; i_30 < 11; i_30 += 1) /* same iter space */
        {
            var_51 = ((/* implicit */short) ((arr_93 [i_25]) * (((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_0)))))));
            var_52 = ((/* implicit */unsigned long long int) var_12);
            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_80 [i_30] [i_25])) : (((/* implicit */int) var_10))));
            /* LoopSeq 2 */
            for (long long int i_31 = 0; i_31 < 12; i_31 += 3) 
            {
                arr_101 [i_31] [i_30] [(unsigned short)6] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_11) : (((/* implicit */unsigned long long int) arr_86 [i_30 + 1] [i_30 - 1] [i_30 - 2]))));
                arr_102 [3LL] [i_31] [i_31] [i_25] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)133))));
                var_54 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)24872)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_4))));
                var_55 = ((/* implicit */unsigned char) (-(arr_3 [i_25] [i_25])));
            }
            for (unsigned long long int i_32 = 0; i_32 < 12; i_32 += 3) 
            {
                var_56 += ((/* implicit */signed char) ((arr_87 [i_30 - 1] [i_30 + 1] [i_30] [i_30 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_8))))))));
                var_57 = (!(((/* implicit */_Bool) ((arr_23 [i_32] [i_32] [i_30 + 1] [i_25] [i_25]) << (((var_14) - (4675878949450401331LL)))))));
            }
            var_58 = ((/* implicit */unsigned short) ((((-1902314840) + (2147483647))) >> (((((/* implicit */int) (short)-21019)) + (21044)))));
        }
    }
    /* vectorizable */
    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
    {
        arr_107 [i_33] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (_Bool)0))));
        var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_33] [8ULL] [i_33])) ? (((/* implicit */int) arr_17 [i_33] [(unsigned char)12] [i_33])) : (((/* implicit */int) arr_17 [i_33] [0ULL] [i_33]))));
        arr_108 [i_33] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_20 [i_33]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)61440)))))));
        var_60 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (4798472384569133174ULL)))));
    }
}
