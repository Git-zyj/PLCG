/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150411
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) ((((-5428749722824881722LL) + (9223372036854775807LL))) >> (((-5428749722824881722LL) + (5428749722824881781LL)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((arr_6 [i_3] [i_3]) + (2147483647))) >> (((((/* implicit */int) var_0)) - (40514))))) >> ((((+(-5428749722824881721LL))) + (5428749722824881731LL))))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)3])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-5428749722824881722LL)))) ? (((unsigned long long int) arr_2 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4]))) > (var_10))))) - ((-(arr_1 [i_1] [i_2])))))))))));
                        }
                        for (int i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(arr_3 [i_0] [i_0]))))))));
                            arr_14 [i_0] [(unsigned short)0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) var_8);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) (~(var_6))))), (var_19)));
                            var_24 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_2] [i_5 - 1] [i_5 + 2])))));
                            arr_16 [i_0] [(_Bool)1] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_11 [i_5] [i_2] [i_1] [i_2]))))));
                        }
                        for (int i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((2831479366U) >> (((5428749722824881727LL) - (5428749722824881713LL)))));
                            arr_21 [i_2] [i_1] [5LL] [i_1] [i_1] [i_6] = arr_4 [i_0] [i_1] [i_0];
                            var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [13]))) * (arr_7 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_6])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)34)), (var_16)))) : (((/* implicit */int) (short)26468))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                        }
                        for (int i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            var_28 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                            arr_26 [i_2] [i_7 + 1] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_0]))))) : (max((18404945651447296304ULL), (((/* implicit */unsigned long long int) -5428749722824881722LL))))));
                        }
                        arr_27 [i_0] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_9 [i_0] [(short)0] [i_2] [i_2] [i_1])))))))));
                        var_29 = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_5 [i_2] [2ULL] [i_2] [(unsigned char)13])), (arr_25 [i_2] [i_0] [i_2] [i_3 - 1] [i_3])))))) ? ((-(((((/* implicit */_Bool) arr_25 [i_2] [(unsigned short)12] [i_2] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)62872)) : (((/* implicit */int) (unsigned short)19657)))))) : (((/* implicit */int) arr_2 [i_3])));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_30 |= ((/* implicit */int) var_10);
                            var_31 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_23 [i_3 - 1] [(_Bool)1] [i_8 - 1] [i_8] [i_8])) ? (((/* implicit */int) arr_4 [i_3 - 2] [i_8 - 1] [i_2])) : (((int) 3573089000U)))) << ((((+(arr_3 [i_1] [i_8]))) + (7776232291569473234LL)))));
                        }
                        for (short i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            arr_36 [i_0] [i_1] [i_3] [i_2] [i_9 - 1] = (-(((/* implicit */int) ((_Bool) (signed char)75))));
                            var_32 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_30 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) arr_30 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 - 1])))))));
                            arr_37 [i_0] [i_0] [i_2] [i_2] [i_9] [i_2] [i_0] = ((/* implicit */short) ((long long int) var_15));
                            var_33 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_18 [(unsigned char)2] [(unsigned char)2] [i_2] [(unsigned char)2] [i_2])) + (((/* implicit */int) var_7))))));
                            var_34 = ((/* implicit */signed char) ((var_1) / (((/* implicit */long long int) min(((~(((/* implicit */int) var_15)))), ((~(((/* implicit */int) var_15)))))))));
                        }
                    }
                    for (int i_10 = 2; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 4; i_11 < 18; i_11 += 4) 
                        {
                            arr_42 [i_0] [(signed char)19] [i_2] [i_2] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)19677))))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)-72))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_10] [(unsigned short)2])) : (((/* implicit */int) var_9)))))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */short) ((unsigned int) arr_5 [i_2] [i_1] [i_10] [i_12]));
                            arr_45 [i_0] [i_1] [i_0] [i_10] [i_12] &= ((/* implicit */unsigned char) arr_7 [i_0] [i_10] [i_2] [i_10 - 1]);
                            arr_46 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_2] [i_10 - 2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6845))))) : (arr_6 [i_1] [i_2])));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                        {
                            var_37 ^= ((/* implicit */unsigned char) (((+((+(arr_44 [(signed char)14] [i_1] [7ULL] [7ULL] [i_13] [i_10] [i_13]))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_10] [i_10])) >> (((((/* implicit */int) (unsigned char)220)) - (204))))))));
                            var_38 = ((/* implicit */unsigned short) ((unsigned int) var_11));
                            var_39 ^= ((/* implicit */short) max((2653281839273240404ULL), ((-(0ULL)))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                        {
                            arr_51 [i_0] [i_0] [i_0] [i_2] [i_2] [i_10] [i_14] = ((/* implicit */unsigned long long int) var_18);
                            arr_52 [i_0] [i_1] [i_14] [6U] [i_14] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) (unsigned short)54811))), (((max((((/* implicit */long long int) arr_30 [i_0] [i_1] [i_0] [i_10] [i_14])), (var_1))) >> (((/* implicit */int) (!((_Bool)1))))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                        {
                            var_40 *= ((/* implicit */unsigned int) var_1);
                            var_41 = ((/* implicit */unsigned short) var_6);
                        }
                        arr_56 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_16)))) <= (((/* implicit */int) var_7)))))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(arr_39 [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */int) arr_30 [i_10] [i_2] [i_0] [i_0] [i_0])) : (-2137214711)));
                    }
                    arr_57 [i_0] [i_0] &= ((/* implicit */unsigned int) (-(arr_6 [i_0] [i_1])));
                }
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_14)))))), (((int) var_5))));
    var_44 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_12)))))) > (((/* implicit */int) var_18))));
}
