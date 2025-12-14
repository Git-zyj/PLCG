/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161520
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) != (((((/* implicit */_Bool) ((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203)))))) ? (((((/* implicit */unsigned long long int) arr_2 [i_0])) / (2800933021671587321ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        arr_3 [(unsigned short)16] &= ((/* implicit */unsigned long long int) ((arr_0 [(unsigned short)4]) >> (((max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) var_12))))), (min((15645811052037964295ULL), (var_2))))) - (7410257760396463383ULL)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                arr_10 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0]))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((((~(13112745752259933783ULL))) << (((arr_7 [i_0] [i_0]) + (8026990400887722672LL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((3820855353765951625LL) | (((/* implicit */long long int) arr_4 [i_0] [i_0]))))))))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_0), (arr_1 [i_1] [i_3])))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_3])) == (15645811052037964294ULL))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) >> ((((+(((/* implicit */int) arr_13 [i_0] [i_0])))) + (15471))))))));
            }
            var_23 = ((/* implicit */_Bool) min((min((var_16), (((/* implicit */int) arr_9 [i_0])))), (((/* implicit */int) ((short) 3820855353765951625LL)))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_4] [i_0] [i_5])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_6]))))) : (-1131232285606244880LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))) == (((((/* implicit */_Bool) 3820855353765951647LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_6 [i_0]))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_5 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_4])) >> (((/* implicit */int) ((arr_6 [i_5 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 - 1] [i_5 + 2]))))))));
                            arr_22 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_5 - 1] [i_5 + 2]), (arr_8 [i_5] [i_5 + 1] [i_5 - 1])))), ((-(10089625629631335024ULL)))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_26 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)214)) < (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))))));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 3820855353765951650LL))));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    arr_29 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)))) ? (((((/* implicit */long long int) arr_4 [i_0] [i_9])) | (arr_7 [i_7] [i_0]))) : (2740631937109893484LL)));
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) arr_5 [i_0] [i_7] [i_7]));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (unsigned short)3217))));
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */unsigned long long int) arr_18 [i_7] [i_8]);
                        arr_35 [i_7] [i_7] [i_0] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((((/* implicit */int) arr_20 [i_1] [i_1] [i_1])) - (216)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25080))) == (arr_24 [i_10] [i_1] [i_0])))) : (((/* implicit */int) var_4))));
                    }
                    for (short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_29 += ((/* implicit */signed char) 213974121420804285LL);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_7] [i_8] [i_11])) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((((/* implicit */int) var_0)) ^ (var_16)))));
                    }
                    for (short i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_31 = ((unsigned long long int) (_Bool)0);
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((var_15) ? (arr_28 [i_12] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_1] [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43607)))));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_0] [i_13] [(unsigned short)2] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) < (((/* implicit */int) (short)-25055))))) : ((-(((((/* implicit */_Bool) arr_25 [i_0] [12LL] [i_13] [(short)8])) ? (((/* implicit */int) (short)-9434)) : (var_16)))))));
            var_33 -= max((max(((~(4609434218613702656ULL))), (max((((/* implicit */unsigned long long int) var_6)), (7965588857818013461ULL))))), (((/* implicit */unsigned long long int) arr_9 [i_13])));
            arr_45 [i_0] = ((/* implicit */short) ((17714559643853230979ULL) != (((/* implicit */unsigned long long int) max((((-3820855353765951626LL) | (3820855353765951650LL))), (((/* implicit */long long int) (unsigned short)0)))))));
            arr_46 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_13])) ? (2523572938U) : (arr_34 [i_0]))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_5 [i_0] [i_13] [i_13])) == (((/* implicit */int) var_4)))))) : ((+((-(((/* implicit */int) (unsigned char)250))))))));
            arr_47 [i_0] = ((/* implicit */short) ((((min((-3820855353765951651LL), (((/* implicit */long long int) (unsigned char)126)))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_31 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_14 = 4; i_14 < 12; i_14 += 3) 
    {
        arr_50 [i_14] = ((/* implicit */unsigned int) arr_27 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14 - 3]);
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (int i_16 = 3; i_16 < 10; i_16 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_14))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((/* implicit */int) arr_25 [i_16 - 1] [i_17] [i_16 + 3] [i_16 + 3])))))));
                        arr_57 [i_17] [i_14] [i_17] [i_17] = (~(((/* implicit */int) (unsigned short)4)));
                        arr_58 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [i_14] = ((/* implicit */signed char) 15LL);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_19 = 3; i_19 < 11; i_19 += 1) 
                        {
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) 1941791033306136927ULL))));
                            arr_63 [i_14] [i_15] = ((/* implicit */signed char) arr_18 [i_14] [i_14]);
                            var_37 = ((/* implicit */unsigned char) var_15);
                            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)94))));
                        }
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            var_39 = ((/* implicit */signed char) var_0);
                            arr_66 [i_20 - 1] [i_14] [i_16 + 1] [i_14] [i_14] = ((/* implicit */unsigned char) arr_54 [i_15]);
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1]))) | (var_7)));
                            arr_67 [i_14 - 1] [i_14 - 2] [i_14] [i_14 + 1] [i_14 - 2] = ((/* implicit */short) 18446744073709551615ULL);
                            var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)99))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 1) 
                        {
                            arr_71 [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_14] [i_14] [i_21])) && (((/* implicit */_Bool) -1732190116)))))) : (((17714559643853230966ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_14 + 1] [i_14] [i_14])))))));
                            var_42 = ((/* implicit */short) (+(6412733605351947813LL)));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_22 = 2; i_22 < 11; i_22 += 2) 
                        {
                            arr_74 [i_14 - 3] [i_14 - 3] [i_16] [i_14] [i_22] = ((((/* implicit */_Bool) ((arr_2 [i_14]) + (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_14])))))) ? (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-3443)));
                            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39145)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_14 - 2] [i_16] [i_15] [i_14 - 4] [i_14 - 2] [i_14 + 2]))) : (17714559643853230966ULL)));
                        }
                        for (unsigned char i_23 = 1; i_23 < 11; i_23 += 3) 
                        {
                            var_44 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -9185442546177610072LL)) + (6703189335385988517ULL)));
                            arr_77 [i_14] = ((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) (unsigned short)49152)))) : (((/* implicit */int) arr_56 [(_Bool)1] [i_23 + 3] [i_14 - 3] [i_18] [i_15])));
                            var_45 -= ((/* implicit */unsigned char) ((short) 4064991887U));
                            var_46 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)-24914)))) << ((((-(-1254204290))) - (1254204276)))));
                            arr_78 [10ULL] [i_15] [i_15] [(unsigned char)0] [i_15] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4058)) ? (((((/* implicit */int) (signed char)107)) << (((15645811052037964295ULL) - (15645811052037964272ULL))))) : (((/* implicit */int) arr_5 [i_16] [i_18] [i_23]))));
                        }
                        for (short i_24 = 0; i_24 < 14; i_24 += 3) 
                        {
                            var_47 = ((((((/* implicit */int) arr_54 [i_14])) + (((/* implicit */int) var_15)))) | (((/* implicit */int) arr_65 [i_14] [i_14 - 3])));
                            arr_81 [5] [i_15] [4LL] [(signed char)1] [i_15] [4LL] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_14] [i_24])) ? (((((-3820855353765951651LL) + (9223372036854775807LL))) << (((2696309083U) - (2696309083U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14 - 3] [i_14] [i_14] [i_14] [i_14 + 1])))));
                            arr_82 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_36 [i_24] [i_24] [i_18] [i_24] [i_24])))));
                            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_14] [i_14] [10U] [i_14 - 2]))) / (arr_55 [i_18] [i_18] [i_18] [(short)10] [i_18] [i_18])))) ? ((~(((/* implicit */int) (signed char)-33)))) : (((/* implicit */int) arr_12 [i_14] [i_15] [(unsigned char)12] [i_24])))))));
                            var_49 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_24] [i_18]))));
                        }
                        for (unsigned short i_25 = 4; i_25 < 12; i_25 += 1) 
                        {
                            var_50 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)152)))));
                            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) arr_84 [i_14 + 2] [i_15] [i_15] [i_15] [i_18] [i_25 - 4]))));
                            var_52 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_75 [i_14] [i_25 - 4] [(unsigned char)1] [i_18] [(unsigned char)1] [(unsigned short)8])) ? (((/* implicit */int) arr_51 [4ULL] [4ULL])) : (((/* implicit */int) ((9185442546177610071LL) != (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
                            var_53 -= ((/* implicit */_Bool) -6122034133386997617LL);
                            arr_85 [i_14] [i_15] [i_15] [i_18] [i_25] [i_14] [i_18] = ((/* implicit */unsigned char) arr_79 [i_14] [(unsigned char)9] [i_16 + 3]);
                        }
                        var_54 = ((/* implicit */signed char) ((arr_28 [i_14 - 4] [i_14 + 2] [i_14] [i_16 - 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32307)))));
                        arr_86 [i_14 - 3] [i_14] [i_14 - 3] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_15] [i_16])) * (((/* implicit */int) arr_1 [i_18] [i_15])))) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_27 [i_14] [i_16] [i_15] [i_15] [i_14 + 1] [i_14])) : (((/* implicit */int) var_12))))));
                        var_55 = ((/* implicit */_Bool) ((var_9) ^ (arr_61 [i_14] [i_16 + 2] [i_14])));
                    }
                    arr_87 [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_83 [i_14] [i_14 - 3] [i_14 - 3])) + (2147483647))) << (((((/* implicit */int) arr_11 [i_14 + 1] [i_16 - 2])) - (92)))));
                }
            } 
        } 
        var_56 ^= ((/* implicit */unsigned short) arr_24 [(short)11] [i_14 + 2] [i_14 + 2]);
        var_57 = ((((/* implicit */_Bool) arr_12 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 1])) ? (var_5) : (var_5));
        arr_88 [i_14] = ((/* implicit */unsigned short) arr_5 [i_14] [i_14] [i_14]);
    }
    var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_5) : (max((var_5), (((/* implicit */long long int) (unsigned short)62589)))))))));
    /* LoopSeq 2 */
    for (long long int i_26 = 1; i_26 < 14; i_26 += 3) 
    {
        var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_16) / (((/* implicit */int) (short)8393))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((12598844615726262491ULL) < (((/* implicit */unsigned long long int) arr_6 [i_26]))))) << (min((arr_16 [14LL] [14LL]), (((/* implicit */unsigned long long int) var_1)))))))));
        var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) var_8))));
        arr_93 [i_26] |= ((/* implicit */_Bool) (unsigned short)2549);
    }
    /* vectorizable */
    for (short i_27 = 0; i_27 < 13; i_27 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_28 = 3; i_28 < 10; i_28 += 4) 
        {
            arr_99 [i_28 + 3] [i_28 + 3] [i_28] = (unsigned char)124;
            /* LoopSeq 1 */
            for (long long int i_29 = 1; i_29 < 11; i_29 += 1) 
            {
                var_61 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) < (((/* implicit */int) arr_18 [i_27] [i_28 - 3]))));
                var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) -1205027717))));
            }
            var_63 -= ((((((/* implicit */long long int) ((/* implicit */int) arr_72 [i_27]))) - (6245876406714432359LL))) / (((/* implicit */long long int) var_11)));
            var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) (unsigned char)0))));
        }
        arr_103 [i_27] = arr_6 [i_27];
        var_65 += ((/* implicit */_Bool) (unsigned char)0);
    }
}
