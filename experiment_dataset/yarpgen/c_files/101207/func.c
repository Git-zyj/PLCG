/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101207
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) var_2)) == ((~(((/* implicit */int) min((var_2), (var_10)))))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_5 [(signed char)7] [i_2 + 1] [i_2 + 1])) : (var_3)))))));
                        arr_9 [i_0] [i_2] [i_2 + 2] [i_0] [i_2] [i_0] = (-(max((((unsigned int) var_10)), (((/* implicit */unsigned int) var_6)))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_8)))))));
                        arr_10 [i_2] [i_1] [i_1] [10LL] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (-(var_7))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                        arr_14 [i_0] [i_1] [i_2] [i_2 - 1] [i_0] [i_4] &= ((/* implicit */_Bool) ((arr_2 [i_2 + 1] [i_2 - 1]) << ((((+(((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1])))) - (50)))));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_2] [i_5] [(unsigned char)12] [i_2] [i_2] = ((((/* implicit */_Bool) ((signed char) arr_6 [i_2 + 1]))) ? (min(((+(31U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_6 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_5] [i_2]))));
                            arr_20 [(unsigned char)11] [i_1] [i_1] [i_0] [i_6] [i_2] = ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) - (((min((37U), (arr_7 [(_Bool)1]))) << (((var_3) - (407018063))))));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_16 = ((/* implicit */_Bool) (~(min((var_3), (((/* implicit */int) var_11))))));
                            var_17 = var_10;
                            arr_24 [3] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 2953897105U)) && (((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1]))))) - (((/* implicit */int) var_1))));
                            arr_25 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_7] [i_0] [i_0] [i_2 - 1] [4]))) : (4294967265U));
                        }
                        arr_26 [i_0] [i_1] [(_Bool)1] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)233)))) ? (((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 - 1])) : (((((/* implicit */int) var_8)) + (((/* implicit */int) var_9))))))));
                        arr_27 [i_2] [i_2] [i_2] [i_5] = var_6;
                    }
                    for (int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2 - 1])) ^ (((/* implicit */int) arr_18 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]))))) <= (((long long int) var_11)))))));
                            arr_34 [(signed char)12] [13LL] [i_2] [i_8] [i_2] [i_9] = arr_13 [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2] [i_2];
                            var_19 = min(((signed char)-40), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_6)))))))));
                            var_20 = max((((((/* implicit */int) arr_4 [i_2 - 1])) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1535916483U))))))), ((!(((/* implicit */_Bool) 32505856)))));
                        }
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((-(var_7))) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                            arr_37 [i_2] [i_2 + 1] [i_2 + 1] [i_1] [i_2] = arr_6 [i_8];
                        }
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((((/* implicit */int) min((var_5), (arr_15 [i_1] [i_1] [i_1] [(_Bool)1])))) + (2147483647))) << ((((~(var_7))) - (611251938U)))))));
                            var_23 |= ((/* implicit */int) var_2);
                            var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)24)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 1; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            arr_43 [i_2] [i_1] [i_2] [(signed char)11] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                            arr_44 [14] [i_1] [i_1] [i_0] [i_12] [i_2] [i_1] = 2759050838U;
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((unsigned int) var_0)) : ((+(arr_23 [i_0] [i_1] [(_Bool)1] [i_8] [i_0]))))))));
                            arr_48 [i_2 + 1] [i_2] = (+(((/* implicit */int) ((signed char) 67076096))));
                            var_26 = ((/* implicit */unsigned int) (_Bool)1);
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
                        }
                        arr_49 [i_2] = ((/* implicit */signed char) ((((8388607) / (((/* implicit */int) var_8)))) >= (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_8)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 15; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                arr_55 [i_0] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_14 + 3] [i_2 + 1] [i_2 + 1] [(signed char)7] [i_0] [i_0])) || (((/* implicit */_Bool) var_5)))))));
                                var_28 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) / (arr_47 [i_0])))))));
                                arr_56 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = 47U;
                                arr_57 [i_15] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(1627286798U))))))) : (((/* implicit */int) (unsigned char)126))));
                            }
                        } 
                    } 
                }
                for (signed char i_16 = 1; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    arr_60 [i_0] [i_1] [i_16] = ((/* implicit */long long int) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 15; i_17 += 2) 
                    {
                        for (unsigned int i_18 = 2; i_18 < 17; i_18 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */int) 31U);
                                var_30 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_36 [i_0] [i_0] [i_0] [9U] [i_18] [i_17])), (var_1)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_11)))))) || (((/* implicit */_Bool) ((signed char) var_8)))));
                                arr_65 [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_17 [i_18 - 2] [i_17] [i_16 + 2]))))));
                            }
                        } 
                    } 
                    arr_66 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                }
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    arr_69 [i_19] = ((/* implicit */int) var_6);
                    arr_70 [i_0] [i_1] [i_19] = ((/* implicit */int) ((unsigned int) var_11));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~((~(((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_1)))))))))));
                    var_32 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL))))))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        arr_79 [i_0] [i_1] [i_20] [i_1] [i_20] = ((/* implicit */unsigned int) var_3);
                        var_33 += ((/* implicit */unsigned int) var_8);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_22 = 1; i_22 < 16; i_22 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_73 [i_20] [i_20] [i_20]))))));
                            arr_82 [i_20] [i_1] [i_21] [i_21] [i_21] = ((/* implicit */long long int) (-(arr_7 [i_22 + 2])));
                            arr_83 [i_20] [13U] [13U] [i_21] [13U] [13U] [13U] = ((/* implicit */unsigned char) ((signed char) var_0));
                            var_35 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_10)))));
                            arr_84 [i_0] [i_20] [i_21] [i_20] [i_21] [i_20] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_23 = 0; i_23 < 18; i_23 += 4) 
                        {
                            var_36 = ((((/* implicit */int) arr_77 [i_20])) << (((((/* implicit */int) var_5)) - (77))));
                            arr_88 [i_20] [i_20] [i_20] [i_20] [i_20] [i_1] = max((((/* implicit */unsigned char) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])), ((unsigned char)18));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (-(max((arr_86 [i_0] [i_1] [i_20] [i_20] [i_21] [i_23]), (((/* implicit */int) var_1)))))))));
                            var_38 ^= (+((~(min((((/* implicit */unsigned int) var_2)), (2447726171U))))));
                            var_39 = ((/* implicit */unsigned int) var_10);
                        }
                        for (signed char i_24 = 1; i_24 < 16; i_24 += 1) 
                        {
                            var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_21] [i_20] [2U] [i_21]))));
                            arr_93 [i_0] [i_0] [i_20] [i_21] [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_29 [i_24 - 1] [i_20])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_25 = 1; i_25 < 17; i_25 += 3) 
                    {
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8388611)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 3; i_26 < 17; i_26 += 2) 
                        {
                            var_42 = ((/* implicit */signed char) ((unsigned int) var_7));
                            var_43 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (var_3) : ((+(-8388634)))));
                        }
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((var_4) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))))));
                        arr_98 [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(3649120900U))))));
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_1))));
                    }
                    for (long long int i_27 = 2; i_27 < 16; i_27 += 2) 
                    {
                        var_46 = ((/* implicit */_Bool) (signed char)34);
                        var_47 = ((/* implicit */_Bool) arr_53 [i_27] [i_27] [i_27 + 1] [i_27 + 1]);
                        arr_101 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((max(((+(((/* implicit */int) var_0)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_10)))))) - ((+(((((/* implicit */int) var_6)) * (((/* implicit */int) var_9))))))));
                        var_48 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_2))))) > (((/* implicit */int) (_Bool)1))));
                    }
                    arr_102 [i_0] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((8388607), (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_42 [15U] [i_1] [(signed char)13] [i_20] [i_1])) : (((/* implicit */int) var_5)))) <= ((-(((/* implicit */int) var_2))))))) : (((/* implicit */int) var_2))));
                    var_49 = min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (min((arr_23 [i_20] [i_20] [i_20] [i_1] [i_1]), (((/* implicit */unsigned int) var_2)))));
                }
            }
        } 
    } 
    var_50 = ((/* implicit */int) var_5);
}
