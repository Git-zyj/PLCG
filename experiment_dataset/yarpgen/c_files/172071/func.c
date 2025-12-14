/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172071
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (min((min((((/* implicit */long long int) (short)-645)), (var_4))), (((/* implicit */long long int) arr_0 [i_4]))))));
                                var_15 = ((/* implicit */short) var_8);
                                var_16 *= var_5;
                                arr_14 [(_Bool)1] [i_3] [i_3] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) ((short) arr_1 [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [(_Bool)1] [i_5] [i_0] [i_1] [i_0] = ((_Bool) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [9LL] [i_0])))))));
                                var_17 += ((/* implicit */_Bool) var_9);
                                var_18 = 4357408352138568690LL;
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned int) (_Bool)1);
                    var_20 = ((/* implicit */short) (((((~(((/* implicit */int) arr_3 [i_1] [i_2 + 1])))) + (2147483647))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_0] [i_2 + 1] [i_0] [i_0]))) & (((arr_10 [11LL] [11LL] [(_Bool)1] [(short)3] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])) : (-4144367689434991076LL))))) - (4623LL)))));
                    var_21 = ((/* implicit */_Bool) 1U);
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_27 [i_0] [6U] [(_Bool)1] [(short)12] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)30919))))));
                            /* LoopSeq 3 */
                            for (long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                            {
                                var_22 = (_Bool)1;
                                arr_30 [i_0] [i_1] [i_9] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((unsigned int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [5U]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_19 [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])))));
                            }
                            /* vectorizable */
                            for (long long int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                            {
                                var_23 = arr_3 [i_10] [i_1];
                                var_24 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_11)))) && (var_14)));
                                var_25 += ((/* implicit */unsigned int) (!((((_Bool)1) && (((/* implicit */_Bool) var_4))))));
                                arr_34 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10] = -1LL;
                            }
                            /* vectorizable */
                            for (long long int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                            {
                                var_26 ^= ((/* implicit */short) var_10);
                                arr_37 [13U] [i_1] [i_1] [i_1] [i_1] [i_11] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 4294967294U)) || (((/* implicit */_Bool) 4098518860U)))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_12 = 3; i_12 < 13; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 3; i_13 < 13; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (var_12)));
                        /* LoopSeq 4 */
                        for (unsigned int i_14 = 1; i_14 < 15; i_14 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) / ((-(-574329790941552244LL)))));
                            arr_47 [i_0] [i_1] [i_0] [i_13] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (1699252354U))))));
                        }
                        for (unsigned int i_15 = 1; i_15 < 15; i_15 += 2) /* same iter space */
                        {
                            var_29 = ((_Bool) (-(((/* implicit */int) (_Bool)0))));
                            arr_50 [i_1] [i_1] [i_13] = ((/* implicit */short) (+(1997543887U)));
                            arr_51 [i_0] [i_13] [i_12] [(unsigned short)3] [i_15] = (_Bool)1;
                            var_30 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) != (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_16 = 1; i_16 < 15; i_16 += 2) /* same iter space */
                        {
                            var_31 -= ((/* implicit */unsigned int) (!(arr_16 [i_12])));
                            var_32 -= ((/* implicit */unsigned int) ((_Bool) arr_32 [i_16 + 1] [i_1] [i_12 - 1] [i_13 + 2]));
                            var_33 -= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_32 [i_16] [(unsigned short)0] [i_12] [i_1])))))));
                            arr_55 [i_0] [i_0] [i_1] [i_16] [i_12 - 2] [i_12 + 2] |= var_14;
                        }
                        for (unsigned int i_17 = 1; i_17 < 15; i_17 += 2) /* same iter space */
                        {
                            var_34 *= ((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0]);
                            var_35 |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)45484)) & (((/* implicit */int) var_0))));
                            arr_58 [i_13] [i_13] [i_17] = ((/* implicit */short) (+(var_4)));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (min((((/* implicit */long long int) arr_29 [0U] [i_12 + 2] [i_12] [(_Bool)0] [i_18])), (5329333615416484371LL))))))));
                        arr_63 [i_0] [i_18] [i_12] [11U] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((_Bool) var_14))) : ((-(((/* implicit */int) (!(arr_33 [i_0] [i_0] [i_0] [i_18] [i_1] [i_18] [i_12]))))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_19 = 2; i_19 < 11; i_19 += 4) 
    {
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                arr_79 [i_21] [i_21] [i_21] [i_23] [i_23] = ((/* implicit */_Bool) ((((long long int) ((_Bool) var_6))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_37 = ((/* implicit */unsigned short) var_5);
                                var_38 += ((/* implicit */short) ((_Bool) (+(arr_15 [i_19 - 2]))));
                                arr_80 [i_19] [i_19] [i_21] [(_Bool)1] = ((/* implicit */_Bool) ((((min((((((/* implicit */_Bool) arr_6 [i_19] [i_20] [i_19] [i_20] [i_20])) ? (((/* implicit */int) (unsigned short)38833)) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_66 [i_19])))) + (2147483647))) << ((((+(4294967295U))) - (4294967295U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 3; i_24 < 10; i_24 += 3) 
                    {
                        for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) 
                        {
                            {
                                arr_85 [i_19] [i_19] [(unsigned short)5] [i_24] [11LL] [i_25] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_19])) >= (((/* implicit */int) arr_1 [i_21]))))) << ((((+(((/* implicit */int) arr_1 [i_24 - 3])))) - (6969)))));
                                var_39 |= ((/* implicit */_Bool) ((unsigned int) 4098518860U));
                                arr_86 [i_25] [i_24 - 3] [(_Bool)1] [i_20] [i_19] = ((/* implicit */unsigned int) (_Bool)1);
                                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) arr_32 [i_19] [i_19] [i_21] [i_24]))));
                                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) arr_36 [i_20] [i_19 + 1] [i_21] [(unsigned short)7] [i_19] [(unsigned short)7] [i_19 + 1]))));
                            }
                        } 
                    } 
                    arr_87 [i_19] [i_20] [(_Bool)1] = (((!((!(((/* implicit */_Bool) 4098518860U)))))) || (((/* implicit */_Bool) 3U)));
                }
            } 
        } 
    } 
}
