/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104328
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
    var_10 = ((((/* implicit */long long int) max((((/* implicit */unsigned int) (~(var_6)))), (((var_4) | (var_7)))))) & (((((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) & (var_4)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) | (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [(unsigned char)9]))) : (((((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18947))))) | (((/* implicit */unsigned long long int) 2103773544))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) var_1);
        var_12 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
    }
}
