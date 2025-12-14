/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184129
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min(((~(var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) 8139150698412142988LL)) ? (-143579974) : (((/* implicit */int) (unsigned short)25955))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (0U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))))));
    var_21 = ((/* implicit */unsigned char) (_Bool)0);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_5))))) : (((/* implicit */int) var_3))))) <= (max((var_1), (((/* implicit */unsigned int) ((signed char) var_6)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((arr_7 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14004))))) + (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_2] [i_2] [i_2 - 1] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) var_17));
                            arr_16 [i_4] [(_Bool)1] [4LL] [(_Bool)1] [i_4] [i_4] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_1] [i_2] [4LL]) > (var_15))))) >= (arr_11 [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 + 3] [i_3 + 2] [i_2 + 2] [i_1])) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)25955)))))));
                            arr_20 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_17 [i_3 + 3] [i_3 + 3] [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 3]));
                            var_24 *= ((/* implicit */short) ((420967889U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39591)))));
                            arr_21 [i_0] [i_1] [i_1] [i_3 - 1] [i_0] = ((/* implicit */unsigned int) arr_17 [i_3 + 2] [i_2 - 1] [i_2] [i_3] [i_5] [i_0]);
                        }
                    }
                    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned char) (short)-15932)))));
                        arr_24 [i_6 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_6 - 1] [i_2 - 1] [i_2] [(_Bool)1] [i_2 + 2] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                        var_26 = ((/* implicit */unsigned char) ((short) var_8));
                        arr_25 [(short)8] [(short)8] [i_2 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_6 - 1] [i_6 + 3] [i_6 + 2] [i_6 + 2])) ? (arr_18 [i_0] [i_6 + 3] [i_6 + 2] [i_6 + 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39615)))));
                    }
                    arr_26 [i_0] = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_1] [i_0]);
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        arr_31 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39591)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (8748282412823523519LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_2)) ? (-8748282412823523520LL) : (((/* implicit */long long int) 67104768))))));
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (((arr_22 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                            arr_34 [i_0] [i_0] [i_2] [7LL] [i_7] [i_8] [i_8] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (4082104110U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_1 [i_2 - 1])) > (arr_30 [i_2] [i_7]))) ? (arr_13 [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [i_2]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9402))) > (var_13)))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_38 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)56112);
                            var_29 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_2 - 1] [i_1]))));
                            var_30 *= ((/* implicit */unsigned long long int) arr_32 [i_0] [6ULL] [i_2 + 2] [(short)10] [(short)10]);
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            arr_45 [i_0] [i_0] [(unsigned char)11] [i_10] [i_0] = ((/* implicit */unsigned char) (-(arr_36 [i_2] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 1] [i_2] [i_2 + 1])));
                            arr_46 [i_11] [(short)7] [i_0] [i_1] [i_0] = ((/* implicit */short) var_5);
                        }
                        for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(212863190U)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (58720256) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_18)));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) -20))));
                            arr_50 [i_0] [i_1] [i_0] [i_2] [i_2] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_2 + 2] [i_1] [i_0]));
                        }
                        for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            arr_53 [i_0] [i_0] [i_2 - 1] [i_10] [i_13] = ((/* implicit */short) (+(arr_17 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [(unsigned char)11] [i_2 + 1])));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_9))));
                            arr_54 [i_2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) (short)7)))))));
                        }
                        var_33 = ((/* implicit */unsigned short) ((int) var_8));
                    }
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((arr_23 [i_2 + 2] [i_2 + 2] [i_2 + 2] [2U]) ? (((/* implicit */int) arr_23 [i_2 + 2] [i_2 + 1] [i_2] [6])) : (((/* implicit */int) arr_23 [i_2 + 2] [i_2 + 1] [2] [4])))))));
                        var_35 = ((/* implicit */short) (((((~(((/* implicit */int) var_11)))) + (2147483647))) << (((638995747U) - (638995747U)))));
                        arr_57 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)42002)) : (((/* implicit */int) (short)-28239))))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 1372089873)) < (var_2)))))));
                    }
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 4; i_16 < 11; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) (unsigned char)242))))))));
                        arr_64 [i_16] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
                        var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39591))))) || (var_8)));
                        var_38 *= ((/* implicit */unsigned int) arr_52 [i_0] [i_1] [i_1] [i_15] [i_15] [2ULL] [(unsigned short)6]);
                    }
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        var_39 = ((/* implicit */long long int) ((((((((/* implicit */int) var_11)) + (var_15))) + (2147483647))) << (((((var_2) + (8884956693718313086LL))) - (18LL)))));
                        arr_67 [i_15] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_15)) ? (arr_10 [i_0] [i_0] [i_15] [i_17]) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        arr_68 [i_0] [i_0] [i_17] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)25955)) > (((/* implicit */int) (unsigned short)39562))));
                    }
                    var_40 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_6))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)90)) || (((/* implicit */_Bool) arr_0 [(short)4])))))));
                }
                arr_69 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_1]))))) : ((~(((/* implicit */int) arr_39 [i_1] [i_1] [i_0] [i_1]))))));
                arr_70 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min((((var_15) & (58720267))), (((/* implicit */int) min((arr_61 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) var_6))))))));
                var_41 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (max(((-(arr_22 [i_0]))), (((((/* implicit */_Bool) (unsigned short)0)) ? (var_19) : (var_14)))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18))));
}
