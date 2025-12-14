/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187026
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
    var_12 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) ((((/* implicit */int) (signed char)-11)) >= (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_13 ^= (((-(((/* implicit */int) (short)2884)))) - ((+(((((/* implicit */int) arr_5 [i_0])) + (var_2))))));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_1] [i_0] [i_0])) + (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_7))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])) : (var_7)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) 4294967295U)) : (7822417260963771515LL))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_3))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_9))))));
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-14))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((268435455) != (arr_7 [i_0] [i_0] [i_0])))) << (((((/* implicit */int) arr_0 [i_3])) + (11624)))));
                        var_20 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                        var_21 |= ((/* implicit */signed char) arr_8 [i_5] [i_2] [i_0] [i_0]);
                        var_22 = ((/* implicit */unsigned short) -184963644);
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_19 [i_3] [i_6] [i_3] [i_2] [i_1] [i_0] = ((int) arr_16 [i_0] [(signed char)2] [i_1] [i_2] [(short)14] [i_3] [i_6]);
                        var_23 = ((/* implicit */signed char) var_3);
                    }
                }
                arr_20 [i_0] [(unsigned char)1] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) max((arr_7 [i_0] [i_1] [i_0]), (((/* implicit */int) arr_0 [i_2]))))) + (-5699410211676629063LL)))));
            }
            for (signed char i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_7] [i_8]);
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_1 [4ULL]))));
                    var_26 -= ((/* implicit */signed char) (~(3155211848U)));
                    var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_8] [i_8]))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_29 [(short)20] [i_0] [(short)20] [i_0] [i_9] [i_0] [i_1] |= ((/* implicit */signed char) ((long long int) ((int) arr_15 [i_0] [i_0])));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) arr_23 [i_0] [(_Bool)0] [(_Bool)0] [i_7 - 2])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_9]))) : (var_10)))));
                        var_29 = ((/* implicit */unsigned long long int) arr_0 [i_7 - 2]);
                        var_30 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (short)31868)) << (((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])) - (109))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_1] [13] [i_7 + 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) & (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [9] [9] [i_7] [(unsigned char)16])))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_17 [(unsigned char)10] [i_7] [i_1] [i_0]))));
                        var_33 = ((/* implicit */signed char) ((arr_22 [i_0] [i_1] [(short)22]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_7 - 1] [23U])) * (((/* implicit */int) var_4)))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 3; i_11 < 24; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)148)))) < (arr_32 [i_11] [i_1] [i_11]))))) % (arr_14 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0])));
                            arr_40 [i_7 + 1] [i_7 + 1] [(unsigned short)8] [i_11] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_21 [i_0] [15ULL] [(unsigned char)19] [i_0]))) % ((~((~(((/* implicit */int) (short)31868))))))));
                            arr_41 [(short)20] [i_12] [i_12] [14U] [i_12] [i_12] = ((/* implicit */unsigned long long int) (short)-31868);
                        }
                    } 
                } 
            }
        }
        for (short i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)7)), (arr_36 [i_13] [i_13] [i_13] [i_13])))) <= (min((((/* implicit */int) arr_36 [(short)23] [i_13] [i_13] [i_13])), (arr_17 [i_0] [i_0] [i_0] [i_0])))));
            arr_45 [i_13] = ((/* implicit */signed char) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) max((13971959056564084932ULL), (arr_30 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)31868)) << (((((((/* implicit */int) (signed char)-7)) + (36))) - (20)))))) : (((unsigned int) arr_38 [i_0])))))));
        }
        for (short i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_15 = 1; i_15 < 23; i_15 += 3) 
            {
                var_36 = ((/* implicit */unsigned int) ((arr_4 [i_15 + 2] [i_15 + 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                var_37 |= ((/* implicit */short) ((((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_0])) <= (((/* implicit */int) (signed char)-7))));
                var_38 = ((/* implicit */int) ((unsigned int) ((arr_22 [i_0] [i_15 + 1] [23]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31869))))));
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    arr_53 [i_0] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_2 [23]))));
                    var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (arr_17 [i_16] [i_16] [i_16] [i_16]))) % (arr_8 [i_0] [i_0] [i_0] [i_0])));
                }
                arr_54 [i_0] = ((/* implicit */unsigned char) var_0);
            }
            for (int i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_18 = 2; i_18 < 23; i_18 += 3) 
                {
                    arr_59 [i_18 - 1] [8LL] [i_14] [i_0] = ((/* implicit */unsigned long long int) arr_18 [i_17] [i_17] [i_0]);
                    arr_60 [i_14] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)31))))) ? (((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) arr_46 [i_0] [i_0] [14LL]))))) : (((/* implicit */int) (short)-21745)))), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))) == (arr_22 [17] [i_17] [5ULL]))))))));
                }
                for (int i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    var_40 = ((((/* implicit */_Bool) (short)-31869)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (signed char)97)));
                    var_41 = ((/* implicit */unsigned int) arr_31 [i_0] [i_19] [i_0] [i_19] [i_17]);
                }
                /* vectorizable */
                for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [i_0]))));
                    var_43 = 2623273880U;
                    /* LoopSeq 2 */
                    for (int i_21 = 0; i_21 < 25; i_21 += 3) /* same iter space */
                    {
                        arr_69 [i_14] [i_20] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)31868))))) ? (((/* implicit */int) (short)13783)) : (((/* implicit */int) arr_15 [(_Bool)1] [4]))));
                        var_44 = ((((/* implicit */_Bool) arr_33 [i_14])) ? (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [17U] [i_14] [i_14] [i_14]))))));
                    }
                    for (int i_22 = 0; i_22 < 25; i_22 += 3) /* same iter space */
                    {
                        var_45 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)121)) : (1048575)));
                        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13783))) : (((((/* implicit */long long int) ((/* implicit */int) arr_68 [i_0] [3ULL] [i_14] [i_17] [i_20] [(signed char)22] [i_14]))) - (arr_14 [i_20] [i_20] [i_20] [i_20] [i_17] [i_20])))));
                        var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (short)-31869))));
                    }
                }
                var_48 = ((/* implicit */signed char) ((((arr_44 [i_0] [i_17] [i_17]) >= (arr_44 [i_0] [i_0] [i_17]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_0]))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_17] [22U] [i_0]))) ^ (arr_51 [i_0] [i_0] [i_17] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_49 [i_0] [i_0] [i_0])))))))));
                var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) min((((var_11) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_14] [i_17])) ? (((/* implicit */int) (short)-31869)) : (((/* implicit */int) (signed char)86))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_14]))) >= (min((((/* implicit */long long int) arr_7 [i_17] [i_14] [i_0])), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
            }
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)42))))), ((~(0ULL))))), (((/* implicit */unsigned long long int) -1048576)))))));
                var_51 = ((/* implicit */int) ((((arr_10 [i_0] [i_0] [i_23] [i_0]) && (((/* implicit */_Bool) (signed char)6)))) ? (((arr_14 [i_23] [(short)20] [(short)20] [i_14] [i_0] [i_23]) | (arr_14 [i_0] [i_14] [i_14] [i_23] [i_0] [i_23]))) : ((~(arr_14 [i_23] [i_23] [i_14] [i_14] [i_23] [2])))));
                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_37 [i_23] [i_14] [i_14] [(unsigned char)22] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_14 [(unsigned char)8] [4LL] [i_23] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_25 [i_0] [i_14] [i_23]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_56 [i_23])), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_14] [i_0])))) : (((((/* implicit */_Bool) arr_35 [i_0] [i_14] [i_0] [i_14])) ? (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [i_0] [i_0])) : (var_10)))));
            }
            var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) arr_46 [i_14] [i_0] [i_0]))));
            var_54 = ((/* implicit */int) (signed char)100);
        }
        var_55 = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
        arr_74 [(_Bool)1] = ((/* implicit */short) arr_56 [i_0]);
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 25; i_24 += 2) /* same iter space */
    {
        var_56 &= ((/* implicit */short) (~(((/* implicit */int) arr_49 [i_24] [i_24] [i_24]))));
        arr_77 [i_24] &= ((/* implicit */unsigned short) (~(var_7)));
        var_57 = ((/* implicit */unsigned char) (short)-16764);
        arr_78 [i_24] = ((/* implicit */signed char) 1086146170U);
    }
    for (int i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
    {
        arr_81 [i_25] &= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_12 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])), (min((((/* implicit */unsigned long long int) var_7)), (arr_30 [i_25] [i_25]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_25] [i_25] [i_25] [i_25]))) > (min((((/* implicit */long long int) var_4)), (var_7))))))));
        var_58 ^= ((/* implicit */unsigned int) arr_25 [i_25] [(_Bool)1] [i_25]);
        var_59 ^= ((/* implicit */unsigned short) arr_23 [i_25] [i_25] [i_25] [i_25]);
    }
}
