/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172213
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
    var_16 = ((/* implicit */signed char) min((((unsigned long long int) ((long long int) var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (_Bool)1)))))) : ((+(var_4))))))));
    var_17 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (0LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))) * (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (arr_1 [i_0]) : (-11LL)))));
                var_19 = ((/* implicit */_Bool) 0U);
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_5)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((int) var_15))))) | (((/* implicit */unsigned long long int) (-(var_8))))));
                    var_21 &= ((/* implicit */unsigned short) ((int) ((unsigned char) arr_2 [(signed char)10] [i_2 - 1] [(signed char)10])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-52)), (var_14)));
                                arr_14 [i_3] [i_3] [i_3] [i_3 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12LL)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)-126)))) ? (((8505208135286965523LL) & (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 12LL)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) min((min(((~(((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) var_3)) + (2147483647))) << (((((var_12) + (648496748))) - (1))))))), (min((((/* implicit */int) arr_10 [i_0] [i_0] [i_2 + 1] [i_2 - 1] [i_1] [i_5])), (var_2)))));
                        var_24 = ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((((/* implicit */unsigned int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))), (arr_5 [17U] [i_1] [i_2] [i_2 + 2]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_1] [i_5] [i_2] [i_1] [(signed char)4] [0] [i_1] = (~(var_9));
                            arr_24 [i_0] [i_6] [i_6] &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (8137924703083857595LL))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (-8505208135286965546LL)))))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) ((signed char) ((arr_8 [i_1] [i_1] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                            arr_28 [i_0] [i_0] [16LL] [i_0] [3LL] [(unsigned short)13] [i_1] = ((/* implicit */long long int) var_11);
                            var_26 = ((/* implicit */long long int) min((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) == (2287467944U)))), (((/* implicit */unsigned int) ((int) -1LL)))));
                            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_2 + 3] [i_2 + 2] [i_2 - 1] [i_1] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_1))))) : ((-(arr_13 [i_2 + 2] [i_1] [i_2 + 2] [i_7] [i_7])))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_31 [i_5] [i_1] [i_5] [i_5] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_12 [i_1] [i_1] [i_1] [i_5] [i_8]))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)39)))))));
                            var_28 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2189996640U)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            arr_36 [i_1] [i_5] [i_2] [8U] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_4)));
                            var_29 = (+(arr_17 [i_2] [i_2] [i_9] [i_2] [i_2]));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_30 *= ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_2 + 1] [i_5] [i_2 + 3] [i_10]);
                            var_31 = ((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))));
                            var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                            arr_41 [i_0] [2U] [i_0] [i_1] [i_0] [i_0] [19U] = ((/* implicit */unsigned int) ((unsigned short) ((var_9) & (((/* implicit */long long int) var_2)))));
                        }
                    }
                    arr_42 [i_0] [20LL] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned long long int) var_14))))) ? (((((((/* implicit */_Bool) 1464476234)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1595847113663836438ULL))) * (((/* implicit */unsigned long long int) (~(var_7)))))) : (((/* implicit */unsigned long long int) var_7))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_33 = ((((/* implicit */_Bool) max((((long long int) var_6)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (var_8));
                    arr_45 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (~(-8505208135286965536LL))));
                    var_34 = ((signed char) -3623383475297402837LL);
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    var_35 -= ((/* implicit */unsigned short) (+((~(var_4)))));
                    /* LoopSeq 3 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) 3623383475297402837LL))))))));
                        var_37 &= ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                    }
                    for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (-(var_2))))));
                            arr_58 [i_0] [i_1] [i_1] [i_1] [i_1] [4LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_11))))));
                        }
                        for (long long int i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
                        {
                            arr_61 [i_12] [i_12] [i_12] [i_1] = ((/* implicit */long long int) var_2);
                            arr_62 [7U] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_35 [i_0] [i_1] [i_12] [20LL] [i_1] [i_14]))));
                            var_39 &= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)16))));
                        }
                        for (long long int i_17 = 0; i_17 < 21; i_17 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */_Bool) (+((~(2107525477U)))));
                            var_41 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((arr_57 [i_1] [i_1] [i_12] [i_14] [i_14] [i_17]) >> (((((var_8) & (arr_17 [i_0] [i_0] [i_1] [i_0] [i_1]))) - (2885683664827221019LL)))))) : (((/* implicit */unsigned short) ((arr_57 [i_1] [i_1] [i_12] [i_14] [i_14] [i_17]) >> (((((((var_8) & (arr_17 [i_0] [i_0] [i_1] [i_0] [i_1]))) - (2885683664827221019LL))) - (576460061214161512LL))))));
                        }
                        var_42 = arr_57 [i_12] [i_12] [i_12] [i_1] [i_12] [i_12];
                        var_43 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0] [i_14] [i_12])) : (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_12]))));
                        var_44 -= ((/* implicit */int) ((((((/* implicit */_Bool) -8505208135286965546LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_32 [i_12] [i_1] [i_0] [i_14] [i_1] [i_14]))) < (((var_0) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        arr_68 [i_1] [i_1] [i_1] [i_1] [17U] [i_1] = ((/* implicit */long long int) arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned short i_19 = 2; i_19 < 19; i_19 += 3) 
                        {
                            var_45 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 1595847113663836433ULL)) ? (-2357339849255363151LL) : (((/* implicit */long long int) 1464476212))))));
                            var_46 = ((/* implicit */int) arr_38 [i_19 - 1] [8U] [12] [12] [i_1]);
                        }
                        for (long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(16850896960045715178ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)7680))) & (7340032U))) : (((/* implicit */unsigned int) ((var_0) ? (1464476215) : (var_7))))));
                            arr_73 [i_12] [(signed char)3] [i_12] [i_18] [i_20] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_1])) ? (-2347958170890141569LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                            arr_74 [16LL] [i_12] [i_12] [i_18] [i_20] [0LL] [i_20] |= ((/* implicit */unsigned short) ((unsigned int) arr_18 [(short)2] [i_1] [i_12] [i_12]));
                            arr_75 [i_0] [i_1] [i_18] [i_0] [i_20] [i_1] [i_20] = ((/* implicit */short) (~(((/* implicit */int) var_14))));
                        }
                    }
                }
                arr_76 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (17947755651728939603ULL))))));
            }
        } 
    } 
}
