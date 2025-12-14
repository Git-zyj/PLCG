/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165731
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) min((var_0), (var_1))))) ? (((/* implicit */unsigned int) var_1)) : (((((((/* implicit */int) (unsigned short)15947)) == (((/* implicit */int) (unsigned short)15947)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)52)) - (((/* implicit */int) (unsigned char)204))))) : (3011772340U)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [(unsigned short)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3011772340U)) % (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)52)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))) : ((~(arr_1 [(unsigned short)8])))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_3);
        var_15 = ((((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */_Bool) 1248909159)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) <= (((8575481742304762552ULL) & (((/* implicit */unsigned long long int) -1530996168)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 3]))) % ((~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))));
        arr_5 [2U] = ((/* implicit */unsigned short) arr_1 [6U]);
    }
    var_16 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            {
                var_17 *= ((/* implicit */long long int) ((((arr_11 [(signed char)8]) / (arr_11 [14]))) == (((arr_11 [(signed char)4]) ^ (arr_11 [(signed char)0])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49589)) ? (1283194956U) : (3011772339U)));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1248909159)) ? (((/* implicit */int) arr_12 [(unsigned char)6] [i_2 + 1] [i_3 + 1] [i_3])) : (((((/* implicit */int) arr_9 [(unsigned short)2])) - (((/* implicit */int) arr_12 [(_Bool)1] [i_2] [(unsigned short)14] [(_Bool)1])))))))));
                    arr_15 [i_1] [5LL] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) arr_8 [i_1] [i_1 + 3] [i_2 - 2]))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) arr_12 [8] [i_1 + 1] [i_2 - 3] [i_3 - 2])))))));
                }
                for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) arr_11 [i_1])) || (((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1]))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_1] [i_1 - 1] [i_2 + 2] [i_4 + 1]))) ? ((~(((/* implicit */int) arr_12 [i_1] [i_1 + 3] [i_2 - 3] [i_4 - 1])))) : (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_2 + 1] [i_4 - 1]))));
                    var_22 = var_6;
                }
                for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_2 - 2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_6)), (var_1)))))) ? (((((/* implicit */int) ((_Bool) var_8))) * (arr_20 [i_1 + 3] [i_1] [6U] [i_1 - 1]))) : (max((arr_20 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2]), (((/* implicit */int) var_12))))));
                    arr_22 [i_1] [(unsigned short)14] [(unsigned short)14] &= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_8 [(signed char)10] [i_2 - 2] [i_2])), (arr_18 [i_2] [i_2 - 1]))) - (((/* implicit */int) ((signed char) arr_8 [(signed char)10] [i_2 - 1] [(signed char)2])))));
                }
                for (short i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        arr_29 [i_1] [i_1] [(unsigned char)6] [i_1] = ((/* implicit */short) ((unsigned char) arr_12 [i_1] [i_7 - 3] [i_7 - 1] [(unsigned char)5]));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 - 1] [i_1] [i_1]))) : (var_8)));
                        arr_30 [i_1 - 1] [(signed char)0] [i_6] [i_7] &= ((/* implicit */signed char) ((unsigned short) arr_18 [i_6 + 4] [i_2]));
                        /* LoopSeq 3 */
                        for (int i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            arr_33 [i_1 - 1] [(unsigned char)6] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) arr_12 [i_1] [i_2] [i_7] [i_8])));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 1283194956U))));
                            arr_34 [i_1] [i_6] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_16 [i_1] [i_1] [1ULL]))));
                        }
                        for (long long int i_9 = 2; i_9 < 12; i_9 += 1) 
                        {
                            var_25 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_31 [i_7 + 1] [i_6 - 1] [i_6 + 3] [i_2 - 3] [i_1 + 2] [i_1 - 1] [i_1 + 2])) >= (var_5)));
                            var_26 = ((/* implicit */short) ((((_Bool) 1283194957U)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2 + 3])) : ((+(((/* implicit */int) var_12))))));
                            arr_37 [i_1 + 2] [(short)0] [i_6] [i_7 - 2] &= ((/* implicit */signed char) (-(arr_25 [i_2 + 2] [i_1 + 2] [(signed char)12])));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) - (((var_8) - (((/* implicit */unsigned int) 786432))))));
                            var_28 = ((/* implicit */int) arr_31 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 2] [(signed char)14] [(unsigned char)10] [i_6]);
                            arr_40 [(signed char)12] &= ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_24 [(signed char)12] [i_2]))) ? (13830486136849920872ULL) : (arr_28 [i_7 + 1] [(unsigned char)14] [(short)8] [i_7 - 3])));
                        }
                        var_29 = ((/* implicit */unsigned long long int) ((arr_31 [i_1 + 2] [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1 + 3] [i_1] [12ULL])))));
                    }
                    arr_41 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)234))));
                }
                arr_42 [i_1] = ((/* implicit */unsigned int) var_3);
                var_30 ^= ((/* implicit */unsigned char) ((short) (short)7445));
            }
        } 
    } 
}
