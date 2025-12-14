/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156901
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
    var_20 = ((/* implicit */unsigned int) ((unsigned char) var_2));
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) max((var_9), (((/* implicit */unsigned int) var_18))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (unsigned char)243)) - (((/* implicit */int) (signed char)72)))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((var_13) ^ (((/* implicit */int) var_1))));
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_6 [(short)12] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) var_18)) : ((-(((/* implicit */int) arr_3 [i_2]))))))) ? ((-(((/* implicit */int) arr_3 [i_2 + 2])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        arr_13 [i_2] = ((/* implicit */unsigned char) max((((((((((/* implicit */int) arr_11 [i_0] [i_0] [(short)12] [(short)12])) + (2147483647))) >> (((-7859427333677186688LL) + (7859427333677186710LL))))) + (((/* implicit */int) max((arr_0 [i_4] [i_1]), (var_17)))))), (((/* implicit */int) ((signed char) (short)8685)))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_16 [(short)9] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_2] [i_0])) ? (((var_15) << (((arr_7 [i_0] [i_0] [i_0]) - (2741510052U))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (var_1)));
                            arr_17 [(short)4] [(short)4] [i_5] [i_4] [i_4] [(signed char)11] [i_4] = ((/* implicit */short) arr_9 [i_1] [i_1] [i_1] [(short)10] [i_5] [i_1]);
                        }
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            arr_20 [i_6] [i_4] [15] [15] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_2]))))));
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_4] [i_6] [i_6] &= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) arr_1 [i_1] [i_1]))));
                            arr_22 [i_4] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) -7859427333677186700LL)))));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_27 [i_1] = ((/* implicit */unsigned long long int) var_1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 3) 
                        {
                            arr_30 [(_Bool)1] [i_1] |= ((/* implicit */signed char) var_8);
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) -7859427333677186688LL))));
                        }
                        arr_31 [i_0] [i_1] [i_1] [(short)13] = ((/* implicit */_Bool) (~((~(var_4)))));
                        var_27 ^= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (+(var_9)))))));
                        var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_14 [i_2 + 1] [10ULL] [i_2] [i_2] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_19 [i_7] [i_1])) ? (arr_19 [i_0] [i_7]) : (((/* implicit */int) arr_3 [13LL])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_5)))))))));
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    arr_34 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */unsigned char) 7859427333677186674LL);
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (((~((-(((/* implicit */int) arr_8 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0])))))) - (((((((/* implicit */int) ((signed char) -7859427333677186675LL))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [(short)8] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10))) - (169ULL))))))))));
                }
                for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        arr_41 [i_0] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) -7859427333677186681LL)), (((unsigned long long int) min(((short)20415), ((short)-20446))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */short) min((arr_7 [i_11] [i_11] [i_10]), (((/* implicit */unsigned int) ((signed char) max((var_13), (((/* implicit */int) var_1))))))));
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                            var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_11] [(signed char)13]), (((/* implicit */short) ((signed char) var_7)))))) && (((/* implicit */_Bool) arr_28 [i_0] [4ULL] [i_0] [i_0] [i_0]))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(short)14] [i_10])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                            arr_47 [i_0] [(short)9] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_28 [i_13] [i_11] [i_10] [17ULL] [17ULL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15))))));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_10])) ? (arr_18 [i_0] [i_10] [i_11]) : (((/* implicit */long long int) var_9)))))));
                            arr_48 [i_11] [i_11] = ((/* implicit */short) ((unsigned char) 7859427333677186675LL));
                            arr_49 [i_1] [10LL] [i_10] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 8595078508635741127LL)) : (arr_35 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_39 [i_1] [i_11] [i_10] [i_1] [i_0])) : (((/* implicit */int) var_3))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_34 = ((/* implicit */short) arr_15 [i_0] [i_14] [i_0] [i_0]);
                            arr_53 [6U] [i_14] [(_Bool)1] [i_14] [i_0] = ((/* implicit */unsigned long long int) var_18);
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            arr_57 [i_0] [i_0] [i_15] [i_15] [i_15] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                            arr_58 [i_10] [i_10] [i_10] = ((/* implicit */short) ((signed char) arr_24 [i_1] [i_11]));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            var_35 = ((/* implicit */int) var_6);
                            arr_62 [i_16] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)11486);
                        }
                        var_36 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9584270106493613222ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20430))) : (-7859427333677186675LL)))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        arr_65 [i_17] [i_1] [i_0] [17ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) arr_54 [i_17] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? ((~(121861290))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_1])))))));
                        arr_66 [i_0] [(short)0] [i_10] [i_0] [i_10] = ((signed char) (!(((/* implicit */_Bool) var_4))));
                        var_37 -= ((/* implicit */short) (+(((max((-7859427333677186675LL), (((/* implicit */long long int) arr_19 [i_0] [(_Bool)1])))) | (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_0] [(unsigned char)12] [i_17])))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_18 = 3; i_18 < 15; i_18 += 4) 
                    {
                        for (short i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            {
                                var_38 *= ((/* implicit */short) ((((/* implicit */int) arr_71 [i_0] [i_0] [i_10] [i_18 + 1] [i_0])) ^ (((/* implicit */int) arr_39 [i_0] [i_1] [i_0] [i_18 + 2] [i_0]))));
                                arr_73 [(signed char)4] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_51 [i_18] [i_18 + 1] [i_18 - 1] [i_18 - 2] [i_18 + 1])), (var_9)))) * (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-56))))), (arr_28 [i_18 + 2] [i_18 - 3] [i_18 - 1] [i_18 - 1] [i_18 + 2])))));
                                arr_74 [(short)10] [i_1] [i_1] = ((/* implicit */unsigned char) (~(min((((var_11) ^ (((/* implicit */unsigned long long int) 7859427333677186664LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (arr_32 [(signed char)3] [(signed char)3]) : (((/* implicit */int) arr_40 [i_18 - 3] [i_10])))))))));
                                var_39 = ((/* implicit */short) arr_69 [i_0] [(signed char)6] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_75 [i_0] [i_0] [i_10] [i_0] = ((/* implicit */int) var_5);
                }
                var_40 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [(short)2] [i_1] [i_1] [i_1])) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_45 [i_1] [7]))))))) << (((((/* implicit */_Bool) max((((/* implicit */int) arr_67 [i_0] [i_1] [i_1])), (var_8)))) ? (((/* implicit */int) ((arr_35 [i_1] [3ULL] [(unsigned char)1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) (_Bool)1))))));
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (var_15)))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12937))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_2))))))))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) var_7);
    var_43 = ((/* implicit */short) var_12);
}
