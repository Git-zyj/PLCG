/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104213
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
    var_17 ^= (~(((/* implicit */int) var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_4 [i_3] [i_2] [i_1]))));
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) arr_3 [i_0] [13])) ? (arr_8 [i_3]) : (((/* implicit */int) arr_1 [i_0])))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_14 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)-10)), (arr_2 [i_1] [i_2] [i_1]))) - (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_5 [(signed char)4] [(signed char)4])))))))) ? (arr_2 [i_0] [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)128)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 1] [i_0])), (var_16)))))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_9))));
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_5] = ((/* implicit */unsigned long long int) var_3);
                        var_21 = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned char)25))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_1 - 1] [2U] [i_2])))), (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_7 [i_1 - 1] [i_1 - 2] [(short)3]))))))))));
                        var_23 |= ((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0]);
                        var_24 = ((/* implicit */unsigned short) var_14);
                    }
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))) : (var_1))) : (((/* implicit */long long int) ((var_14) | (((/* implicit */int) (_Bool)0))))))))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [(short)1] [i_1] [i_0] [i_0] [(short)2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (short)8885)) : (((/* implicit */int) var_13))))))))));
                    var_27 |= min((min((((/* implicit */long long int) min((((/* implicit */short) var_7)), ((short)-8886)))), (min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2])), (var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */int) arr_5 [i_2] [i_2]))))) ? (((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) var_11))))) : (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
}
