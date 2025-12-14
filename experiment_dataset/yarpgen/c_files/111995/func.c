/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111995
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
    var_19 ^= ((/* implicit */unsigned long long int) var_1);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (-(max((arr_0 [i_0 + 1]), (9223372036854775807LL)))));
        var_22 = ((/* implicit */unsigned int) (-(var_7)));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (arr_3 [0] [i_1])));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-557110388723106494LL)))) ? ((+(arr_12 [i_1] [i_3]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                        var_25 = ((/* implicit */unsigned long long int) (unsigned char)236);
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [1LL] [i_3 + 1] [i_3 + 1] [i_4])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [(unsigned char)2] [12LL])) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [(unsigned char)12] [(unsigned char)8]))) : (arr_9 [i_1] [i_1] [i_1])))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2]))));
                    }
                    for (long long int i_5 = 4; i_5 < 12; i_5 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) -8669747144143922116LL)) - (arr_9 [i_5 - 1] [i_2] [i_3]))))))));
                        var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 3] [i_3 + 3] [i_5 - 2]))) : ((~(6390326567849795411ULL)))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))) ? (((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1])) ? (13315583194140712077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)236), (var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) + (var_13)))) ? ((+(3176037755U))) : (0U))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) arr_18 [(short)5] [i_2] [(short)5] [i_3] [i_6]);
                        arr_20 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_1] [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (arr_9 [i_2] [12] [i_1])));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_17)) : (4061735328U))))))));
                    }
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_1))));
}
