/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139289
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
    var_19 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))));
    var_20 = ((/* implicit */_Bool) ((short) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)41351))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_3))))), (var_5)));
                var_21 = ((/* implicit */short) max((((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]) - (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_2 - 1] [i_2 + 3])) * (var_10)))));
                }
                for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((short) (short)(-32767 - 1))))));
                    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_13 [i_1 - 2] [i_1 + 1] [i_1]))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) var_8))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-14932)) : (arr_13 [i_1 + 2] [i_1] [i_1])))));
                    arr_14 [i_0] = ((/* implicit */unsigned short) min((11368820796476742079ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_4 = 4; i_4 < 12; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] = ((/* implicit */int) arr_2 [i_5]);
                                arr_22 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_19 [i_4 - 1] [i_4] [i_1 - 2] [i_0]), (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) var_13)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))));
}
