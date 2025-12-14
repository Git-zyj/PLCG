/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128486
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_14 += ((/* implicit */long long int) (signed char)-3);
                            var_15 = ((/* implicit */unsigned long long int) ((((((((arr_9 [i_3 + 1] [i_2] [i_1] [i_1] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) var_13)))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 + 2] [i_3 - 1] [(unsigned char)0] [i_3]))))))));
                            var_16 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                            var_17 = ((/* implicit */signed char) arr_11 [i_3 + 2] [i_3] [i_3 + 3] [i_3]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))))) ? (max((0ULL), (((/* implicit */unsigned long long int) 3039083161U)))) : (((((unsigned long long int) arr_7 [i_0] [(signed char)0] [i_4])) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (var_1)))))))));
                    arr_15 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_3);
                    var_19 = ((unsigned int) ((_Bool) (+(arr_9 [11U] [i_1] [11LL] [i_4] [11LL]))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    arr_19 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((1255884144U), (((/* implicit */unsigned int) arr_17 [i_5 - 1]))))), (var_11))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [6ULL] [i_5])) | (((/* implicit */int) ((_Bool) max((var_7), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_1] [i_5]))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((1255884144U) * (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_6])))))))));
                    var_21 = ((/* implicit */unsigned char) arr_3 [i_0]);
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_6] [i_0]))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_7]))));
        var_24 = ((signed char) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_25 = ((/* implicit */long long int) arr_23 [i_7]);
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        var_26 = ((/* implicit */_Bool) (~(((unsigned long long int) arr_10 [i_8] [i_8] [i_8]))));
        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_6 [i_8] [i_8]), (arr_6 [i_8] [i_8]))))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (arr_1 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25327))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_8] [(signed char)6] [i_8] [i_8])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(18446744073709551615ULL)))))) : (((max((((/* implicit */unsigned long long int) (_Bool)1)), (7922384935136381330ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8]))) / (arr_5 [i_8] [(unsigned char)1]))))))));
        var_29 = (((~((~(arr_21 [i_8] [i_8] [i_8]))))) & (max((((/* implicit */long long int) arr_17 [i_8])), (-1LL))));
        arr_28 [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_9 [i_8] [i_8] [i_8] [i_8] [i_8]))), (((/* implicit */long long int) ((_Bool) arr_12 [i_8])))));
    }
}
