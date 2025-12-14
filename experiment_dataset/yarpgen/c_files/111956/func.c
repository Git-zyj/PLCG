/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111956
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
    var_16 = ((/* implicit */int) (unsigned char)30);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_0 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_0 + 1] [i_2]))) : (arr_4 [i_1 - 2] [i_0 + 1])));
                    arr_8 [i_2] [(unsigned short)18] [i_0] = ((/* implicit */short) (-(2937550683U)));
                }
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)30))))), (arr_3 [i_0] [i_1])))) ? (((long long int) max((((/* implicit */short) (unsigned char)152)), (arr_2 [i_1] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4026697269731413052ULL)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_4)))))));
                    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (_Bool)1)) : (-644933308)))))), (((((/* implicit */_Bool) ((short) (unsigned char)152))) ? (min((((/* implicit */unsigned long long int) arr_1 [4])), (3904122222775235598ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    arr_16 [(unsigned char)4] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) -369868852))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_1]))) : (arr_13 [i_0] [i_0] [i_0 - 1])))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_14 [i_4] [i_0 + 1] [i_0 + 1]))));
                    var_20 = ((/* implicit */short) 14542621850934316017ULL);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 3) 
                {
                    var_21 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) min((arr_9 [(unsigned short)8] [i_1] [10U] [6]), (((/* implicit */unsigned long long int) (short)28672))))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)8370)))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_5] [i_6] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1] [10ULL] [i_1 - 2] [i_1 - 2])) & (((/* implicit */int) arr_12 [i_1 - 1]))))) ? ((-(((/* implicit */int) arr_12 [i_1 + 1])))) : (((arr_12 [i_1 + 1]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_12 [i_1 + 1]))))));
                        var_22 = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) (signed char)49)));
                        arr_23 [(_Bool)1] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-119)))), (-644933296))), (((/* implicit */int) min((arr_20 [i_0] [i_1] [i_5] [i_5 - 2] [i_1]), (((/* implicit */short) arr_12 [i_0])))))));
                    }
                    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) (unsigned short)29692);
                        arr_26 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_14 [9ULL] [9ULL] [9ULL])) : (((/* implicit */int) arr_3 [i_0] [i_5])))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) 
                        {
                            arr_30 [10ULL] [i_8] [i_5] [i_5] [i_8] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 10532264120245480937ULL)) && (((/* implicit */_Bool) (unsigned short)21798))));
                            var_24 = ((/* implicit */signed char) max((((unsigned long long int) arr_0 [i_5 - 1])), (var_11)));
                            arr_31 [i_0] [i_8] [19] [i_7] [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_2 [i_0 - 1] [i_1])) - (((/* implicit */int) arr_2 [i_7] [i_5])))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) arr_2 [i_0 + 1] [i_7])))))));
                        }
                    }
                }
                for (short i_9 = 2; i_9 < 24; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 2; i_10 < 24; i_10 += 3) 
                    {
                        var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9 + 1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2056090422812375782ULL))))) : ((~(((/* implicit */int) arr_38 [i_0] [7ULL] [i_9])))))) > (max((((/* implicit */int) min((((/* implicit */short) (unsigned char)192)), (var_12)))), (((((/* implicit */int) arr_1 [i_9])) + (((/* implicit */int) arr_15 [i_0] [i_9] [i_9]))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((arr_33 [i_1] [i_9] [i_10]) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)18098)) < (((/* implicit */int) (unsigned short)43737)))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) arr_21 [i_0] [i_0] [i_0] [i_0 + 1] [i_1 + 1])), (arr_38 [i_1 - 1] [i_9 - 1] [i_0 + 1])))), (((arr_12 [i_9 - 2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243))))) : (((/* implicit */int) (unsigned short)43279)))))))));
                        arr_41 [i_9] [i_9] [i_1] [i_11] = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_36 [i_9] [3ULL] [3ULL] [i_9 - 1] [i_0 + 1] [i_11])))));
                    }
                    for (int i_12 = 3; i_12 < 24; i_12 += 3) 
                    {
                        arr_44 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)4095);
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_27 [i_0])) : ((((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1])))) | (((/* implicit */int) ((_Bool) -2147483647)))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) var_15);
                }
                arr_45 [i_0] = ((/* implicit */_Bool) arr_42 [i_0] [i_1] [22ULL]);
                /* LoopSeq 2 */
                for (short i_13 = 2; i_13 < 22; i_13 += 4) 
                {
                    var_30 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_1] [i_13] [i_1])) >= (((/* implicit */int) arr_17 [i_1] [i_1] [i_1 - 1] [i_0]))))), (max((18425816577012672873ULL), (((/* implicit */unsigned long long int) (unsigned short)61440)))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)57))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) arr_27 [i_1])) : (((/* implicit */int) (unsigned char)72)))))) : (-1271771069))))));
                }
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_42 [i_1 - 2] [i_1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) arr_42 [i_1 - 2] [i_1] [i_0 - 1])))))))));
                    var_33 = ((/* implicit */unsigned char) arr_35 [i_0 + 1] [i_1 - 1] [i_14] [i_0 + 1]);
                    var_34 = ((unsigned long long int) var_14);
                }
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_35 [i_0] [7ULL] [i_1] [11ULL])), ((unsigned short)43746)))), (((((/* implicit */_Bool) (unsigned short)4089)) ? (((/* implicit */unsigned long long int) 644933308)) : (13720784720113016812ULL)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (short)26341)) : (-369868854)))));
            }
        } 
    } 
    var_36 = ((/* implicit */int) min((var_11), (((/* implicit */unsigned long long int) var_0))));
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) max(((unsigned short)61440), ((unsigned short)61443))))));
}
