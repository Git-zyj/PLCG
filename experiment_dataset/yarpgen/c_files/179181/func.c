/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179181
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    var_11 = ((/* implicit */int) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))), (max((var_8), (((/* implicit */long long int) var_9))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */int) (+((+(((long long int) var_7))))));
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7579553687424470200LL)) ? (arr_7 [i_0] [i_1 + 2] [i_2] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (min((var_1), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1 - 1] [i_3 + 2]))))));
                        var_13 = ((((/* implicit */_Bool) (short)25153)) ? (((((/* implicit */_Bool) ((unsigned short) (short)-25157))) ? ((~(arr_9 [i_3] [i_2] [i_1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (short)25157))))) : ((+(arr_9 [i_1 - 2] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3]))));
                        var_14 *= ((/* implicit */_Bool) var_4);
                        var_15 &= ((/* implicit */int) (short)25179);
                    }
                    var_16 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_4 [i_2])), (var_4))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 1])) / (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])))))));
                    var_17 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) >= (var_3))))) + (max((var_6), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0])))))), (((/* implicit */unsigned int) var_2))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */int) max(((short)25153), (((/* implicit */short) (unsigned char)40))))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) > (var_5))))))))))));
        arr_11 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0]))));
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((var_1) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_1)))) ? (max((((/* implicit */int) arr_13 [i_4])), (-615513294))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_1 [i_4] [i_4]))))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */short) var_9);
    }
}
