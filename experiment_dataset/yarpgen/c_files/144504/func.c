/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144504
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
    var_11 = ((/* implicit */unsigned int) (!(var_7)));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_3), (((/* implicit */short) (((_Bool)0) || (((/* implicit */_Bool) 7269663347798844109ULL)))))))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_8))))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_1);
        var_14 &= ((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0 - 1]));
    }
    for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_7)), (var_2)))), (arr_5 [i_1 + 2])));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) max((((unsigned int) 7269663347798844113ULL)), (((((/* implicit */_Bool) (signed char)98)) ? (1885769757U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153)))))));
    }
}
