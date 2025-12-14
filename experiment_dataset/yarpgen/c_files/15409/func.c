/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15409
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 += ((/* implicit */long long int) ((_Bool) arr_0 [i_0]));
        arr_3 [i_0] [i_0] |= ((max((((/* implicit */long long int) arr_0 [i_0])), ((+(arr_1 [i_0]))))) << (((((/* implicit */int) var_7)) - (6))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 - 2])) ? (((/* implicit */int) arr_6 [i_0] [i_2 - 2])) : (((/* implicit */int) arr_6 [i_0] [i_2 + 2]))));
                        var_15 -= ((/* implicit */_Bool) arr_10 [i_2 + 3] [i_1] [i_2] [i_2]);
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) -1331269570812385270LL))) + (((/* implicit */int) ((arr_7 [i_0] [i_0] [i_3]) && (((/* implicit */_Bool) arr_1 [16LL])))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((max((-7384488259430456007LL), (-6365001402062053289LL))) + (((/* implicit */long long int) max(((-(arr_10 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))))));
                        var_19 -= ((/* implicit */unsigned char) ((_Bool) arr_1 [i_2]));
                        var_20 = ((/* implicit */signed char) max((arr_1 [i_2 - 3]), (((/* implicit */long long int) (short)3584))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)84), (((/* implicit */unsigned char) arr_7 [i_2 - 2] [i_2 - 3] [i_2 - 3])))))) != (((long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_4])) ? (4150691109662573913LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
                    }
                    for (long long int i_5 = 3; i_5 < 23; i_5 += 2) 
                    {
                        arr_19 [i_0] [20LL] [i_1] [(short)18] = ((((/* implicit */_Bool) -1496511450)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) / (1331269570812385270LL)))) || (((/* implicit */_Bool) 1858798997)))))) : (max((var_8), (((/* implicit */long long int) (_Bool)0)))));
                        arr_20 [i_0] [i_1] = ((/* implicit */long long int) -314275091);
                    }
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_13 [i_2 - 4] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 2])))) ? (((long long int) arr_13 [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 + 1] [i_2 - 4])) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 + 3] [i_1] [i_2 + 1] [i_2 - 1])))));
                            arr_27 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_2] [i_6] [i_0]);
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((((/* implicit */long long int) (-(-1177668656)))) - (arr_28 [i_6] [(short)0] [i_2] [(signed char)4] [i_6]));
                            var_24 = ((signed char) arr_5 [i_1] [i_0]);
                            var_25 += ((/* implicit */int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (arr_1 [i_8]))))) == ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_0] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_0] [i_0]))))))));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */_Bool) max(((-(arr_29 [i_2 + 3] [i_2] [i_2 - 3] [i_2 - 1] [(signed char)6]))), (min((1177668629), (((/* implicit */int) (signed char)77))))));
                            var_26 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-58))))) ? (-7384488259430456022LL) : ((((_Bool)1) ? (-4150691109662573914LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12884))))));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                        {
                            arr_35 [i_1] [i_1] [i_2] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_2 + 1] [i_2] [i_2 - 4] [i_2]))))), (((((/* implicit */long long int) 1984904357)) / (-561037551085061646LL)))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) arr_12 [i_0] [i_1] [i_0] [i_0] [i_2 + 1])), (((short) arr_25 [i_1] [i_1]))))) / (((((/* implicit */_Bool) max((((/* implicit */long long int) -978934365)), (arr_30 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((short) arr_18 [(signed char)18] [i_1] [i_1] [i_1] [i_10])))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                        {
                            arr_39 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_6] [i_6])))))));
                            arr_40 [i_0] [i_1] [i_1] [i_6] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((-7762832463543356107LL) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_6] [i_2] [i_2] [16]))))) % (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-95)))))));
                            var_28 += ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) arr_14 [i_0] [i_6] [i_2] [i_6])) ? (-5019775672327305293LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8610))))) + (5019775672327305305LL)))));
                            var_29 -= ((/* implicit */short) var_12);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_2 + 2] [i_2 - 2] [i_1] [i_2 + 3])) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-30514)))))));
                        }
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                        {
                            var_31 *= ((arr_18 [i_0] [i_1] [i_1] [i_6] [i_0]) || (((/* implicit */_Bool) -7224087564056183277LL)));
                            var_32 -= ((/* implicit */unsigned char) arr_29 [i_0] [i_1] [19LL] [i_6] [i_12]);
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            {
                                var_33 ^= ((/* implicit */long long int) arr_0 [i_0]);
                                arr_52 [i_0] [i_1] [i_1] = ((/* implicit */signed char) -1177668656);
                            }
                        } 
                    } 
                    var_34 ^= var_3;
                    var_35 |= ((/* implicit */int) ((((((/* implicit */int) arr_9 [i_0] [i_0])) - (((/* implicit */int) ((_Bool) 1984904350))))) != (((((/* implicit */_Bool) arr_14 [i_0] [6] [(unsigned char)14] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_2 [(signed char)0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : ((~(arr_25 [(short)20] [(short)20])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_56 [i_15] [i_15] [i_0] |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_51 [i_0] [i_15] [i_15] [(_Bool)1])) ? (((long long int) (signed char)-27)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)8)) >> (((1331269570812385270LL) - (1331269570812385256LL)))))))));
            /* LoopNest 3 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_36 = (+(max((arr_1 [i_16 - 1]), (var_1))));
                            var_37 -= ((/* implicit */_Bool) arr_25 [22LL] [22LL]);
                            var_38 += ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_16 - 1] [i_15] [i_18 - 1] [i_17])) ? (((/* implicit */int) arr_47 [i_16 - 1] [i_15] [i_18 - 1] [i_17])) : (((/* implicit */int) arr_47 [i_16 - 1] [i_15] [i_18 - 1] [i_16 - 1]))))) / (max((var_1), (((/* implicit */long long int) arr_61 [i_0] [i_18 - 1] [i_16] [i_16 - 1])))));
                        }
                    } 
                } 
            } 
            arr_65 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_42 [(short)17] [(short)17] [(short)17] [i_15] [i_15]));
            arr_66 [i_0] [i_0] = ((/* implicit */long long int) max((max((((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [(unsigned char)17] [i_0] [i_0] [i_0])), (-1107000034))), (((((/* implicit */int) arr_49 [i_0] [i_0] [i_15] [i_15] [i_15] [i_15] [i_15])) % (((/* implicit */int) var_6))))));
            var_39 |= ((/* implicit */long long int) ((int) (unsigned char)79));
        }
        for (signed char i_19 = 1; i_19 < 23; i_19 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 25; i_22 += 1) 
                    {
                        {
                            var_40 &= ((var_3) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_17 [i_0] [i_19] [i_20] [12LL])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) var_8)) ? (arr_15 [(unsigned char)13] [i_19] [i_20] [(short)20]) : (((/* implicit */long long int) arr_29 [i_22] [i_19] [i_20] [i_19] [i_0])))))));
                            var_41 |= ((/* implicit */int) ((((/* implicit */long long int) 1708646867)) < (var_1)));
                            arr_76 [i_0] [i_21] [i_20] = ((((/* implicit */_Bool) ((int) arr_28 [i_0] [i_19] [i_0] [i_0] [i_21]))) ? (var_0) : ((-(max((arr_71 [i_19] [i_19] [i_20] [i_21]), (3436661060982837010LL))))));
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) var_5))));
                            var_43 *= ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_12 [i_19 + 2] [i_19 - 1] [i_19 - 1] [i_19 + 2] [i_19 + 2])))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) arr_8 [i_0] [i_19 + 2] [i_19] [9LL]))));
            }
            /* LoopSeq 3 */
            for (long long int i_23 = 0; i_23 < 25; i_23 += 1) 
            {
                arr_80 [i_0] [0LL] &= ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_6 [i_0] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_19] [i_19] [i_19]))) : (-7224087564056183277LL))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                var_45 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)125)) || (((/* implicit */_Bool) 1708646867))))), (((var_11) ? (((/* implicit */int) ((short) 7069158430946849639LL))) : (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_11)))))))));
            }
            for (unsigned char i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                var_46 = ((/* implicit */long long int) min((var_46), (-6914555161619852261LL)));
                arr_84 [i_0] [i_0] [9LL] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) -3))), (((((/* implicit */int) (signed char)-83)) & (((/* implicit */int) (unsigned char)255))))));
            }
            for (long long int i_25 = 0; i_25 < 25; i_25 += 2) 
            {
                arr_87 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6728879971058350427LL)));
                var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) arr_45 [i_0] [(unsigned char)17] [(short)23] [i_25]))));
            }
        }
    }
    for (unsigned char i_26 = 0; i_26 < 17; i_26 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_27 = 0; i_27 < 17; i_27 += 4) 
        {
            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (+(((/* implicit */int) arr_88 [i_26])))))));
            var_49 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_26] [i_26] [i_26] [i_26]))))));
            /* LoopNest 3 */
            for (short i_28 = 4; i_28 < 16; i_28 += 1) 
            {
                for (unsigned char i_29 = 2; i_29 < 15; i_29 += 2) 
                {
                    for (unsigned char i_30 = 2; i_30 < 16; i_30 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((signed char) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))))))));
                            var_51 *= ((/* implicit */short) ((((/* implicit */_Bool) max((min(((unsigned char)159), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) arr_49 [i_26] [i_26] [(signed char)9] [i_29] [15LL] [i_29] [i_30 + 1])) : (((/* implicit */int) (signed char)61))));
                            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) (-(((/* implicit */int) ((5033066758229183062LL) != (4950313918876732417LL)))))))));
                            arr_99 [i_26] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */short) (unsigned char)191);
                        }
                    } 
                } 
            } 
        }
        var_53 = ((/* implicit */short) var_7);
    }
    var_54 = ((/* implicit */signed char) -7224087564056183272LL);
    var_55 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 7384488259430456007LL)) || (((/* implicit */_Bool) (unsigned char)230))))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) - (((/* implicit */int) var_5))))));
}
