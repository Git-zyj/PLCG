/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106665
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9)))) ? (arr_7 [i_1 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (short)17984)))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                arr_11 [i_2] [(unsigned short)7] [i_2] = ((/* implicit */short) (((((!(((/* implicit */_Bool) (unsigned short)26015)))) && ((!(((/* implicit */_Bool) 16962033809892183933ULL)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) (short)21211))), (max((((/* implicit */unsigned long long int) 2794255544331616654LL)), (var_9))))))));
                arr_12 [4ULL] [i_1] [i_0] &= arr_5 [i_0] [i_1];
            }
            for (signed char i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                var_12 = ((/* implicit */signed char) max((arr_0 [i_0]), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (((-2794255544331616655LL) ^ (var_1)))))));
                var_13 ^= ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 + 2] [6LL] [i_3] [i_3]))) * (2794255544331616663LL));
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    arr_20 [5LL] = ((/* implicit */short) 6223563690744330372ULL);
                    arr_21 [i_0] [(_Bool)1] [i_1 + 1] [i_3] [(unsigned char)4] = ((/* implicit */unsigned char) 0ULL);
                    var_14 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                    arr_22 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (+((~(-4157683291331342967LL)))));
                    var_15 = ((/* implicit */unsigned long long int) var_2);
                }
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_26 [(short)9] [(short)9] [i_3] [i_5] = ((/* implicit */long long int) var_0);
                    arr_27 [i_0] [i_0] [4LL] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) arr_15 [(unsigned char)5] [i_1 + 1] [i_1 + 1] [i_1 - 1]))), (((unsigned long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned short)11019)) - (11013))))))));
                    arr_28 [i_5] [5ULL] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 10541421529458296400ULL)) ? ((-9223372036854775807LL - 1LL)) : (-2794255544331616654LL))), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) > (-5747954353500171288LL))) && (((/* implicit */_Bool) max((var_5), (var_4)))))))));
                }
            }
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((-1509104047634819339LL), ((+(arr_4 [(unsigned char)9] [i_1 + 1])))));
                            arr_38 [1] [1] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_5 [3ULL] [6LL])))) ? (var_9) : (((((/* implicit */_Bool) var_5)) ? (var_9) : (arr_5 [i_1] [3LL])))));
                            arr_39 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_8] [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_35 [i_8] [i_1] [i_1 + 1] [(short)6] [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_35 [i_7] [i_7] [i_1 + 3] [(unsigned short)4] [i_1 + 2] [i_1 + 2] [i_1]))))) ? (((((/* implicit */int) arr_35 [(short)8] [(short)8] [i_1 + 3] [i_1 - 1] [i_1 - 1] [1LL] [i_1 - 1])) + (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_10 [1ULL] [i_1] [i_6] [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1 + 3])) : (((/* implicit */int) arr_10 [(unsigned char)8] [i_1] [(unsigned char)8] [i_1 + 2]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            arr_49 [i_0] [i_10] [8ULL] = ((/* implicit */short) (((((((_Bool)1) ? (5000085845274729483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_9] [i_9] [i_9]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) - (max((max((arr_6 [(short)7] [(short)11]), (arr_6 [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_9] [i_0] [i_11] [i_10 + 2]))))));
                            arr_50 [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)242))));
                            var_17 = ((/* implicit */short) (+(((/* implicit */int) ((-6934644326889754737LL) > (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)1] [i_10 - 1] [i_11]))))))));
                            arr_51 [i_0] [1ULL] [5ULL] [1ULL] [5ULL] [i_10] [7ULL] = ((/* implicit */int) max((var_1), ((~(arr_4 [i_1 - 1] [i_10 + 2])))));
                        }
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            var_18 ^= max((max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)50575))))))), (((/* implicit */unsigned long long int) arr_52 [i_1 + 3] [i_0] [i_0] [4ULL] [i_1 + 2] [i_10 - 1] [(signed char)2])));
                            arr_54 [i_0] [i_1] [i_9] [i_1] [i_10] [i_12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-30000)) || (((/* implicit */_Bool) var_11)))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) max((arr_40 [i_1 + 3]), (arr_40 [i_1 + 2]))))));
                        }
                        arr_55 [5ULL] [5ULL] [i_10] [i_10] = ((/* implicit */long long int) arr_37 [7LL] [i_9] [6ULL] [i_1] [1ULL]);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [(signed char)11] [i_10 + 2] [i_10])) || (((/* implicit */_Bool) max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [(short)9] [i_10 + 1] [(unsigned short)7] [i_9])))))));
                        arr_56 [i_0] [i_10] [i_9] [i_10] = ((/* implicit */short) (~((-(((/* implicit */int) ((signed char) var_0)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 2) /* same iter space */
        {
            arr_60 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((18446744073709551610ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)19248)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        }
        for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 2) /* same iter space */
        {
            var_21 += ((/* implicit */long long int) (unsigned short)50575);
            /* LoopNest 2 */
            for (unsigned short i_15 = 3; i_15 < 10; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) (~(arr_0 [i_0])));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 2; i_17 < 11; i_17 += 4) 
                        {
                            arr_72 [i_15] [0ULL] [i_15] [i_15] [i_17 + 1] [i_15] = ((/* implicit */long long int) arr_52 [i_0] [i_15] [2LL] [i_0] [i_0] [i_0] [i_0]);
                            arr_73 [i_0] [i_0] [2ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_69 [(unsigned char)1] [i_15] [i_17] [i_17] [i_17 - 1])))) ? (((((/* implicit */int) var_11)) / (666384374))) : ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)63))))))));
                            arr_74 [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_44 [i_0] [i_14] [i_0] [i_16] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [1ULL] [i_0]))) <= (var_9)))) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) var_4)))))));
                        }
                        arr_75 [i_0] [i_14] [1LL] [i_15] = ((arr_15 [(signed char)11] [3ULL] [i_15] [i_16]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-14711)), ((unsigned short)46846)))) : (((/* implicit */int) ((signed char) -1029424409)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (arr_34 [i_14 + 3])))) : (var_9))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_18 = 1; i_18 < 10; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)18684))));
                /* LoopSeq 1 */
                for (long long int i_20 = 4; i_20 < 11; i_20 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) var_5)))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (short)-14711))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) arr_5 [i_21] [i_0]);
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+(((/* implicit */int) arr_70 [i_20 - 3] [i_18 + 2])))))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_86 [i_18 + 2] [i_18 + 2] [i_18] [i_18 + 1] [i_18 - 1]))));
                    }
                    var_30 -= arr_42 [i_0] [i_20 - 3] [i_18 + 1];
                }
                var_31 -= (!(((/* implicit */_Bool) arr_30 [i_18 - 1] [i_18 - 1])));
            }
            for (unsigned long long int i_23 = 2; i_23 < 10; i_23 += 4) 
            {
                var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 9381596127917172165ULL)) && (((/* implicit */_Bool) var_0))));
                var_33 = ((/* implicit */unsigned long long int) ((((3349698916611637414ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_7))));
            }
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 2831636991283152067ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46846))))))))));
        }
        var_35 = arr_62 [i_0];
        var_36 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_0])))))));
    }
    var_37 |= ((/* implicit */long long int) var_2);
}
