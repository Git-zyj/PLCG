/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100404
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [(short)2] [13] &= ((/* implicit */int) ((unsigned int) arr_0 [i_0] [i_0]));
        arr_3 [i_0] = max((((max((((/* implicit */unsigned long long int) (unsigned char)255)), (17884600728929339011ULL))) & ((+(arr_1 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) var_0)))))) / (arr_0 [14LL] [i_0]))));
        arr_4 [i_0] [(unsigned short)21] = ((/* implicit */int) arr_0 [i_0] [19LL]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 805920388)) % (arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [18]))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))))) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)42))) : (9223372036854775807LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)13265)))))))));
    }
    for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        var_19 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_1] [i_1 - 2]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1 - 2] [i_2 + 3])) / (((/* implicit */int) arr_9 [i_1 + 1]))));
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (929039089076566846ULL))))));
            arr_12 [13ULL] [i_1 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)241))));
            arr_13 [22LL] [7ULL] [i_2] = ((/* implicit */unsigned long long int) arr_9 [16U]);
        }
        var_21 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (signed char)12)) >= (((/* implicit */int) var_3)))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_22 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)160));
                arr_18 [i_1] [i_3] [i_4] [i_4] = 742518658U;
                arr_19 [i_1 - 2] [i_3] = ((/* implicit */signed char) max((arr_16 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (max((arr_16 [(unsigned char)11] [i_1 - 1] [i_1 - 2] [i_1 - 1]), (((/* implicit */long long int) arr_8 [i_1 - 2]))))));
            }
            for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) 3965180612383037376ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (14051488181901369780ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_17 [i_6] [i_5 - 1] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)58))))))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_6 [i_5 - 3])) : (((((/* implicit */int) (unsigned char)217)) & (((/* implicit */int) arr_8 [i_1])))))))));
                    var_25 = ((/* implicit */signed char) arr_8 [i_1]);
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))));
                    arr_29 [i_1] [i_5] [i_5] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) (signed char)-64)))))))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((signed char) max((((long long int) (signed char)56)), (((/* implicit */long long int) max((var_7), (var_7))))))))));
                    var_28 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_15 [i_5 - 3] [i_1 - 2])))));
                }
                arr_30 [i_1 - 1] [i_3] [i_5] [(signed char)1] = (signed char)-57;
            }
            /* LoopSeq 2 */
            for (long long int i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    var_29 ^= (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)127))))) / (((805306368U) & (arr_35 [i_1] [i_3] [4] [(unsigned char)10]))))));
                    var_30 = ((/* implicit */unsigned long long int) arr_10 [(signed char)5] [13U] [(signed char)12]);
                    var_31 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)15994)) ? (arr_16 [i_1 - 1] [i_8 + 2] [18LL] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [8U] [i_9]))) >= (arr_17 [i_3] [i_8] [i_9]))))))), (((/* implicit */long long int) max((arr_31 [i_1] [i_3] [(signed char)2]), (max((((/* implicit */unsigned int) var_14)), (2931132835U))))))));
                }
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_32 &= ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)127)), (((long long int) var_7))));
                    var_33 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)28132)) ? (((/* implicit */int) (unsigned short)4197)) : ((~(((/* implicit */int) (signed char)-118))))))), ((+(9223372036854775807LL)))));
                    var_34 += ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_8 + 1]))))) / (max((max((((/* implicit */unsigned int) (unsigned short)49542)), (1902089458U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_1]))))))));
                    var_35 = ((/* implicit */int) (signed char)-49);
                    var_36 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10]))));
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    arr_44 [3U] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)23))))), (max(((~(18446744073709551594ULL))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)58)))))));
                    var_37 ^= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((-1334712148) & (((/* implicit */int) (signed char)-116))))) >= (var_9)))));
                    var_38 = ((/* implicit */unsigned long long int) (unsigned char)234);
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        arr_48 [21ULL] [i_8] [i_8] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_16))))));
                        arr_49 [i_8] [i_12] = var_15;
                        var_39 = ((/* implicit */unsigned int) (unsigned char)202);
                    }
                    for (unsigned int i_13 = 1; i_13 < 23; i_13 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) : (4294967295U))));
                        var_41 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (1437299321U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-67), ((signed char)-110)))))))), ((~(((((/* implicit */_Bool) -814328540)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97)))))))));
                    }
                }
            }
            /* vectorizable */
            for (long long int i_14 = 2; i_14 < 21; i_14 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */signed char) -5993619320376742262LL);
                var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_54 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]))));
                arr_56 [i_1] [11U] [i_14] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) var_11)) * (6394194762661159459ULL)))));
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 4) 
                    {
                        arr_64 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_16 + 3] [i_14 + 2] [i_3] [i_1 - 2])) ? (1329171161U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_3] [i_14] [i_15] [i_16])))));
                        var_44 *= ((/* implicit */unsigned char) -314302281);
                    }
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        var_45 = (unsigned char)23;
                        arr_68 [i_1 - 1] [i_3] [i_14 - 1] [i_15] [i_3] = (signed char)-32;
                        var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        arr_71 [8LL] [i_3] [i_14] [14ULL] [i_18] [i_1] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) % (2888325685U)));
                        var_47 ^= ((/* implicit */unsigned long long int) (+(498863588U)));
                        var_48 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_1 - 1] [i_3] [i_14 - 2] [i_15]))));
                        var_49 *= ((/* implicit */signed char) ((arr_61 [i_3] [i_3] [i_14 - 2] [i_15] [i_15]) % (((/* implicit */int) (unsigned char)216))));
                    }
                    for (signed char i_19 = 3; i_19 < 23; i_19 += 4) 
                    {
                        arr_76 [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 814328539))));
                        var_50 ^= ((/* implicit */signed char) 2147483632);
                        arr_77 [i_19] [i_3] = ((/* implicit */unsigned short) (+(arr_31 [i_1 - 2] [(signed char)2] [i_14 - 1])));
                    }
                    for (unsigned int i_20 = 2; i_20 < 21; i_20 += 4) /* same iter space */
                    {
                        var_51 += ((/* implicit */unsigned int) (signed char)32);
                        var_52 += ((/* implicit */unsigned int) arr_46 [i_15] [i_15] [(signed char)5] [(signed char)5] [9ULL] [(signed char)8] [i_15]);
                        var_53 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) var_5))))));
                        arr_82 [i_20 - 2] [i_15] [i_14 - 2] [i_14] [(signed char)10] [2U] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) >= (var_11))) ? (((/* implicit */unsigned long long int) arr_23 [(signed char)0] [i_1 - 1] [i_20 - 1])) : (((unsigned long long int) 2673037795U))));
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_1 - 2] [i_1] [i_1 - 1] [i_15] [i_15] [15LL] [(unsigned char)11])) ? (((long long int) 4160749568U)) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    }
                    for (unsigned int i_21 = 2; i_21 < 21; i_21 += 4) /* same iter space */
                    {
                        var_55 = ((/* implicit */signed char) ((unsigned short) arr_5 [21ULL] [i_21 + 2]));
                        var_56 = ((/* implicit */unsigned int) ((unsigned char) arr_84 [i_21] [i_21 - 2] [3] [i_21] [i_21 + 1] [(unsigned short)5] [i_21 - 2]));
                        arr_85 [2U] [i_3] [i_14] [i_21 - 2] &= ((/* implicit */int) ((signed char) arr_26 [(signed char)18] [i_21] [i_14] [i_14] [i_14] [i_14 - 1]));
                    }
                }
                for (int i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    var_57 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 4294967295U)) >= (arr_51 [i_1 + 1] [i_1 + 1] [i_14 - 2] [i_22] [i_3] [(unsigned char)0] [i_14 - 2])));
                    /* LoopSeq 1 */
                    for (int i_23 = 2; i_23 < 20; i_23 += 4) 
                    {
                        var_58 ^= ((/* implicit */long long int) arr_84 [(signed char)8] [i_3] [i_14 - 2] [(short)8] [i_23 - 1] [i_22] [i_23 - 1]);
                        var_59 = ((/* implicit */unsigned char) ((arr_58 [i_1] [i_3] [i_22] [i_23 - 1]) % (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_12)))))));
                        arr_92 [i_23] [i_23 + 3] [i_22] [7U] [i_22] [i_1] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_14)))) >= (((/* implicit */int) (unsigned char)16))));
                    }
                    arr_93 [4U] [i_3] [i_22] [i_3] [7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [5ULL] [(unsigned char)1] [i_1 - 1] [i_14 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_35 [i_1 - 1] [(unsigned short)19] [i_1 + 1] [i_14 + 2])));
                }
                /* LoopSeq 1 */
                for (signed char i_24 = 0; i_24 < 24; i_24 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 3; i_25 < 21; i_25 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)-55)))))))));
                        arr_98 [i_1 - 2] [i_3] [12] [(unsigned char)5] [i_25 + 1] = ((/* implicit */unsigned char) var_8);
                        var_61 = ((/* implicit */long long int) max((var_61), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_33 [i_25] [i_24] [i_3] [i_1])) / (((((/* implicit */_Bool) arr_45 [i_1 + 1] [i_1] [9U] [i_24] [i_14] [i_24] [15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_1] [i_3] [i_14] [i_24] [i_25] [i_25 + 1] [(unsigned char)0]))) : (283770064418161630ULL))))))));
                        arr_99 [19] [i_3] [i_24] [i_24] [i_25] [i_3] = ((/* implicit */signed char) 3453793889U);
                    }
                    for (unsigned char i_26 = 3; i_26 < 21; i_26 += 4) 
                    {
                        var_62 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-34))));
                        arr_102 [i_1] [i_1] [i_26] [2U] [21U] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_35 [(unsigned char)0] [i_3] [(signed char)19] [i_24])))));
                        var_63 &= ((/* implicit */int) (+(arr_101 [i_24])));
                    }
                    arr_103 [5U] [i_3] [i_14] [0LL] &= ((/* implicit */long long int) ((arr_58 [10ULL] [22ULL] [(unsigned char)1] [i_1 - 1]) / (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)40)))))));
                    arr_104 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1423242369784138169ULL)) ? (2521691676U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_27 = 2; i_27 < 22; i_27 += 2) 
                    {
                        var_64 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)168))));
                        var_65 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_59 [i_24] [(signed char)10] [i_24] [i_24] [i_24])) & (arr_78 [i_1 - 2] [i_3] [i_14 - 1] [i_24] [i_27 - 2])));
                        arr_107 [i_27] [(unsigned short)7] [i_14] [i_3] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)97)) & (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) (signed char)28)) : (((((/* implicit */int) (signed char)40)) & (((/* implicit */int) (unsigned short)27880))))));
                    }
                }
            }
            var_66 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_1] [i_1] [i_1] [i_1 - 1] [i_3] [i_3])) / (((/* implicit */int) (signed char)35))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)59)), (arr_105 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_96 [i_3] [11U] [(unsigned short)6])) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) arr_75 [i_1 - 2] [i_1 - 2] [i_1] [i_3]))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(unsigned char)9] [(unsigned char)22] [13LL] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_54 [(unsigned short)17] [i_3] [i_3] [i_1 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (arr_101 [i_3])))));
        }
        arr_108 [i_1] = max((((/* implicit */unsigned int) ((signed char) (signed char)78))), (arr_96 [i_1 - 1] [i_1 - 2] [i_1]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_28 = 0; i_28 < 12; i_28 += 3) 
    {
        var_67 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6515513887103714748ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (8026452041903610583LL)));
        var_68 = var_0;
        var_69 = arr_42 [i_28] [i_28] [i_28] [i_28] [i_28];
    }
}
