/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171320
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned char) var_10);
                        arr_8 [0ULL] [i_1 - 1] [0ULL] [0ULL] [(signed char)8] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1))))), (min((arr_0 [i_3 + 2]), (var_10))))), (((((/* implicit */_Bool) var_9)) ? (min((var_9), (10471391084642398850ULL))) : (arr_0 [i_1])))));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (var_10)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_1] [14ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)9] [(unsigned char)9] [8U] [13U]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (var_3) : (((/* implicit */int) var_7))))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_4] [i_1] [i_2] [i_0]))) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) : (arr_3 [i_1]))), (((/* implicit */unsigned long long int) var_6))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */short) arr_6 [i_1] [i_1] [i_2] [5LL] [i_1 - 2]);
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (max((var_1), (arr_0 [(unsigned char)8])))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_1))))));
                        var_17 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0])) : (63)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0] [i_0])), (4294967295U)))) : (18446744073709551615ULL))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        arr_18 [i_0] [i_2] = ((((/* implicit */_Bool) arr_13 [i_0 + 1])) ? (arr_13 [i_0 - 4]) : (((/* implicit */unsigned long long int) arr_15 [i_0 + 2] [i_0 - 3] [13U] [i_0])));
                        var_18 = ((/* implicit */_Bool) var_8);
                        arr_19 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_1] [i_1]))));
                        var_19 = ((/* implicit */int) ((unsigned long long int) arr_16 [i_1 - 1] [i_2]));
                    }
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_20 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                        var_21 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_7]))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 1056964608U))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) (short)1623)) / (var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        {
                            arr_34 [i_8] [i_8] [i_8] [i_8] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_7))))))));
                            var_24 = ((/* implicit */int) (signed char)-1);
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_10] [i_11])) ? (((/* implicit */int) arr_26 [i_10] [i_11])) : (var_3)))) ? (arr_23 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [10U] [i_10] [i_9] [i_9] [i_8]))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [(signed char)6] [i_8] [i_8] [i_8]) > (arr_33 [i_8] [i_8] [i_9] [i_9]))))) : (((((/* implicit */_Bool) arr_33 [i_9] [i_8] [i_8] [i_8])) ? (arr_33 [i_8] [i_8] [i_9] [i_9]) : (var_9)))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((unsigned char) (+(var_3))));
}
