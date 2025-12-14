/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125268
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
    var_15 = ((/* implicit */_Bool) var_2);
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-8178573826670425519LL)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] = ((/* implicit */int) (_Bool)1);
                    var_17 = ((/* implicit */unsigned long long int) ((((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))) / (arr_6 [i_0])));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-103))))) >= (var_12)));
                    arr_9 [(_Bool)1] [i_1] [i_2] = ((/* implicit */_Bool) arr_4 [i_2 + 3]);
                    arr_10 [i_2] = ((((/* implicit */_Bool) ((unsigned int) -5963135402988514515LL))) ? ((-(arr_0 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1] [i_0]))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 4; i_4 < 17; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4 + 1] [i_4])) ? (arr_13 [13U] [i_1] [i_4 - 2] [i_4]) : (arr_13 [i_0] [i_0] [i_4 - 2] [i_4]));
                                var_18 ^= ((/* implicit */int) 11116042658630243680ULL);
                                arr_23 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0]))) + (((/* implicit */int) arr_5 [i_0]))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [17LL] [i_3] [i_3] &= ((long long int) arr_0 [i_0]);
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (arr_13 [12U] [i_1] [i_1] [i_1])));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) ((unsigned long long int) var_8));
                            var_21 = ((/* implicit */long long int) 18446744073701163008ULL);
                            arr_29 [i_1] [i_6] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [(signed char)2] [i_7])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])));
                            arr_30 [i_6] [i_1] [i_3] [i_1] [i_6] = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [6U]);
                        }
                        for (int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_3] [i_6] [i_6] [i_3] [i_1] = ((/* implicit */unsigned short) var_11);
                            arr_35 [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                        }
                        for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                            var_23 = ((/* implicit */long long int) var_3);
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_0] [i_1] [i_0] [4ULL]))))) ? (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0])) : (arr_18 [i_0] [i_1] [i_3] [i_3] [i_3] [i_9] [i_0])));
                        }
                        arr_38 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) && (var_11)));
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        arr_41 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_11)))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(arr_36 [i_0] [i_0]))))));
                    }
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_31 [i_0] [i_1] [i_3] [i_0] [i_3]))));
                        var_27 = ((/* implicit */unsigned short) ((arr_26 [i_0] [1LL] [i_3] [i_11]) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_1] [i_1] [i_11])) : ((-(((/* implicit */int) var_2))))));
                        arr_44 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
                        var_28 = ((/* implicit */unsigned int) ((((arr_3 [i_11] [i_0]) << (((((/* implicit */int) var_2)) - (96))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))));
                    }
                }
                for (long long int i_12 = 1; i_12 < 17; i_12 += 1) 
                {
                    arr_49 [(unsigned short)15] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_12 + 1] [i_12] [i_12 - 1] [i_12 + 1])) ? (arr_28 [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1]) : (((/* implicit */unsigned int) arr_40 [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 1]))))) + (((((/* implicit */_Bool) arr_2 [i_12 + 1])) ? (var_4) : (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    var_29 = min((min((-804465037), (((/* implicit */int) var_13)))), (((/* implicit */int) ((arr_13 [i_0] [(unsigned char)12] [i_0] [10U]) >= (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_0])))))));
                    var_30 = ((/* implicit */long long int) ((_Bool) var_12));
                    var_31 *= arr_2 [i_0];
                    var_32 = ((/* implicit */_Bool) var_2);
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                            {
                                arr_57 [i_0] [i_1] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) arr_5 [i_14]);
                                arr_58 [i_0] [i_1] [(unsigned char)4] [i_13] [i_14] [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_50 [i_14] [i_13])))) ? (((long long int) arr_50 [(unsigned char)2] [i_15])) : (((/* implicit */long long int) var_0))));
                                arr_59 [i_0] [i_1] [i_13] [i_14] [i_15] = ((((long long int) (signed char)111)) + (((var_4) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_28 [i_0] [i_1] [i_13] [i_14] [i_13])) : (arr_15 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                            {
                                var_33 = ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_2 [i_14])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_27 [i_0] [i_1] [6LL] [i_1] [i_1] [i_16] [i_13]))))) : ((+(((unsigned int) 0)))));
                                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_0))));
                                arr_64 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_0] [i_1] [i_13] [i_13] [i_13] [i_14] [i_16])), (var_13))))));
                            }
                            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
                            {
                                arr_67 [i_0] [i_1] [10LL] [i_14] [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((max((arr_19 [i_0] [2LL] [i_13] [i_14] [i_17]), (((/* implicit */unsigned short) var_11)))), (arr_51 [i_0] [i_1] [(unsigned short)3] [i_0]))))) - (max((var_10), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [14U] [i_1] [i_1] [i_1]))) == (var_1))))))));
                                arr_68 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_45 [i_0] [i_13] [i_14]);
                                arr_69 [i_0] [i_0] [i_1] [i_13] [i_14] [i_17] [i_17] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-96)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_13] [i_13] [i_17]))))), (((/* implicit */long long int) ((unsigned char) var_5)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_0] [6U] [i_0] [i_0]))))) : ((-(arr_13 [i_0] [i_13] [i_14] [i_17]))));
                                arr_70 [i_0] [i_1] [i_13] [i_0] [i_17] = ((/* implicit */long long int) var_3);
                                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [3] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (var_7)))) : (var_9)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(unsigned char)14] [(unsigned char)14] [i_1] [(unsigned char)14] [i_13] [(unsigned short)4] [i_17]))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11)))))));
                            }
                            var_36 = ((/* implicit */unsigned char) ((unsigned short) min(((+(var_12))), (min((((/* implicit */long long int) -118958312)), (-7946066555702907369LL))))));
                        }
                    } 
                } 
                var_37 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) var_0)) : (var_4))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [14U]))) - (var_12)))))));
            }
        } 
    } 
}
