/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113268
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
    var_19 = ((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)186)), ((short)-19562)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_3])) : (((((/* implicit */_Bool) arr_7 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14])) ? (var_12) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 + 1] [(unsigned short)12])) ? (arr_6 [i_0] [i_1] [i_2 + 2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0])))))))));
                    }
                    for (int i_4 = 4; i_4 < 14; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_4 - 4] [i_4 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) (+(17179869183LL))))), ((~(-5120950423973485232LL)))));
                        /* LoopSeq 1 */
                        for (short i_5 = 3; i_5 < 12; i_5 += 2) 
                        {
                            var_22 ^= ((/* implicit */signed char) min((((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_4 - 2] [i_0] [i_1])), (((long long int) (short)0))));
                            var_23 = ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_2 + 2] [i_4 + 2] [i_5 + 4] [i_5])) < (((/* implicit */int) max(((short)32758), (((/* implicit */short) (unsigned char)70)))))));
                            var_24 = ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) var_16)))), (((/* implicit */int) arr_14 [i_5] [i_4 - 2] [i_4 - 3] [i_4 - 4] [i_5]))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0] [i_4 - 4] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 + 2] [i_4 - 4] [i_5 + 4])) < (((/* implicit */int) arr_9 [i_0] [(_Bool)1]))))) : (((/* implicit */int) ((short) min((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0])))))))))));
                        }
                    }
                    var_26 ^= ((/* implicit */long long int) (((+(((/* implicit */int) (short)16383)))) - (((/* implicit */int) max(((unsigned char)70), (((/* implicit */unsigned char) arr_7 [i_2 + 2] [i_2 + 2] [i_2])))))));
                }
            } 
        } 
    } 
}
