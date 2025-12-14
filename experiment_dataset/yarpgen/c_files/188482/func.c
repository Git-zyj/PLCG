/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188482
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 8; i_1 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)2890)) : (-984861583))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned short)38355)) - (38340)))))) >= (max((((/* implicit */unsigned int) var_16)), (3U))))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0] [i_0 - 1]);
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) 8991537428958479259ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2921))))))), (((/* implicit */unsigned long long int) ((var_15) << (((arr_3 [i_1 + 2] [i_0 + 1]) - (15808256055671518114ULL)))))))))));
        }
        for (signed char i_2 = 3; i_2 < 8; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2])))) ? (((/* implicit */unsigned int) (((((-(((/* implicit */int) (unsigned short)25879)))) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)101)), (var_14)))) - (91)))))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (min((arr_5 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned short)25879))))))));
            arr_10 [i_0] [3ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 3620271706U)) ? (((/* implicit */int) (unsigned short)62657)) : (((/* implicit */int) var_14)))))))));
            var_20 *= 6554587718908684442ULL;
        }
        for (signed char i_3 = 3; i_3 < 8; i_3 += 2) /* same iter space */
        {
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((2418892581U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20926)))))) != (((/* implicit */int) min((var_12), (var_7)))))) ? (min((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_8 [i_0] [i_3]) : (((/* implicit */unsigned int) arr_12 [i_3] [i_3])))))) : (var_11)));
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                arr_18 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_3 - 2] [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_4]))))) ? (((var_15) >> (((((/* implicit */int) (unsigned short)38353)) - (38338))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62658)))))));
                arr_19 [i_0 - 1] [(unsigned short)6] [(unsigned short)6] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) (-(arr_5 [i_0 - 1])))) : (((((1056964608ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_21 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) : (var_10))))))), ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)16378)) <= (((/* implicit */int) (unsigned char)150)))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) ((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_6] [(unsigned short)6])))));
                    arr_24 [i_0] [i_3 - 2] [i_3 - 2] [i_0] = ((/* implicit */unsigned char) (-(arr_12 [i_0 + 1] [i_0 + 1])));
                }
                var_23 *= ((/* implicit */signed char) (-(min((arr_14 [i_5] [i_3 - 2]), (((/* implicit */unsigned int) var_14))))));
                var_24 -= ((/* implicit */unsigned short) var_5);
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max(((+(arr_8 [i_0 + 1] [i_3 - 2]))), (((/* implicit */unsigned int) var_9)))))));
            }
            for (short i_7 = 3; i_7 < 8; i_7 += 2) 
            {
                var_26 -= ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) 4376855672714333461LL)), (((arr_25 [i_0] [i_3] [i_7]) + (((/* implicit */unsigned long long int) var_10)))))));
                var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) var_3)), (var_14))))) | (arr_14 [(short)0] [i_3 - 2])));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_13))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 3) 
        {
            arr_30 [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) arr_14 [i_0] [i_0]);
            arr_31 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
        }
        arr_32 [i_0] = ((/* implicit */unsigned long long int) var_6);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                {
                    arr_39 [i_0] [(_Bool)1] [i_10] = var_9;
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 7; i_12 += 4) 
                        {
                            {
                                arr_44 [i_0 + 1] [i_9] [i_0 + 1] [i_11] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (0U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_36 [i_9] [i_9] [i_0] [i_12 + 1]), (arr_36 [i_0] [i_0] [i_0] [i_12 + 3])))))));
                                arr_45 [i_0] [i_9] [i_9] = ((/* implicit */short) min(((unsigned short)36822), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != ((-(var_11))))))));
                            }
                        } 
                    } 
                    var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1])) ? (511U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])))))) ? (((((/* implicit */int) arr_41 [i_10])) << (((((/* implicit */int) var_13)) - (8140))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_23 [i_10] [i_9])), (arr_26 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
                }
            } 
        } 
    }
    for (unsigned int i_13 = 1; i_13 < 9; i_13 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29653)) + (((/* implicit */int) (_Bool)1))))) ? (min(((+(arr_28 [2ULL] [i_13] [i_13 - 1]))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_13 - 1])) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned short)9717)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_14 = 3; i_14 < 7; i_14 += 4) 
        {
            var_31 = ((/* implicit */_Bool) var_13);
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) var_4))));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_16))) | ((-(((/* implicit */int) (unsigned short)39321)))))))));
        }
        var_34 = ((/* implicit */long long int) var_0);
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_13] [i_13] [i_13] [5U] [i_13 + 1] [i_13 - 1] [i_13 + 1])) ? (min((((/* implicit */unsigned long long int) (unsigned short)45232)), (6279888898148441322ULL))) : (((/* implicit */unsigned long long int) max((arr_43 [i_13] [i_13] [i_13 - 1] [i_13] [i_13 + 1] [5U] [i_13 + 1]), (((/* implicit */unsigned int) var_2)))))));
    }
    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (_Bool)0))));
    /* LoopSeq 2 */
    for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_14)), (var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) && (((/* implicit */_Bool) var_7))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_16 = 1; i_16 < 19; i_16 += 2) 
        {
            arr_56 [i_16] = ((/* implicit */unsigned short) var_11);
            arr_57 [i_16] [12U] [(unsigned short)20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)45232)) : (((/* implicit */int) (signed char)86))))) ? (arr_55 [i_16 - 1] [i_16 - 1]) : (((/* implicit */int) var_13))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            arr_67 [i_15] [i_18] [i_16] [i_15] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_65 [i_15] [(short)4] [i_15] [i_15] [i_15] [i_15] [i_15]))));
                            arr_68 [i_19] [i_16 + 2] [i_17] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((var_16) >> (((4257600475734533366ULL) - (4257600475734533350ULL)))))) | (2519960667U)));
                        }
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((short) (short)128)))));
                    }
                } 
            } 
            var_39 = ((unsigned int) arr_60 [i_16 + 2] [i_16 + 1] [0LL] [i_16 + 1]);
        }
        arr_69 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_60 [i_15] [i_15] [i_15] [i_15])), (var_13)))) ? (min((((/* implicit */int) (_Bool)1)), (((int) var_6)))) : (((/* implicit */int) var_14))));
        var_40 = ((/* implicit */signed char) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((3841680858U), (((/* implicit */unsigned int) var_13)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
    }
    /* vectorizable */
    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
    {
        var_41 = ((/* implicit */int) (unsigned char)0);
        arr_74 [i_20 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 5668266479471054468LL))));
    }
    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (4216670137U) : (((/* implicit */unsigned int) max((max((((/* implicit */int) var_7)), (var_10))), (2097151))))));
}
