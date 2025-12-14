/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100367
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
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)20861)) | (((/* implicit */int) (short)20861))))) || (((/* implicit */_Bool) 147131963U))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (short)20861)) : (((/* implicit */int) (short)20861))))));
    var_16 = var_13;
    var_17 &= ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (short)-20861)), (((((/* implicit */int) (unsigned short)31529)) ^ (((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)196)), (((unsigned int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (short)20865)) - (20859))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(0LL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_4])) ? (var_3) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_3]))))));
                                var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [8LL] [8LL])) ? (((/* implicit */int) (unsigned char)196)) : (1919390023))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (int i_5 = 3; i_5 < 9; i_5 += 2) 
                {
                    arr_17 [(unsigned char)9] [(unsigned char)9] [i_5] = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    var_22 += ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [0])))))))) * (((unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_5 + 3] [i_5 + 3])))))));
                    arr_18 [1U] [i_5] [i_5 - 3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((int) arr_4 [i_1] [i_1]))))) * (min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) * (-1LL))), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_5 + 1] [i_5]))))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_23 *= ((((min((var_2), (((/* implicit */unsigned long long int) (unsigned short)34007)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20832))) : (var_8)))))) * (((unsigned long long int) ((((/* implicit */_Bool) arr_13 [(short)4] [i_0] [i_1] [i_1] [i_6] [i_6])) ? (arr_1 [(unsigned short)9] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20850)))))));
                    arr_22 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_14 [i_0] [i_0] [i_6] [i_0]), (((((/* implicit */_Bool) (signed char)-92)) ? (arr_14 [(unsigned short)10] [i_0] [(unsigned short)10] [i_6]) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_6]))))))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9162139995910063927LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [10ULL] [i_6] [i_6]))) : (var_2)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65527))))));
                    arr_23 [(short)0] = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_6] [i_6]);
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_1] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 2]))) != (((unsigned int) arr_5 [1U] [11LL] [i_7 - 1] [1U]))))) + (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1]))))), (((short) arr_28 [i_0] [i_1] [i_7] [3])))))));
                            var_24 &= ((/* implicit */short) ((((int) arr_26 [i_7 - 2] [i_7 + 1] [i_7 - 1])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7 + 1] [i_7 - 1])) && (((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7 + 1] [i_7 - 1])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */short) (((-(arr_8 [i_0] [i_0] [i_0] [i_0] [8ULL]))) << (((max((((/* implicit */int) (unsigned char)199)), (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) | (((/* implicit */int) (short)-20861)))))) - (156)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_4);
}
