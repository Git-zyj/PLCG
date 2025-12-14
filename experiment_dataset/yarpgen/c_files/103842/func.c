/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103842
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_10);
        var_14 = ((/* implicit */int) (!((!(((/* implicit */_Bool) min(((unsigned short)47003), (((/* implicit */unsigned short) arr_1 [i_0])))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_11 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_1] [i_1]);
                    var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((var_1), (((/* implicit */short) (_Bool)1))))) ? (var_9) : ((~(((/* implicit */int) arr_8 [i_1] [i_1]))))))));
                    arr_12 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) var_3);
                    var_16 = ((/* implicit */unsigned short) arr_3 [i_1]);
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)20102)), (1384880716243999099ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [6ULL])) == (((/* implicit */int) arr_9 [i_4] [i_3 + 1] [i_2]))))) : ((-((((_Bool)1) ? (79278336) : (((/* implicit */int) var_12))))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (var_9) : ((+(((/* implicit */int) var_8))))))) ? (max(((-(((/* implicit */int) (short)-18988)))), (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) ((short) var_3)))))));
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)97)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && ((_Bool)1)))))) && (((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_9 [i_2] [i_3] [i_2])))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)101)), (arr_10 [i_1] [i_1] [i_1])))))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3)))) < (((((/* implicit */int) (unsigned short)65525)) + (((/* implicit */int) var_4))))))) : ((~(((/* implicit */int) min((var_5), (arr_9 [i_1] [i_2] [i_4 + 2])))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (+(max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_16 [(unsigned short)0]))), (((/* implicit */long long int) var_6)))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [10] [i_4 - 1] [i_3 - 2])), (arr_10 [i_1] [i_4 - 1] [i_3 - 2])))), (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) (signed char)-1))))) ? (((/* implicit */int) min((arr_8 [i_2] [(unsigned short)18]), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) arr_7 [(signed char)6] [(signed char)6])))))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_23 = var_9;
                            var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (arr_16 [i_7]) : (arr_16 [i_7])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)8202)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)4)), (var_6)))) : (((((/* implicit */_Bool) (unsigned short)57347)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((((((/* implicit */int) arr_9 [i_2] [i_3] [i_7])) & (arr_3 [i_1]))) & (((/* implicit */int) (signed char)-13))))));
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            arr_24 [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((arr_4 [i_1]) ? (arr_3 [i_1]) : (((/* implicit */int) arr_23 [i_1])))))))));
                            var_25 = min((((unsigned char) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_2))))), (arr_18 [i_1] [i_1] [i_1] [i_1] [i_8] [i_8]));
                        }
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                        {
                            var_26 *= ((/* implicit */unsigned char) arr_5 [i_9]);
                            var_27 -= ((/* implicit */unsigned char) (unsigned short)57333);
                        }
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_28 -= ((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */int) ((unsigned short) (signed char)127))))) << (((/* implicit */int) arr_13 [i_6] [i_2]))));
                            var_29 ^= ((/* implicit */unsigned char) var_5);
                        }
                        var_30 = (+(((/* implicit */int) ((((((/* implicit */_Bool) -1908873937)) || ((_Bool)1))) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10))))))));
                        var_31 = ((((/* implicit */_Bool) min(((unsigned short)8208), (((/* implicit */unsigned short) (signed char)0))))) ? (min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned short)46711)))) : (((((/* implicit */int) (short)28184)) / ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_19 [(_Bool)1] [i_3] [i_3] [i_3 - 1] [i_3]))))))));
                        var_33 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)10)))) ? (max((min((((/* implicit */long long int) arr_6 [i_1] [i_1])), (9223372036854775791LL))), (((/* implicit */long long int) min((var_9), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))))));
                    }
                    for (int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 3; i_12 < 17; i_12 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-77))))))))) == (-9223372036854775792LL)));
                            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8182)) << (((/* implicit */int) arr_15 [i_1])))))));
                            arr_36 [i_1] [(unsigned char)6] [i_3] [i_11] [i_12] [18LL] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))) & (7107431341464261516LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((346257391) >= (((/* implicit */int) var_4)))))) & (((((/* implicit */_Bool) (unsigned short)52228)) ? (-4013375930039641467LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_3] [i_12])))))))));
                        }
                        var_36 = ((/* implicit */int) min((var_36), (((((/* implicit */int) (signed char)-100)) & (((/* implicit */int) (unsigned short)48233))))));
                        var_37 = ((/* implicit */_Bool) 174850894959659014LL);
                    }
                    for (int i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
                    {
                        var_38 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (unsigned short)57315)) : (-1577918040)));
                        var_39 = ((/* implicit */signed char) ((_Bool) var_10));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 4; i_14 < 17; i_14 += 1) 
                        {
                            arr_43 [i_1] [i_1] [i_1] [i_1] [i_3] [i_13] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_1] [i_1])) ? (((/* implicit */int) max((arr_14 [i_3 + 1] [i_1] [i_3] [i_3 + 1]), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) var_5))));
                            var_40 -= ((/* implicit */signed char) 12944133976993339978ULL);
                            var_41 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-346257392)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36234)) & (2147483647)))) : (max((((((/* implicit */_Bool) (signed char)-36)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61428))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            arr_46 [i_2] [i_2] [4] [i_2] &= ((/* implicit */signed char) ((unsigned char) var_9));
                            arr_47 [i_1] [i_1] [i_3] [(signed char)12] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_38 [i_1] [i_2] [i_3 - 2] [i_1] [i_15])) ? (198544056U) : (arr_22 [i_1] [i_1] [i_1] [i_13] [i_15] [i_3 - 1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_45 [i_15] [i_1]))))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_35 [i_1] [i_13] [i_3] [i_1] [i_1] [i_1])), ((~(((/* implicit */int) var_6)))))))));
                            var_43 = min((((/* implicit */unsigned long long int) arr_44 [i_1] [i_2] [i_3] [i_13] [i_15])), (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_2] [i_1] [i_3] [i_13] [i_15])) ? ((-(18446744073709551591ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_15]))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) min((((/* implicit */int) arr_48 [i_1] [i_2] [(_Bool)1] [i_2] [i_1] [i_3 - 2])), (((((/* implicit */int) var_11)) + (var_9))))))));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)57344)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) << (((-346257384) + (346257393)))));
                            var_46 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)8201)))), (((((/* implicit */_Bool) arr_48 [i_1] [i_2] [i_1] [i_16] [6] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) min((arr_49 [i_1] [i_1] [i_3] [i_1] [i_3]), ((unsigned short)46304))))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_17 = 3; i_17 < 17; i_17 += 1) 
        {
            var_47 = ((/* implicit */signed char) var_10);
            var_48 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_2)) << (((var_9) + (1774152714))))) ^ (((/* implicit */int) var_0)))))));
            /* LoopSeq 1 */
            for (long long int i_18 = 1; i_18 < 17; i_18 += 3) 
            {
                var_49 *= arr_42 [i_1] [i_1] [i_1] [i_1] [i_1];
                var_50 = ((/* implicit */unsigned long long int) ((var_7) && (((((/* implicit */int) (unsigned short)61441)) > (((/* implicit */int) (unsigned short)61452))))));
                var_51 = ((/* implicit */unsigned short) 834150207);
            }
        }
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            var_52 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_19] [i_1] [i_19 + 1] [i_19 + 1] [i_19]))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)57253)) : (905574534)))) : (((((/* implicit */_Bool) 5159981949786396510ULL)) ? (12944133976993339986ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            var_53 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) min(((unsigned short)57326), (((/* implicit */unsigned short) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) 
            {
                for (long long int i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 1; i_22 < 18; i_22 += 3) 
                        {
                            var_54 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(23ULL)))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) var_2))))) : (((((/* implicit */int) arr_20 [i_21] [(unsigned short)10] [(unsigned short)6] [i_21] [i_21])) & (((/* implicit */int) (unsigned short)0))))))));
                            var_55 *= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_1))))));
                            var_56 = ((/* implicit */unsigned char) arr_58 [i_19] [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 1) 
                        {
                            var_57 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                            var_58 -= ((/* implicit */signed char) var_0);
                        }
                        var_59 &= ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_1] [2] [i_20] [i_21])) ? (((/* implicit */int) arr_42 [i_19] [i_19] [i_19] [i_19 + 1] [i_19 + 1])) : (((/* implicit */int) var_6))))) + (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                        var_60 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned short)57333)) == (((/* implicit */int) (_Bool)0))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_24 = 3; i_24 < 18; i_24 += 3) 
                        {
                            var_61 = ((/* implicit */unsigned long long int) arr_68 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_62 |= ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_63 += ((/* implicit */unsigned char) (~(((((/* implicit */int) max((var_1), (((/* implicit */short) var_7))))) ^ (((/* implicit */int) arr_64 [i_1] [i_19 + 1] [i_1] [i_19 + 1] [i_25] [i_1] [i_1]))))));
                            var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_3 [i_1]) == (((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-100)), (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [18] [i_1] [i_1] [i_1]))) : (arr_16 [i_1])))))) : (min((arr_54 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_29 [i_1] [(unsigned short)9] [(unsigned short)9] [i_1] [i_25] [i_25] [i_1]))))))));
                        }
                        var_65 = ((/* implicit */signed char) ((arr_33 [i_1] [i_1] [i_1] [i_19] [i_20] [i_20]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_53 [i_1] [i_19] [i_20] [i_1])) ? (((var_5) ? (-8175246073307619663LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_26 = 0; i_26 < 14; i_26 += 3) 
    {
        var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)126)), ((-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_26] [i_26]))));
        var_67 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_60 [i_26] [i_26] [i_26]))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_51 [i_26] [i_26] [(_Bool)1])))) != (((/* implicit */int) var_10))));
        arr_76 [i_26] [i_26] = ((/* implicit */signed char) 222084022);
    }
    var_68 ^= ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_10)))), ((+(((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (unsigned short)55772))))))));
}
