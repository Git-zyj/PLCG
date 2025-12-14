/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134157
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
    var_15 = ((/* implicit */unsigned short) var_4);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1759358085)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30336))))) ? (((/* implicit */unsigned int) 1759358085)) : (var_10)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_17 = max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]))))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(var_6)))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((/* implicit */int) ((arr_4 [i_0] [i_0]) != (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned short)35200)))))))) : (((/* implicit */int) var_0))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_9 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned char)78)), ((-(max((((/* implicit */unsigned int) (unsigned short)30336)), (2226186919U)))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                var_19 ^= ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((arr_7 [i_3]) < (((/* implicit */long long int) arr_4 [i_3] [i_3]))))), (var_7))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 3 */
                for (signed char i_4 = 4; i_4 < 11; i_4 += 4) /* same iter space */
                {
                    var_20 -= ((/* implicit */unsigned int) arr_8 [i_3] [i_2] [(unsigned short)7]);
                    arr_15 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_1 [i_2] [i_4 - 1]);
                    arr_16 [i_0] [i_2] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */unsigned char) arr_13 [i_0]);
                }
                for (signed char i_5 = 4; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    arr_19 [11LL] [3ULL] [i_0] [4ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)35182))));
                    var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_3])), (arr_4 [(unsigned short)11] [i_0])))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)89))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)96))))))) : (min((((/* implicit */unsigned int) 1759910545)), (var_9)))));
                    arr_20 [i_2] [i_0] [(signed char)9] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_12 [i_5 - 2] [(signed char)3] [i_3] [i_5] [i_0])))) ? (arr_18 [i_5 - 3] [i_2] [i_5 - 2] [i_5 - 2] [i_0] [i_5]) : (((((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5 + 1] [i_3] [i_5 + 1] [i_0])) ? (arr_18 [i_5 + 1] [i_3] [i_3] [i_5 - 2] [(unsigned short)0] [2]) : (arr_12 [i_5 + 1] [i_2] [i_3] [i_5] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+((-(((-212844688) & (((/* implicit */int) arr_1 [i_0] [i_2])))))))))));
                        arr_24 [i_0] [i_6] [i_5] [i_3] [i_3] [i_2] [i_0] = -1180401623;
                    }
                }
                for (unsigned char i_7 = 2; i_7 < 10; i_7 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_2] [i_3] [i_7 + 2]))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) -212844693)) && (((/* implicit */_Bool) var_0)))))) || (((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)178))))) || (((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_13 [i_2])))))))))));
                    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_26 [i_0] [i_7] [i_7]) <= (((((/* implicit */_Bool) arr_21 [i_0] [4U] [i_3] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30333))) : (arr_11 [6U] [(unsigned char)8] [i_2]))))))));
                    var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [(signed char)6] [i_7])))) ? (((/* implicit */int) (_Bool)1)) : (-1759910546)))) ? (((arr_4 [i_0] [i_3]) ^ (arr_4 [i_3] [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-118), (((/* implicit */signed char) (_Bool)0))))))))));
                    arr_27 [i_7] [i_0] = ((/* implicit */unsigned short) arr_23 [i_0] [i_2] [i_3] [i_7 + 1] [5LL]);
                }
            }
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)181)), (var_4)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)12023)) ? (-379077071686674906LL) : (((/* implicit */long long int) arr_23 [(_Bool)1] [i_8] [i_9] [i_11] [i_11])))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_0] [i_10] [i_9] [i_10] [i_9]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))))))))) : (max((arr_13 [i_11]), (min((((/* implicit */int) (unsigned char)245)), (var_13)))))));
                            var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((min((((/* implicit */int) (_Bool)1)), (var_13))), (((/* implicit */int) min(((unsigned char)11), (((/* implicit */unsigned char) (_Bool)1)))))))), (arr_21 [i_9] [i_9] [i_9] [i_10])));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)71)), (arr_2 [i_0] [i_8 - 1]))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_8 - 1]))));
            arr_41 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_0] [6]))) > (((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (_Bool)1))))) ? (((arr_26 [i_0] [i_8] [8U]) & (((/* implicit */unsigned int) var_3)))) : ((-(arr_23 [i_0] [i_0] [i_0] [i_8 - 1] [i_8])))))));
        }
        var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (_Bool)1))));
        arr_42 [10LL] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 288230376151711743LL))) ? (((/* implicit */long long int) arr_35 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(unsigned short)4])) : (((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0] [i_0])))) ? (arr_14 [i_0] [i_0]) : (((/* implicit */long long int) ((1332418694) / (((/* implicit */int) (signed char)24)))))))));
    }
    var_33 = ((/* implicit */signed char) max((var_7), (((/* implicit */long long int) (_Bool)1))));
}
