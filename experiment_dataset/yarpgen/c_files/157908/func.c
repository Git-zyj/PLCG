/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157908
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((((((/* implicit */int) (signed char)-36)) + (2147483647))) >> (((16979411999513734667ULL) - (16979411999513734646ULL))))), (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_2))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-85)), (var_8)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_9), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (var_0))))) : (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_4] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((0ULL) > (2298992499120292501ULL))))));
                                var_15 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((signed char) 7347419606054152889ULL))) : (((((/* implicit */int) (signed char)14)) & (((/* implicit */int) (signed char)-26))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)31))))) ? (0ULL) : (arr_9 [4ULL] [i_0] [i_2 - 1] [i_3 + 1] [i_4] [2ULL])))));
                                var_16 = ((/* implicit */signed char) max((var_16), (arr_5 [i_1] [i_2] [i_4])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) 8994982263206693077ULL);
                                arr_21 [i_0] [i_1] [6ULL] [i_0] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? ((~(31ULL))) : (var_3))) != (var_8)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_14 [3ULL] [i_7] [i_7] [i_7] [i_7] [(signed char)9] [i_7])), (arr_4 [i_7] [i_7]))), (((/* implicit */unsigned long long int) (signed char)-64))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 4; i_8 < 8; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 8; i_10 += 1) /* same iter space */
                    {
                        var_19 |= arr_20 [i_7] [i_8 + 1] [i_8] [i_9 - 2] [i_7] [i_10];
                        var_20 -= ((/* implicit */signed char) ((unsigned long long int) 13678889206427206998ULL));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 10; i_11 += 1) 
                        {
                            arr_37 [i_7] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */unsigned long long int) arr_33 [i_7]);
                            arr_38 [9ULL] [i_10] [8ULL] [i_8] [i_8] [8ULL] [1ULL] = var_5;
                            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_8] [i_8 - 2] [i_11])) && (((/* implicit */_Bool) (signed char)6))));
                        }
                        arr_39 [2ULL] [i_9] [i_8] [(signed char)0] = ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [i_10 + 1]))) : (18309149097590926226ULL));
                        arr_40 [i_10] [i_10] [i_9 - 2] [4ULL] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)45)) - (((/* implicit */int) (signed char)-46))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((+(arr_20 [i_7] [i_7] [i_7] [i_8] [i_9] [i_10 - 1])))));
                    }
                    for (signed char i_12 = 1; i_12 < 8; i_12 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (var_10)));
                        var_23 = ((/* implicit */signed char) var_12);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((signed char) var_6))))) ? (4749797543898222914ULL) : (min((arr_4 [i_8 - 2] [i_9 - 2]), (var_8)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 4; i_13 < 7; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            {
                                arr_48 [i_7] [i_9] [i_13] [i_14] = ((unsigned long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))));
                                arr_49 [i_14] [i_13] [i_9] [i_8] [i_7] |= ((/* implicit */unsigned long long int) arr_36 [i_9] [i_9] [(signed char)7] [i_9 - 2] [i_14] [4ULL]);
                                arr_50 [i_7] [(signed char)1] [i_9] [i_13 + 1] [i_13] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_7] [(signed char)0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_6))) : (min((((/* implicit */unsigned long long int) (signed char)0)), (18309149097590926225ULL)))))) || (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) - (18446744073709551615ULL))))))));
                                var_25 = arr_7 [i_14] [i_13] [i_9];
                            }
                        } 
                    } 
                    arr_51 [(signed char)8] [(signed char)7] [(signed char)3] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((var_10), ((signed char)120))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_11)), (66707994704880858ULL))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) : (var_3)))))) : (((((/* implicit */_Bool) 1044750431041603597ULL)) ? (((/* implicit */int) arr_42 [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_9])) : (((/* implicit */int) arr_30 [i_8 - 3] [i_8] [i_9 - 1] [i_9]))))));
                }
            } 
        } 
        var_26 &= ((/* implicit */unsigned long long int) ((signed char) max((arr_45 [i_7] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_10 [i_7] [i_7] [i_7] [i_7])))));
    }
    /* LoopNest 3 */
    for (signed char i_15 = 1; i_15 < 20; i_15 += 4) 
    {
        for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 23; i_17 += 1) 
            {
                {
                    var_27 = ((/* implicit */signed char) ((unsigned long long int) var_6));
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) var_12);
                                var_29 = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (8965997433326644280ULL))) && (((/* implicit */_Bool) arr_56 [i_16] [i_16] [(signed char)11]))))), (((((/* implicit */_Bool) max((31ULL), (((/* implicit */unsigned long long int) (signed char)-49))))) ? (((((/* implicit */int) arr_59 [i_16] [i_17] [i_19])) + (((/* implicit */int) arr_59 [i_19] [i_17] [i_15])))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        for (unsigned long long int i_21 = 1; i_21 < 20; i_21 += 4) 
                        {
                            {
                                arr_70 [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))), (((/* implicit */unsigned long long int) (signed char)-46))))) ? ((~(((var_3) << (((7070434539934990361ULL) - (7070434539934990359ULL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((4749797543898222914ULL), (((/* implicit */unsigned long long int) var_2)))) != (min((arr_63 [i_15] [i_20] [i_21]), (((/* implicit */unsigned long long int) (signed char)-24))))))))));
                                arr_71 [i_21] [i_21 - 1] [i_20] [i_20] [i_17] [i_16] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_15 + 1]))) >= (arr_62 [i_21] [i_20] [i_17] [i_16]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_22 = 4; i_22 < 19; i_22 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_63 [i_22 - 4] [i_17] [i_15 + 1])) ? (arr_63 [i_22 + 3] [i_16] [i_15 + 1]) : (5167401706032574368ULL))), (max((arr_63 [i_22 + 3] [(signed char)4] [i_15 - 1]), (((/* implicit */unsigned long long int) arr_59 [i_22 - 3] [i_15 + 3] [i_15 + 3]))))));
                        var_31 = min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) ^ (21ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_62 [i_22] [(signed char)16] [i_16] [i_15]))))))), (((((((/* implicit */_Bool) var_0)) ? (0ULL) : (var_1))) * (0ULL))));
                    }
                    for (signed char i_23 = 2; i_23 < 21; i_23 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)31))));
                        var_33 ^= min(((signed char)33), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 3284721356111218658ULL)))))) >= (max((arr_56 [2ULL] [i_16] [i_17]), (var_12)))))));
                        arr_77 [i_23] [5ULL] [i_17] [i_23] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-37)) && (((((/* implicit */_Bool) (signed char)-25)) && (((/* implicit */_Bool) 13281069004311304980ULL)))))))) : (min((((((/* implicit */_Bool) arr_54 [i_16] [i_15])) ? (8001404787304171380ULL) : (arr_52 [i_15] [i_16]))), (((arr_55 [i_17]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    }
                    for (signed char i_24 = 2; i_24 < 19; i_24 += 3) 
                    {
                        arr_80 [(signed char)22] [i_15] [(signed char)20] [i_17] [(signed char)4] [2ULL] &= ((/* implicit */unsigned long long int) var_11);
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) || (((((/* implicit */_Bool) (signed char)64)) || (((/* implicit */_Bool) var_1)))))))));
                    }
                    for (signed char i_25 = 0; i_25 < 23; i_25 += 2) 
                    {
                        arr_83 [i_15 + 3] [i_15] [i_15] [i_15] = ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [(signed char)21] [i_17] [i_25]))) : (max((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))))), (((((/* implicit */_Bool) arr_56 [i_15] [i_16] [i_15])) ? (arr_75 [i_15] [i_16] [i_16] [(signed char)6] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        arr_84 [i_15] [i_16] [i_15] [i_25] = arr_55 [i_25];
                    }
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) - (arr_62 [i_15] [i_16] [i_15] [i_15 + 3])))))) ? ((+(((((/* implicit */_Bool) (signed char)-1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)94)), (var_3))))));
                }
            } 
        } 
    } 
    var_36 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)98)) + (((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (var_1))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7607418256665851035ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (8359908058260645652ULL))) : (((unsigned long long int) 18446744073709551615ULL)))));
}
