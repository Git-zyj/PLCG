/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127288
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
    var_15 = max((var_8), (min((max((511ULL), (1076923310707715697ULL))), (((/* implicit */unsigned long long int) (unsigned short)53033)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(4294967293U))))));
                    var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1063113085319908536ULL), (((/* implicit */unsigned long long int) 561798726U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2]))) : (arr_6 [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 3302153732U))));
                        arr_12 [(unsigned char)10] [i_2] [(unsigned short)18] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(561798726U)))) ? (((/* implicit */int) arr_10 [i_0 + 3])) : ((-(((/* implicit */int) (unsigned char)179))))))), ((+(((((/* implicit */_Bool) 16395722966669072669ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (2823046640U)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned long long int) ((arr_6 [i_2 + 2]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_2 + 1]))));
                        var_21 = ((/* implicit */unsigned int) arr_13 [i_0] [i_1]);
                        /* LoopSeq 4 */
                        for (short i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            arr_21 [i_0] [i_0] [12LL] [i_4 + 1] [20] = ((/* implicit */signed char) (+(arr_18 [i_0 + 2] [i_1] [i_1] [i_4] [i_0 + 2] [i_0] [5LL])));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned long long int) 3733168570U)) : (9112247556019394241ULL))))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)224)) ? (arr_19 [i_4 - 2] [7LL] [i_4] [7LL] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) 561798701U))));
                            var_24 = ((/* implicit */unsigned long long int) ((arr_10 [i_2 + 1]) ? (((/* implicit */int) arr_10 [i_2 - 2])) : (((/* implicit */int) arr_11 [i_5 - 1] [i_2 - 2]))));
                            arr_22 [i_0] [i_1] [i_2] [i_4 - 1] [(_Bool)1] = 3733168569U;
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) (+(561798737U)));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) : (561798756U)))) ? (((((/* implicit */_Bool) 3733168539U)) ? (3733168549U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [20LL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(signed char)11] [(signed char)5] [(signed char)5]))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_27 &= ((/* implicit */_Bool) arr_19 [i_7] [i_4] [i_0] [i_2 + 2] [i_1] [i_0] [i_0]);
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_4] [(unsigned char)18] [i_2] [i_4] [16ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_0] [i_1] [i_0] [i_4] [i_7] [i_1] [i_4]) > (((/* implicit */unsigned int) arr_2 [i_0])))))) : (((arr_3 [i_0]) ? (3733168558U) : (3733168565U)))));
                            arr_27 [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2 - 1] [i_1] [i_0 + 2] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (arr_26 [i_2 - 1] [i_2 - 1] [i_0 + 3] [i_4] [i_7])));
                            var_29 = ((/* implicit */short) 3733168532U);
                        }
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 - 1] [i_2 - 2]))));
                            arr_30 [i_8] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-2862)))) * (((/* implicit */int) arr_29 [i_0 + 3] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 1]))));
                        }
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    }
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(signed char)7] [i_1] [i_2] [i_9] [i_1]))) : (12ULL)))) ? (max((932840746U), (3733168569U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-31726)) : (((/* implicit */int) arr_3 [i_2])))))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_18 [i_0] [i_1] [i_2] [i_9] [i_0 + 3] [i_2 + 2] [i_1]) : (arr_18 [i_0] [i_2] [(short)9] [(short)18] [i_0 + 2] [i_2 - 1] [i_0 + 2])))));
                        var_33 &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_10)), (min(((-(2168844950U))), (((((/* implicit */_Bool) -116409101)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3022080812U)))))));
}
