/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113650
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((max((max((var_4), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */unsigned int) arr_1 [i_0 + 1])) > (16773120U)))), (min(((short)-2605), (((/* implicit */short) arr_0 [i_0 - 3] [i_0])))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 - 3]) < (((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-1)))))))) > (max((((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [(unsigned short)11]))))))));
    }
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-16384)), (2829994214U))))));
    var_16 ^= ((/* implicit */signed char) ((max((var_4), (((/* implicit */unsigned int) ((int) var_6))))) ^ (((/* implicit */unsigned int) (~(max((((/* implicit */int) var_9)), (var_8))))))));
}
