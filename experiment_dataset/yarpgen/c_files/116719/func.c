/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116719
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_20 -= ((/* implicit */unsigned long long int) var_15);
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) <= (((/* implicit */int) arr_4 [i_0 + 2]))))) ^ (((/* implicit */int) arr_3 [(_Bool)1] [i_1 - 1] [(_Bool)1])))))));
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1143038535U)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (signed char)91))));
        }
        for (signed char i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (_Bool)1))))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)4] [i_2 - 1] [i_2 + 1]))) : (arr_7 [i_0]))), (((/* implicit */long long int) max((arr_3 [6LL] [i_2] [i_2 + 1]), (((/* implicit */unsigned char) var_1))))))))))));
            var_23 += ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_0 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0])))) * (max((((/* implicit */int) arr_3 [(unsigned short)2] [(unsigned short)2] [i_2])), (-340738956)))))) - (((long long int) (+(arr_6 [i_0] [i_2] [i_2]))))));
            var_24 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned short) max((arr_4 [i_2 + 1]), (arr_4 [i_2 + 1]))))));
        }
        for (long long int i_3 = 4; i_3 < 8; i_3 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_2 [i_0]))));
            var_25 = ((/* implicit */long long int) (_Bool)1);
        }
        arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [10ULL] [10ULL] [i_0 + 1])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_1)) != (((/* implicit */int) var_13))))))) : (((int) var_2))));
        var_26 = ((/* implicit */short) max(((signed char)-79), (((/* implicit */signed char) (_Bool)1))));
    }
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            arr_21 [i_4 - 1] [i_4 - 1] [i_5] = arr_15 [i_4 - 1] [i_5];
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_8 [i_4 - 1] [i_5] [i_4 - 1]))))) ? (arr_2 [i_5]) : (((/* implicit */long long int) ((((/* implicit */int) var_18)) - (arr_14 [i_5]))))));
            arr_22 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((2147483647) - (((/* implicit */int) arr_3 [(signed char)8] [(signed char)8] [(signed char)8]))))) / ((-(132120576U)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) arr_7 [i_4]);
                var_29 = (((((~(((/* implicit */int) var_0)))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)));
            }
            for (unsigned char i_7 = 4; i_7 < 11; i_7 += 1) 
            {
                arr_29 [i_7 - 1] [i_7 - 1] [i_4] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_12)))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_7 - 3] [i_4 + 2] [i_4])) && (((/* implicit */_Bool) arr_8 [i_7 + 1] [i_4 + 2] [i_4]))));
            }
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                arr_32 [i_4] [i_5] [3ULL] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                arr_33 [i_4 + 2] [i_5] [i_5] [i_8] = ((/* implicit */short) var_3);
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned int i_10 = 4; i_10 < 9; i_10 += 4) 
                    {
                        {
                            var_31 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) ^ (arr_2 [i_4 + 1])));
                            arr_41 [i_5] = ((/* implicit */signed char) var_12);
                            arr_42 [i_4 - 1] [i_5] [i_5] [5U] [5U] = ((/* implicit */_Bool) (+(844606310U)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) ((unsigned char) 4128730902U));
                    arr_45 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_11] [i_4 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 1083428672928419326ULL)) || (((/* implicit */_Bool) arr_19 [i_8] [i_11]))))) : (((/* implicit */int) arr_36 [i_4 + 2] [3LL] [(signed char)11] [i_4 + 2] [i_4]))));
                }
                for (signed char i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                {
                    var_33 += ((/* implicit */short) (~(3046410450516843996ULL)));
                    arr_48 [i_4 + 1] [i_4 + 2] [i_5] [i_8] [i_12] [i_12] = ((/* implicit */long long int) var_12);
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 8; i_13 += 4) 
                    {
                        var_34 = ((/* implicit */int) (unsigned short)26);
                        var_35 &= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)44)) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8))))));
                    }
                    arr_51 [i_4 + 2] [i_5] [i_5] [i_12] = ((/* implicit */signed char) ((arr_13 [i_4 - 1]) / (arr_49 [i_4 - 1] [i_5] [i_8] [9] [9])));
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_35 [i_4 + 1])));
                    var_37 = ((((/* implicit */_Bool) arr_37 [i_4 + 2] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_34 [i_4 - 1])));
                    arr_54 [i_4 - 1] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)58978))));
                    var_38 &= ((/* implicit */unsigned char) (((!(arr_46 [i_14] [i_5] [i_4]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    arr_57 [i_4] [i_5] [i_8] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_16)) : (var_14)))));
                    var_39 = ((/* implicit */_Bool) ((((long long int) (unsigned char)142)) | (((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))));
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1411472563)) ? (6742631435787364092ULL) : (((/* implicit */unsigned long long int) -3513041258740930419LL))))) ? (((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1] [2U])) : (((((/* implicit */int) arr_25 [i_4] [i_5] [i_8] [i_15])) & (((/* implicit */int) var_3))))));
                }
                for (short i_16 = 1; i_16 < 10; i_16 += 2) 
                {
                    var_41 = ((/* implicit */_Bool) 4162846720U);
                    arr_62 [i_4] [i_5] [i_8] [i_8] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (((10642176181418693400ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    var_42 = ((/* implicit */short) ((arr_6 [i_4] [i_4 + 1] [i_16 + 1]) + (((/* implicit */unsigned long long int) arr_53 [i_16] [i_16] [i_16 + 2] [i_16]))));
                    var_43 = ((/* implicit */int) var_18);
                }
            }
            var_44 ^= ((/* implicit */unsigned int) (~(17363315400781132290ULL)));
        }
        for (signed char i_17 = 1; i_17 < 11; i_17 += 1) 
        {
            arr_65 [i_4] [i_17 - 1] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4162846718U)) != (4463695188062417853ULL)));
            var_45 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((var_12) <= (((/* implicit */int) arr_47 [i_4] [i_4] [i_4] [i_4]))))))) << (((((max((1332387743U), (132120576U))) + (2616745457U))) - (3949133191U)))));
            arr_66 [i_4 + 1] = (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_4] [i_4] [i_17] [i_17 + 1] [i_17 + 1] [i_17]))) : (arr_58 [6] [i_17 + 1] [i_17] [i_4] [i_17])))) : (arr_16 [i_4 + 2]))));
            var_46 = ((/* implicit */signed char) arr_6 [i_4] [i_17] [i_17]);
        }
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 9; i_18 += 4) 
        {
            for (signed char i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                {
                    arr_74 [i_4 + 2] [i_18 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_44 [i_18] [i_18] [i_18 - 1] [i_18 + 3]) >> (((((/* implicit */int) arr_50 [i_18] [i_18] [i_18 + 2] [i_18 + 1] [i_18 + 1] [i_18 - 1])) - (37)))))) ? (((((/* implicit */_Bool) 10642176181418693405ULL)) ? (10642176181418693409ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))))) : (((/* implicit */unsigned long long int) (+(arr_44 [i_18 + 3] [i_18 + 3] [i_18 - 1] [i_18 - 1]))))));
                    arr_75 [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_15 [i_4 - 1] [i_4 - 1]))) && (((((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) < (-1LL)))));
                    var_47 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_70 [i_4] [(unsigned char)10] [i_19])) | (((/* implicit */int) max(((short)14986), ((short)9256))))))), (((long long int) arr_15 [i_18 - 2] [i_4 + 1]))));
                }
            } 
        } 
        var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((unsigned short) 2147483647)))));
        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_58 [(unsigned char)2] [i_4 + 2] [i_4 + 2] [i_4 + 1] [(unsigned char)2])))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_47 [i_4] [i_4 + 2] [i_4] [i_4]))))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_30 [i_4 + 2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) <= (arr_39 [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4] [i_4] [(short)6]))))) * (((((/* implicit */_Bool) -6041808798232773335LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (7804567892290858215ULL)))))));
    }
    /* vectorizable */
    for (unsigned char i_20 = 1; i_20 < 10; i_20 += 1) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -842090603)) ? (var_19) : (((/* implicit */unsigned long long int) var_2))))));
        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (arr_9 [i_20 + 2] [6ULL] [i_20 - 1]) : (((/* implicit */unsigned long long int) arr_59 [i_20 + 1] [i_20 - 1]))));
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 12; i_21 += 1) 
        {
            arr_83 [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (5285167261421946183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            var_52 = ((/* implicit */_Bool) var_6);
            arr_84 [i_20] [i_20] = ((/* implicit */_Bool) 18446744073709551615ULL);
            /* LoopSeq 3 */
            for (unsigned long long int i_22 = 4; i_22 < 10; i_22 += 2) /* same iter space */
            {
                arr_87 [i_20] [i_21] [i_20] = ((/* implicit */long long int) arr_70 [i_20 + 1] [i_21] [i_22]);
                arr_88 [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_20 + 2]))));
                arr_89 [i_20 + 2] [i_20] [i_21] = ((/* implicit */short) (~(3133041654U)));
                var_53 = ((/* implicit */signed char) arr_70 [i_20 + 1] [i_21] [i_22]);
            }
            for (unsigned long long int i_23 = 4; i_23 < 10; i_23 += 2) /* same iter space */
            {
                var_54 = ((/* implicit */unsigned long long int) 0U);
                var_55 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) arr_2 [i_20 - 1])));
            }
            for (int i_24 = 0; i_24 < 12; i_24 += 4) 
            {
                var_56 = ((/* implicit */short) var_0);
                var_57 *= ((/* implicit */unsigned long long int) ((int) var_5));
                var_58 += ((/* implicit */_Bool) ((((arr_64 [i_20 + 2] [i_24]) + (9223372036854775807LL))) << (((((arr_15 [i_20 + 1] [i_20]) % (((/* implicit */unsigned long long int) var_15)))) - (52070507ULL)))));
                arr_98 [i_21] [i_20] [3ULL] = ((/* implicit */int) arr_79 [i_20]);
                var_59 = ((/* implicit */signed char) ((unsigned long long int) (((_Bool)0) ? (arr_19 [i_20] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_21] [i_20] [i_20 + 2] [i_24] [i_20 + 2]))))));
            }
        }
    }
    var_60 = ((/* implicit */short) var_6);
    var_61 = ((/* implicit */short) max((var_2), (((/* implicit */unsigned int) var_13))));
    var_62 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_16)));
    /* LoopSeq 1 */
    for (long long int i_25 = 1; i_25 < 16; i_25 += 4) 
    {
        arr_103 [i_25] = ((/* implicit */signed char) (-(((unsigned int) (unsigned char)111))));
        var_63 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)4096))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_102 [i_25])))) : (max((-3489226773628323145LL), (var_11))))), (((/* implicit */long long int) var_18))));
    }
}
