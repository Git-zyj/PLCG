/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16465
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
    var_16 &= ((/* implicit */unsigned char) -271760310);
    var_17 = (+(((/* implicit */int) var_1)));
    var_18 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-32761)))), ((!(((/* implicit */_Bool) var_5))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_1])))), (((((var_4) > (((/* implicit */int) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) var_7)) : (max((arr_2 [i_0] [i_0]), (((/* implicit */int) var_7))))))));
            var_19 += ((/* implicit */unsigned short) ((var_8) << (((arr_0 [i_0]) - (3965345790021814236LL)))));
            arr_5 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) max(((unsigned char)2), (((/* implicit */unsigned char) arr_3 [i_1] [i_1] [i_0 - 1]))))))) | (((/* implicit */int) ((signed char) (unsigned short)47048)))));
            var_20 = ((/* implicit */int) (-((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_0)))))));
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                arr_10 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) ^ (arr_0 [i_0 - 1]));
                var_21 = ((/* implicit */long long int) min((var_21), (((arr_3 [i_0] [i_0] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) ((13796487489808125001ULL) > (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) : (arr_0 [i_2])))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    arr_13 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_4] [i_4] [i_3 - 1]))));
                    arr_14 [6ULL] [i_2] [i_3] [i_4] [i_3] &= ((/* implicit */int) 4650256583901426614ULL);
                    var_22 = ((/* implicit */unsigned int) (unsigned short)0);
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_0] [i_4] [i_3 + 2] [i_0] [i_3 + 2]))));
                }
            }
            for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_15))) << (((((/* implicit */int) arr_17 [i_0] [i_0 - 1] [6])) - (149)))))));
                    arr_23 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))) == (((/* implicit */int) var_1))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 4650256583901426615ULL))));
                    arr_26 [i_0] [i_0] = ((/* implicit */_Bool) var_14);
                    arr_27 [i_0] [i_2] [i_0] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) 0U);
                }
                arr_28 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                var_26 = ((/* implicit */_Bool) max((((unsigned long long int) ((1439980929367885640ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6)))))), (((((/* implicit */_Bool) -3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (13796487489808125000ULL)))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (13796487489808125001ULL)));
            }
            var_28 = (((-(var_5))) >> (((var_0) - (515819662U))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 7; i_10 += 3) 
                    {
                        {
                            arr_37 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2638))) + (24062815103742226LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10] [i_0] [i_10 - 1] [i_10] [i_10] [i_10 + 2])) ? (arr_11 [i_10 + 3] [i_0]) : (((/* implicit */int) arr_12 [(_Bool)1] [i_0] [i_10] [i_0] [i_10] [i_10 + 2])))))));
                            var_29 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                        }
                    } 
                } 
                var_30 -= ((/* implicit */unsigned int) var_8);
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_31 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_30 [i_0] [i_0 - 1] [i_0 - 1] [i_12]), (arr_30 [i_0] [i_0] [i_0 - 1] [i_12]))))));
                            var_32 *= ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_17 [i_0 - 1] [i_2] [i_12])))));
                        }
                    } 
                } 
            }
            for (short i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                arr_44 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) max((6873084194315190178LL), (((/* implicit */long long int) var_5))))))))));
                arr_45 [i_0 - 1] [i_0] [i_0 - 1] [i_13] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0] [i_0] [i_0 - 1])), (arr_8 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_13]))))))));
            }
        }
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_32 [(unsigned short)6])) : (((/* implicit */int) arr_32 [(unsigned short)4])))), (((/* implicit */int) var_10)))))));
        arr_46 [i_0] = ((/* implicit */signed char) 13796487489808124995ULL);
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            for (unsigned int i_16 = 3; i_16 < 8; i_16 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_25 [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_14 - 1]), (arr_25 [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_14 - 1]))))));
                        var_35 = ((/* implicit */long long int) (unsigned char)237);
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            var_36 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), ((+(arr_58 [i_18] [i_18] [i_17] [i_17] [i_16] [i_15] [i_14])))));
                            var_37 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_14] [i_14] [i_14])) | (var_4)))), ((+(4650256583901426594ULL)))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            arr_62 [i_14] [i_14] [i_19] [i_17] [i_14] = ((/* implicit */unsigned long long int) arr_22 [i_19] [i_16] [i_16] [i_15]);
                            arr_63 [i_14] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_34 [i_14] [i_14] [i_17] [i_19])), (var_11)));
                        }
                        for (unsigned short i_20 = 2; i_20 < 9; i_20 += 4) 
                        {
                            arr_66 [i_20 + 1] [i_14] [i_14] [i_14] [i_16] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_18 [i_14 - 1] [i_14 - 1])), (0U))), (((/* implicit */unsigned int) arr_17 [i_16 - 2] [i_16 + 2] [i_14]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_14] [i_16] [i_16] [i_20])) ? (arr_57 [i_14 - 1] [i_14] [i_14] [i_17] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14] [i_14])))))) : (max(((-(var_2))), (((/* implicit */long long int) (-(((/* implicit */int) arr_52 [i_14] [i_14] [i_17] [i_14])))))))));
                            var_38 ^= ((/* implicit */unsigned int) ((unsigned char) 0ULL));
                            arr_67 [i_14] [i_16 + 1] [i_14] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)62898))))));
                            arr_68 [i_14] [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14] = ((/* implicit */int) 9223372036854775803LL);
                        }
                    }
                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_39 = ((/* implicit */signed char) (unsigned short)1);
                            var_40 = ((/* implicit */int) 1966530585U);
                        }
                        arr_75 [i_14] [i_21] = ((/* implicit */unsigned char) ((unsigned long long int) arr_19 [i_14] [i_16 - 3] [i_16]));
                    }
                    arr_76 [i_15] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_14] [i_14] [i_16])))))));
                    arr_77 [i_14 - 1] [i_15] [i_14 - 1] [i_14] = var_13;
                }
            } 
        } 
        var_41 += ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) arr_54 [4ULL] [4ULL] [i_14] [i_14 - 1] [i_14 - 1])), ((signed char)0)))) << ((((~(((/* implicit */int) (unsigned short)1377)))) + (1398)))));
        var_42 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_47 [i_14])))));
    }
}
