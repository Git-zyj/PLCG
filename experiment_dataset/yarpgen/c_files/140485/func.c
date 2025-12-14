/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140485
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (var_12)))) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0 - 2] [i_0 - 2] [4U] = ((/* implicit */signed char) (~(((/* implicit */int) max(((_Bool)1), (arr_4 [i_0 - 3]))))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0 + 2])) | (((/* implicit */int) var_13)))) > (((/* implicit */int) ((((/* implicit */_Bool) min(((short)9462), (((/* implicit */short) (_Bool)1))))) || (((((/* implicit */long long int) ((/* implicit */int) arr_2 [0LL]))) < (arr_3 [(signed char)3] [i_1] [i_1])))))))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */_Bool) (~(min(((~(var_11))), (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))))));
                var_18 = ((/* implicit */short) 5362356176493036425ULL);
            }
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) || ((_Bool)1)));
                arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_3 + 3] [i_0 + 1]))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13084387897216515176ULL)) || (((/* implicit */_Bool) var_12))))))));
            }
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_4]))));
                /* LoopSeq 1 */
                for (long long int i_5 = 4; i_5 < 12; i_5 += 1) 
                {
                    arr_19 [i_0] [i_1] [i_4] [i_5] [i_0] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)47039);
                    var_21 = min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) ^ (13084387897216515181ULL))));
                }
                var_22 ^= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-25221)) ^ (((/* implicit */int) arr_12 [i_0] [i_0 + 3] [i_4] [i_0]))))) ^ ((+(min((((/* implicit */long long int) arr_11 [5] [i_0] [7U] [i_1])), (arr_0 [i_0] [i_4])))))));
                var_23 = ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_1]);
            }
            for (unsigned short i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                var_24 = arr_1 [i_0 + 3] [i_0];
                var_25 = ((/* implicit */long long int) arr_16 [(unsigned short)2] [i_1] [i_6 - 1]);
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */_Bool) min((((/* implicit */int) ((var_7) != (arr_6 [i_7] [i_0 - 1] [i_7])))), ((-(((((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 2] [i_0])) | (((/* implicit */int) (unsigned short)0))))))));
            var_27 = arr_3 [(short)5] [(short)5] [i_7];
            arr_25 [i_7] [i_7] = ((/* implicit */_Bool) arr_23 [i_0]);
            arr_26 [i_7] [(unsigned char)5] = ((/* implicit */_Bool) 1918703263U);
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_9 = 2; i_9 < 11; i_9 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) min((arr_23 [(short)1]), (((/* implicit */long long int) arr_12 [i_0] [i_7] [i_0] [1]))));
                    var_29 = ((/* implicit */unsigned int) var_9);
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5362356176493036425ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-32764)) && (((/* implicit */_Bool) arr_32 [i_7] [i_10]))))) << (((((/* implicit */int) (short)32764)) - (32763)))))) : (min((var_14), (((/* implicit */long long int) var_3))))));
                    /* LoopSeq 4 */
                    for (short i_11 = 2; i_11 < 10; i_11 += 4) 
                    {
                        var_31 |= ((/* implicit */unsigned long long int) var_3);
                        arr_39 [i_7] = ((/* implicit */unsigned short) min((((5362356176493036425ULL) >> (((((/* implicit */int) (short)-32765)) + (32797))))), (min(((+(13084387897216515181ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))));
                        arr_40 [i_7] [i_0] [i_8] [i_10] [i_11] = ((/* implicit */long long int) arr_37 [i_7] [(signed char)10] [i_8] [i_7] [i_7] [i_7]);
                        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65534))));
                    }
                    for (unsigned char i_12 = 4; i_12 < 12; i_12 += 2) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned char)6]))))) > (((((/* implicit */_Bool) -5382461975955116847LL)) ? (arr_31 [i_0] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        arr_44 [i_0] [9LL] [(unsigned char)1] [i_10] [i_7] [i_7] = ((/* implicit */unsigned char) arr_33 [9U] [0LL] [i_8] [i_8]);
                        var_34 ^= arr_34 [(short)12] [(short)12] [i_8] [i_10] [(short)12] [(short)12];
                        arr_45 [1ULL] [i_7] [i_8] [i_10] [i_7] [(unsigned char)5] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31591)) ? (var_8) : (((/* implicit */int) var_1))))), ((+(-1LL))))) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-28630)), (18161283861990286556ULL)))) ? (max((((/* implicit */long long int) var_0)), (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), ((short)32762)))))))));
                    }
                    for (short i_13 = 2; i_13 < 10; i_13 += 1) 
                    {
                        var_35 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [1ULL] [i_7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_8] [i_0] [i_0 - 4] [(short)4]))))) ? (((/* implicit */long long int) ((((arr_7 [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) (short)32764)) - (32764)))))) : (((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_29 [i_0]))));
                        arr_48 [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_32 [i_7] [i_0])) ? (((((/* implicit */_Bool) 8858327863852037156LL)) ? (var_7) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) min((90734771U), (((/* implicit */unsigned int) (unsigned char)0))))))) + (9223372036854775807LL))) >> ((((~(((15928240396894836203ULL) ^ (((/* implicit */unsigned long long int) 9223372036854775796LL)))))) - (6704868360040060339ULL)))));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 1) 
                    {
                        var_36 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_10] [i_14] [i_14 + 3]))) >= (3895763187774306525ULL)))) : (((/* implicit */int) arr_35 [i_0] [i_14 + 3] [i_14] [i_0] [i_14] [i_14])))) >= (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) >> (((-8698417433535555215LL) + (8698417433535555228LL)))))) ? (arr_28 [i_0] [i_10] [i_0 + 3]) : (((var_12) | (((/* implicit */int) (unsigned char)22))))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_14 - 1] [i_7])) ? (arr_21 [i_7] [(short)10] [i_14 + 1] [i_7]) : (arr_21 [i_7] [i_14] [i_14 + 2] [i_7])))) ? (744452782) : ((-(arr_21 [i_7] [i_14] [i_14 - 1] [i_7])))));
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_38 += ((/* implicit */unsigned char) (~((~(var_7)))));
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        arr_57 [12LL] [i_7] [i_7] = ((/* implicit */unsigned short) -1001382642);
                        arr_58 [i_16] [(_Bool)1] [i_8] [i_15] [i_16] &= ((((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_8] [i_8] [2ULL] [i_0 - 1]))) + (var_4))) << (((/* implicit */int) (_Bool)1)));
                        var_39 *= ((/* implicit */short) -22);
                        var_40 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_38 [i_15] [i_15] [(_Bool)1] [i_8] [i_7] [(_Bool)1]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_8] [i_15] [i_16]))) ^ (var_9))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) arr_49 [i_0] [i_7] [(unsigned short)10] [i_7] [i_8] [i_0 - 1])) << (((min((var_10), (((/* implicit */unsigned long long int) (unsigned short)60682)))) - (60682ULL))))));
                        var_41 = ((/* implicit */unsigned int) (+(((long long int) ((((/* implicit */unsigned long long int) -451163048284890123LL)) ^ (var_9))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_42 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55695)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (unsigned short)55692))))) ? (((/* implicit */int) ((((/* implicit */int) arr_52 [i_0] [i_0] [i_8])) <= (2147483647)))) : (((/* implicit */int) max((arr_16 [i_0] [i_0] [i_0]), (var_2)))))) != (((((/* implicit */int) max((((/* implicit */unsigned char) arr_54 [i_0] [(short)6] [i_0] [i_15] [i_17])), (var_1)))) << (((((/* implicit */int) max(((short)19685), ((short)-28630)))) - (19683)))))));
                        arr_63 [i_7] [i_7] [i_8] = ((/* implicit */int) arr_6 [4U] [i_7] [i_7]);
                    }
                    arr_64 [i_7] [i_7] [i_7] = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_7] [i_0])) ? (((/* implicit */unsigned long long int) arr_31 [i_0] [(unsigned short)2] [i_8] [i_7] [11U])) : (arr_32 [i_7] [i_15]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (arr_21 [i_7] [0LL] [0LL] [i_15]))))))));
                }
                var_43 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) arr_28 [i_0 + 3] [i_0 - 1] [i_0 - 4])) : (max((((/* implicit */long long int) (signed char)-1)), (28LL))))), (((/* implicit */long long int) (short)-1480))));
                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) 13584061141416893500ULL))));
                arr_65 [i_7] [i_7] = ((/* implicit */unsigned char) arr_50 [i_0] [i_7] [i_7] [i_8]);
                arr_66 [i_7] = ((/* implicit */long long int) min((arr_51 [i_7] [i_7] [3ULL] [4] [i_0 - 4] [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned int) 1544362298))));
            }
        }
        for (unsigned short i_18 = 2; i_18 < 10; i_18 += 4) 
        {
            var_45 &= ((/* implicit */short) (~(((var_14) >> (((var_10) - (13619674066007577255ULL)))))));
            /* LoopSeq 2 */
            for (signed char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                arr_72 [i_0 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */int) arr_24 [i_0] [i_0] [i_18 + 2])) - (((/* implicit */int) arr_16 [12LL] [i_0 - 4] [i_18 + 1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) arr_11 [i_0] [i_0 + 2] [i_0 - 3] [i_0 + 2]))))));
                var_46 = arr_7 [i_0] [(short)5];
                var_47 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_3)), (arr_28 [i_0] [i_18] [i_18])))));
            }
            for (unsigned long long int i_20 = 4; i_20 < 12; i_20 += 3) 
            {
                var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_76 [i_20] [i_18] [i_0])) ? (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)21)) && (((/* implicit */_Bool) 7543718588738573691LL)))))))) : (arr_23 [(_Bool)1]))))));
                arr_77 [i_20] [i_20] [(_Bool)1] [i_18] = ((/* implicit */short) arr_73 [(unsigned short)1] [(unsigned short)1] [i_0]);
                /* LoopSeq 2 */
                for (unsigned short i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
                {
                    var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (~(((arr_10 [i_21] [i_18 + 3] [i_20 + 1] [i_21]) ^ (arr_10 [i_0 - 2] [i_18] [(signed char)0] [i_21]))))))));
                    arr_80 [i_20] [i_18] [i_20] [i_21] [i_21] [i_20] = ((/* implicit */short) (+(((/* implicit */int) ((6297302086148980625ULL) >= (((/* implicit */unsigned long long int) var_4)))))));
                    var_50 += ((/* implicit */unsigned short) arr_14 [i_21] [i_18] [(unsigned short)11]);
                }
                for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
                {
                    arr_83 [i_22] [i_20] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)59366)));
                    arr_84 [i_20] [i_20] = ((/* implicit */long long int) var_6);
                }
                var_51 = ((/* implicit */_Bool) ((max((-1255618930), (((/* implicit */int) (short)14802)))) ^ ((-(arr_28 [i_18 - 2] [i_20 - 3] [i_20 - 4])))));
            }
        }
        arr_85 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(4968891567621619661LL)))) || (((/* implicit */_Bool) (((_Bool)1) ? (min((var_14), (((/* implicit */long long int) arr_46 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
        var_52 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [(signed char)7])) ? (((/* implicit */long long int) 1544362285)) : (arr_60 [(unsigned short)4] [i_0] [i_0] [i_0 - 3] [i_0])))) - (max((arr_32 [i_0] [(unsigned short)6]), (var_10)))));
        /* LoopSeq 1 */
        for (long long int i_23 = 0; i_23 < 13; i_23 += 1) 
        {
            arr_88 [i_0] [i_23] [i_23] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 3] [3U])))))));
            var_53 -= ((/* implicit */short) ((min((((arr_3 [i_0] [i_0] [3]) | (((/* implicit */long long int) var_12)))), (var_4))) & (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
            arr_89 [i_23] = ((/* implicit */unsigned int) var_4);
            var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1544362272)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        }
    }
    var_55 = var_6;
    var_56 -= (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) != (((((/* implicit */_Bool) var_12)) ? (var_5) : (var_10)))))));
    var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)-123)))))))), (((((/* implicit */_Bool) (unsigned short)20057)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2251799813685247ULL))))))))));
}
