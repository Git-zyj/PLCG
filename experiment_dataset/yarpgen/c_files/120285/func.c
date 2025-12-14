/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120285
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
    var_10 = ((/* implicit */int) var_5);
    var_11 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (-(18410715276690587648ULL)))) ? (min((((/* implicit */long long int) var_5)), (var_2))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [5U] [i_3] [i_0] [5U] = ((/* implicit */long long int) (-(((/* implicit */int) ((min((((/* implicit */long long int) (signed char)125)), (var_1))) != (((/* implicit */long long int) 2280315950U)))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_3] [i_0 + 1] [(short)4] = min((232300656U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [8])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_4 - 1]))))));
                            arr_14 [i_0] [i_1] [i_3] [i_3] [i_4 + 3] = arr_6 [i_0] [i_0 - 1];
                            var_12 |= (+(min((232300656U), (arr_8 [i_3] [2LL] [i_4 + 1] [2LL]))));
                            var_13 |= ((/* implicit */unsigned int) (-(max((arr_5 [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [7LL] [i_0 + 1])) ? (arr_3 [9ULL] [i_1]) : (arr_1 [i_3] [i_1]))))))));
                            var_14 = ((/* implicit */signed char) var_7);
                        }
                        arr_15 [i_0] [(signed char)6] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) var_0)), (232300656U))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) < (4062666639U)))))) : (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
            {
                arr_21 [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18410715276690587648ULL)) ? (((((/* implicit */int) arr_12 [i_6] [i_5] [i_6] [i_0 - 2] [i_0])) & (((/* implicit */int) (signed char)125)))) : (var_0)))), (((arr_5 [i_0] [i_0]) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 2]))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned int) (signed char)-126)))));
                            arr_28 [i_0] [i_6] = (signed char)127;
                            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) 232300657U)), (arr_19 [i_0] [i_0] [i_0] [i_8 + 1]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) > (arr_16 [i_8] [i_7])))))))) && (((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) max((232300636U), (232300656U))))))));
                            arr_29 [i_6] [i_6] [i_6] [i_6] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((232300656U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8] [i_7] [i_6] [i_5]))))), (((unsigned int) 9223372036854775807LL))))) ? (((((/* implicit */_Bool) (-(arr_27 [i_7] [i_6] [i_7] [i_7] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (arr_27 [i_0] [i_6] [i_6] [i_8] [i_6]))) : (((((/* implicit */long long int) 232300636U)) ^ (min((arr_20 [2ULL] [i_7] [(_Bool)1]), (((/* implicit */long long int) var_0))))))));
                        }
                    } 
                } 
            }
            for (short i_9 = 1; i_9 < 9; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 6; i_10 += 2) 
                {
                    for (long long int i_11 = 4; i_11 < 7; i_11 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned int) ((signed char) arr_8 [i_0] [i_9 + 1] [i_10 + 2] [i_11]));
                            arr_39 [i_0] [i_5] [5U] [i_10 + 4] [i_5] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4062666659U)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned char)231))))) & (min((2719352720420128433ULL), (15727391353289423178ULL))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) (-(4062666659U)))) + (min((((/* implicit */unsigned long long int) (unsigned char)25)), (arr_9 [i_0] [(unsigned char)0] [i_10] [i_9] [i_0] [i_0]))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_6), (arr_11 [i_9 + 1] [i_0 - 1])))), ((-(((/* implicit */int) arr_11 [i_9 + 1] [i_0 + 1]))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_12 = 1; i_12 < 8; i_12 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 1; i_13 < 7; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) var_5);
                            var_22 = ((/* implicit */short) arr_35 [i_5] [i_12] [i_12] [i_12 - 1] [5ULL] [i_12 + 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_15 = 2; i_15 < 9; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        {
                            arr_52 [i_0] |= ((/* implicit */signed char) var_5);
                            arr_53 [i_5] [i_5] [i_5] [(signed char)3] [i_12] [(short)9] [(short)9] = ((/* implicit */long long int) ((unsigned int) var_0));
                            var_23 = ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    arr_57 [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_5] [i_12] [4U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10)))))) ? ((-(((/* implicit */int) var_8)))) : (arr_48 [i_0] [i_0] [2ULL] [i_17] [i_12 + 1])));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (var_9) : (((/* implicit */long long int) 433505643U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((-(arr_30 [i_0] [i_5] [i_5])))));
                }
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    arr_60 [i_12] [i_5] [i_5] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((unsigned char) (unsigned char)24));
                    arr_61 [i_0 + 1] [i_18] [i_18] [i_18] |= ((/* implicit */unsigned long long int) var_6);
                    arr_62 [i_0] [i_5] [i_5] [i_12] [i_12] [(short)2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)203)) / (((/* implicit */int) (short)(-32767 - 1)))));
                }
                for (signed char i_19 = 4; i_19 < 7; i_19 += 1) 
                {
                    arr_65 [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_46 [3U] [3LL] [i_12 - 1] [i_12] [i_12]))));
                    arr_66 [i_12] = ((/* implicit */int) (+(((long long int) (signed char)58))));
                }
            }
            for (unsigned char i_20 = 1; i_20 < 8; i_20 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)232))))), (((((/* implicit */long long int) arr_18 [i_20 + 2] [i_20 + 2] [i_0 - 2] [(signed char)7])) / (arr_68 [i_20] [i_20 - 1] [i_20 + 1])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                {
                    var_26 |= ((/* implicit */signed char) arr_4 [9U] [9U] [i_21]);
                    var_27 |= min((2719352720420128424ULL), (((/* implicit */unsigned long long int) (signed char)-79)));
                    arr_72 [i_20] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_0] [i_5] [i_5] [i_5] [2])) ? (arr_25 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167)))))) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_69 [i_0] [i_5] [i_20] [i_20]), (((/* implicit */short) (unsigned char)230)))))))), ((-((~(var_7)))))));
                    arr_73 [i_5] [i_20] [9ULL] [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) < (2719352720420128433ULL))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_17 [i_0] [i_0] [i_0])))) ? (((unsigned int) arr_63 [i_0 + 1] [i_0] [0U] [i_0] [i_0])) : ((-(arr_26 [i_20] [i_5] [1U] [i_0 + 1] [i_0])))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) /* same iter space */
                {
                    arr_77 [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                    var_28 -= ((/* implicit */signed char) (unsigned char)52);
                    arr_78 [i_20] = (i_20 % 2 == 0) ? (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [i_0] [i_5] [(short)5] [i_5] [5U])), (arr_16 [i_20 - 1] [i_0 + 1]))) << (((((((/* implicit */_Bool) arr_75 [i_0] [i_0] [i_20] [i_22])) ? (((long long int) arr_41 [i_20] [i_20] [i_5] [i_20])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)44))) >= (9223372036854775807LL))))))) - (1480172390LL)))))) : (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [i_0] [i_5] [(short)5] [i_5] [5U])), (arr_16 [i_20 - 1] [i_0 + 1]))) << (((((((((/* implicit */_Bool) arr_75 [i_0] [i_0] [i_20] [i_22])) ? (((long long int) arr_41 [i_20] [i_20] [i_5] [i_20])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)44))) >= (9223372036854775807LL))))))) - (1480172390LL))) - (1661243523LL))))));
                }
            }
        }
        for (long long int i_23 = 0; i_23 < 10; i_23 += 4) /* same iter space */
        {
            var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_58 [8] [i_0] [i_0 - 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25)))))) ? (((unsigned int) var_5)) : (((((/* implicit */_Bool) ((signed char) 763638522024896579ULL))) ? ((~(arr_23 [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_70 [i_0] [i_23] [i_0] [i_0] [i_0])))))))));
            arr_81 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_67 [i_0] [i_23] [i_0])) & (arr_34 [i_0 - 1] [i_0] [i_23] [i_0]))) ^ (((/* implicit */long long int) max((arr_30 [i_0 + 1] [i_0 + 1] [i_23]), (((/* implicit */unsigned int) arr_67 [i_0] [4U] [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 10; i_24 += 2) 
            {
                var_30 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)7))))));
                arr_85 [1LL] [1LL] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 17683105551684655037ULL)) ? (((/* implicit */long long int) 1251758855U)) : (9223372036854775807LL))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_0] [i_23] [i_23] [i_23]))))), (arr_84 [i_0 - 2] [i_23] [i_23] [i_23]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [0U] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_23] [4ULL])))));
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    for (int i_26 = 0; i_26 < 10; i_26 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (232300656U)))), (((((/* implicit */_Bool) 763638522024896579ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_26] [i_23]))) : (-4294967296LL)))))), (min((((((/* implicit */_Bool) arr_1 [i_25] [i_25])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (763638522024896579ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))));
                            arr_90 [i_0] [i_23] [i_24] [i_23] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) (signed char)-100))), (-9223372036854775797LL)))), (arr_5 [i_23] [9ULL])));
                            var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-9223372036854775787LL)))) ? ((+(((((/* implicit */_Bool) arr_2 [6LL] [6LL] [6LL])) ? (-9223372036854775787LL) : (((/* implicit */long long int) arr_44 [i_23] [i_24])))))) : ((((((((+((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((9223372036854775807LL) - (9223372036854775744LL)))))));
                            var_33 = ((/* implicit */signed char) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((short) -9223372036854775781LL)))))));
                            var_34 -= ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                var_35 |= ((/* implicit */int) min((((/* implicit */unsigned int) ((short) (signed char)-11))), (2221704275U)));
                arr_91 [i_0] [i_23] [i_23] = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_2)) ? (arr_17 [(_Bool)1] [i_23] [i_24]) : (((/* implicit */unsigned long long int) arr_3 [i_24] [i_23])))), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        }
        for (unsigned char i_27 = 0; i_27 < 10; i_27 += 2) 
        {
            arr_95 [i_27] = ((/* implicit */long long int) (((-(((239225373U) ^ (232300656U))))) != (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_4))))) ? (((1755336100U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_27] [i_27] [i_27] [i_27] [i_0] [i_0 - 2] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_28 = 2; i_28 < 7; i_28 += 2) 
            {
                var_36 = arr_31 [i_0] [i_27] [i_0 + 1] [i_28 - 2];
                arr_100 [i_0] = ((/* implicit */unsigned int) var_6);
                arr_101 [i_28] [i_27] [i_28] = ((/* implicit */long long int) ((((unsigned int) var_9)) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [i_27] [i_27] [i_28] [i_28 - 1])))))));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_28]))) / (arr_44 [i_0 - 2] [i_28 + 3])));
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_51 [(short)8] [i_27] [(short)8] [i_28 + 3] [8] [i_28 - 1] [8]))) % (((((/* implicit */_Bool) arr_59 [i_0] [i_27] [i_0] [i_28 - 1])) ? (9223372036854775807LL) : (((/* implicit */long long int) 4062666642U)))))))));
            }
        }
    }
}
