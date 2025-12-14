/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145035
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
    var_11 += ((/* implicit */unsigned short) var_5);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [(unsigned short)14] |= ((((/* implicit */_Bool) 1073217536)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_1 [20U])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [8U]))))) : (0U)))) : (12981319150376825717ULL));
        var_12 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) 62518654U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)5631)))))), (((/* implicit */int) (unsigned char)251))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [(short)21] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65524)) & (((/* implicit */int) (short)-16384))));
        var_13 = ((/* implicit */int) ((long long int) ((unsigned long long int) var_4)));
        var_14 += ((/* implicit */int) ((unsigned short) arr_1 [(unsigned char)8]));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 4294967295U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_13 [i_4] [i_4] [i_4] [i_4] = arr_0 [i_4];
                arr_14 [i_2] [i_4] [i_2] = ((/* implicit */_Bool) (+(-1073217539)));
                var_16 += ((/* implicit */unsigned short) (short)16384);
                arr_15 [i_4] [i_4] [(short)4] [i_2] = ((/* implicit */unsigned long long int) (-(((int) 3646969234U))));
                var_17 = ((/* implicit */short) max((var_17), (((short) arr_3 [i_2 - 1]))));
            }
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((short) (unsigned char)0)))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)11)))))));
                var_20 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1073217539)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-5611214685986523041LL)))))));
                var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (5465424923332725899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((arr_7 [i_2 - 1] [i_2 - 1]) == (((/* implicit */unsigned long long int) 726627392))))));
            }
        }
        for (int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)20])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [(unsigned char)12])) : (((/* implicit */int) arr_8 [15ULL])))) : (((int) arr_17 [i_2] [i_6] [i_2]))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_6]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26044))) : (arr_3 [16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (arr_6 [(short)20] [i_6])))), (min((arr_1 [4ULL]), (((/* implicit */unsigned long long int) var_5))))))));
            var_23 += var_7;
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_3))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((short) min((((/* implicit */short) arr_20 [i_2 - 1] [i_2 - 1] [i_2 - 1])), (var_5)))))));
        }
        for (int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
        {
            arr_24 [i_2] [i_8] [0U] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)20549)), ((unsigned short)65535)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_0))));
            arr_25 [i_2] [i_8] = ((/* implicit */unsigned char) ((signed char) arr_10 [i_2] [i_2] [i_2]));
            arr_26 [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_2])), (var_0)))) ? (((int) (signed char)-107)) : ((~(((/* implicit */int) (short)-16381)))))), ((~(((/* implicit */int) var_10))))));
        }
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_21 [i_2] [3LL]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_10 = 2; i_10 < 20; i_10 += 3) /* same iter space */
            {
                var_27 += ((/* implicit */signed char) arr_29 [(short)0] [(unsigned char)18]);
                var_28 = ((/* implicit */short) min((((/* implicit */unsigned int) -1073741824)), (((unsigned int) (short)11865))));
                arr_32 [i_9] [i_9] [i_9] = ((/* implicit */short) (signed char)-101);
            }
            for (signed char i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) var_5);
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_4)))))) + ((~((~(((/* implicit */int) (unsigned short)44088)))))))))));
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 20; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_41 [i_9] [i_9] [i_12] [i_12] [i_9] [(signed char)18] = ((/* implicit */int) arr_30 [i_9] [i_9] [(_Bool)1] [i_13]);
                        var_31 ^= ((/* implicit */unsigned short) arr_9 [(short)0] [3LL]);
                        arr_42 [(signed char)16] [(short)10] [(signed char)16] [(signed char)16] [i_11] [i_13] [(signed char)16] &= ((/* implicit */unsigned int) arr_31 [i_2] [i_2 - 1] [i_2] [i_2]);
                        arr_43 [i_2] [i_9] [i_9] [i_9] [i_9] [(signed char)10] [7U] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_7 [i_13] [i_11])) ? (((/* implicit */long long int) arr_37 [i_9] [(signed char)13] [(short)14] [i_2] [12U] [i_9])) : (var_3))));
                    }
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        arr_46 [i_2] [i_9] = ((/* implicit */unsigned short) var_10);
                        var_32 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_33 [i_2 - 1] [21] [i_14])) ? (((/* implicit */int) arr_17 [i_2 - 1] [i_12 + 1] [i_11 + 1])) : (((/* implicit */int) arr_33 [(short)11] [i_9] [(signed char)2])))), (((/* implicit */int) arr_33 [i_2 - 1] [i_2 - 1] [i_14]))));
                    }
                    arr_47 [i_2] [14LL] [(unsigned short)20] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_39 [i_2 - 1] [i_2 - 1] [i_9] [4U] [i_11 - 1] [i_11 - 1] [(short)20]), (arr_39 [i_2 - 1] [i_2 - 1] [i_9] [(unsigned short)14] [6U] [i_9] [(signed char)8]))))));
                }
                arr_48 [i_9] = ((/* implicit */unsigned int) var_4);
            }
            for (signed char i_15 = 2; i_15 < 20; i_15 += 3) /* same iter space */
            {
                var_33 ^= ((/* implicit */unsigned int) var_0);
                var_34 += ((/* implicit */unsigned short) arr_38 [8ULL] [8ULL] [(unsigned short)10]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    var_35 = ((((/* implicit */_Bool) arr_18 [i_15 - 1] [11LL])) ? (var_1) : (((/* implicit */unsigned int) var_2)));
                    arr_55 [i_16] [i_9] [i_9] [i_9] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (arr_49 [(short)13] [i_9] [i_15] [(short)13]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_16] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_9] [i_9]))))));
                }
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    var_36 &= ((/* implicit */signed char) var_5);
                    var_37 ^= ((/* implicit */unsigned long long int) 9086361189626447688LL);
                }
                for (short i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) var_7))));
                    arr_61 [i_9] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_33 [i_15 + 1] [(unsigned short)20] [i_15])))) ? ((~(((/* implicit */int) arr_60 [i_9] [i_15 + 1] [i_15 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_2] [6U] [i_15] [i_18])))))));
                    arr_62 [i_9] = ((/* implicit */signed char) ((unsigned long long int) arr_6 [i_9] [i_18]));
                }
            }
            var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_2] [i_9] [i_2] [i_2] [i_2 - 1] [i_9])) ? (arr_59 [i_2] [i_9] [(short)5] [i_9] [i_2 - 1] [i_9]) : (arr_59 [6LL] [i_2] [(signed char)13] [(signed char)13] [i_2 - 1] [i_2])))) ? (((/* implicit */long long int) min((0), (((/* implicit */int) var_0))))) : (max((arr_59 [i_2] [i_2] [(short)2] [i_9] [i_2 - 1] [i_9]), (arr_59 [4U] [i_9] [21] [i_9] [i_2 - 1] [4U])))));
            arr_63 [0ULL] [0ULL] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_39 [i_2] [i_2] [(signed char)4] [i_2] [(signed char)4] [i_2] [i_9])) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [11LL] [i_9] [i_9] [i_9]))))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)40247))))), (((/* implicit */unsigned long long int) (-(max((arr_44 [i_9]), (((/* implicit */long long int) var_9)))))))));
        }
        for (unsigned short i_19 = 2; i_19 < 19; i_19 += 1) 
        {
            arr_66 [(short)13] [(short)13] [(short)13] |= ((/* implicit */unsigned long long int) var_0);
            /* LoopSeq 2 */
            for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((int) arr_60 [(unsigned short)18] [i_2] [(unsigned short)18])), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_8))))))), (var_1))))));
                /* LoopSeq 1 */
                for (unsigned int i_21 = 1; i_21 < 18; i_21 += 2) 
                {
                    arr_72 [i_20] [i_20] [i_19] [i_21] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_18 [18] [i_21])), (var_2)));
                    arr_73 [i_21] [i_21] [i_20] = ((/* implicit */unsigned long long int) max((arr_21 [i_2] [(unsigned char)21]), (((/* implicit */long long int) ((signed char) (unsigned char)0)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (arr_59 [i_2] [i_2] [i_2] [i_2] [(unsigned char)16] [i_2]))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_2] [i_2] [i_20] [i_2])) ? (((/* implicit */int) arr_17 [i_2] [i_19] [i_19])) : (((/* implicit */int) var_7)))))))))));
                        var_42 = ((/* implicit */unsigned char) var_0);
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (((int) var_0)))))));
                        arr_76 [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) arr_20 [i_19 + 2] [i_21 + 4] [2ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_4 [i_22]))))))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 4) /* same iter space */
                    {
                        arr_79 [8U] [8U] [8U] [i_21] [8U] &= (+(((/* implicit */int) var_9)));
                        arr_80 [i_2] [18ULL] [18ULL] [(signed char)5] [21LL] = ((/* implicit */short) arr_29 [i_23] [i_23]);
                        arr_81 [i_2] [i_19] [i_20] [i_20] [i_19] [(unsigned char)16] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_2 - 1] [i_2] [i_2])) ? (arr_40 [i_2 - 1] [(unsigned short)14] [i_2]) : (arr_40 [i_2 - 1] [7LL] [i_2])))) ? (((unsigned long long int) arr_7 [i_2] [i_2])) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_31 [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_24 = 0; i_24 < 22; i_24 += 4) /* same iter space */
                    {
                        var_44 += ((/* implicit */signed char) (+(arr_21 [i_21 + 1] [i_19 - 2])));
                        arr_85 [i_2] [i_2] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) var_0);
                    }
                    var_45 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4124372295269414956LL)) ? (((/* implicit */long long int) 726627384)) : (-4124372295269414957LL))))))));
                }
            }
            for (int i_25 = 3; i_25 < 20; i_25 += 1) 
            {
                var_46 += ((/* implicit */unsigned short) ((unsigned int) (short)7407));
                var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) max((arr_51 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (min((((/* implicit */int) var_4)), (726627376))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_2] [i_2] [i_2] [i_2] [(signed char)21] [i_2])))))))))))));
                arr_90 [i_2] [i_19] &= ((/* implicit */unsigned short) var_2);
                /* LoopSeq 1 */
                for (long long int i_26 = 0; i_26 < 22; i_26 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_27 = 0; i_27 < 22; i_27 += 4) 
                    {
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) var_5))));
                        var_49 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27906)) & (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) arr_56 [i_2] [i_2] [i_2] [i_27])) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) : (arr_44 [i_2])));
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_70 [i_27] [i_26] [(unsigned char)8] [(short)7] [(unsigned char)8] [i_2]))));
                        arr_96 [i_27] [i_19] [i_2] [i_26] = ((/* implicit */unsigned int) ((-726627387) & (((/* implicit */int) arr_17 [(short)17] [i_25] [6U]))));
                        var_51 = ((/* implicit */int) ((arr_86 [i_2] [i_19]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)34399)) : (((/* implicit */int) arr_74 [5U] [i_2 - 1])))))));
                    }
                    for (int i_28 = 3; i_28 < 19; i_28 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [(unsigned char)0] [(unsigned char)0] [i_19] [i_19] [i_19])) ? (((/* implicit */long long int) arr_52 [i_2] [i_2] [i_2] [i_26])) : (var_3)))) ? (((/* implicit */int) arr_56 [(unsigned short)3] [i_19] [(unsigned short)3] [i_28])) : ((-(((/* implicit */int) var_9)))))))));
                        var_53 &= ((/* implicit */unsigned short) var_7);
                    }
                    arr_99 [i_2] [i_19] [i_19] [i_26] = ((/* implicit */unsigned long long int) var_5);
                }
                var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) max(((+(12981319150376825701ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_83 [i_25 + 1])) : (((/* implicit */int) arr_83 [i_25 - 3]))))))))));
            }
        }
    }
    for (int i_29 = 1; i_29 < 17; i_29 += 1) 
    {
        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) 1017792105))));
        arr_102 [i_29] [i_29] = ((/* implicit */signed char) var_4);
    }
    /* LoopSeq 2 */
    for (unsigned int i_30 = 3; i_30 < 20; i_30 += 1) 
    {
        var_56 += ((/* implicit */unsigned long long int) ((unsigned int) ((int) arr_103 [i_30 - 3])));
        var_57 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max(((unsigned short)248), (((/* implicit */unsigned short) (short)2))))) ? (((/* implicit */unsigned long long int) -9086361189626447698LL)) : (8514753995684048471ULL))) : (((/* implicit */unsigned long long int) (+(arr_104 [i_30])))));
        var_58 *= ((/* implicit */unsigned long long int) arr_103 [(unsigned char)7]);
        var_59 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11382)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)131))))) : (((int) var_1))))) : (((((/* implicit */_Bool) arr_104 [i_30])) ? (arr_104 [(unsigned char)10]) : (min((arr_103 [(unsigned char)9]), (((/* implicit */long long int) var_7)))))));
    }
    for (unsigned short i_31 = 0; i_31 < 16; i_31 += 1) 
    {
        arr_108 [5ULL] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_31] [i_31]) : (arr_6 [i_31] [i_31]))));
        arr_109 [i_31] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9086361189626447698LL)) ? (((unsigned long long int) arr_88 [(short)8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19477)))));
    }
}
