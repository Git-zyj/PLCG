/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184362
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) ((unsigned int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0 + 1])))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)11))))) : (min((((/* implicit */unsigned int) (unsigned short)49399)), (arr_3 [i_0] [i_0])))));
    }
    var_11 = ((/* implicit */long long int) ((min((var_1), (((/* implicit */int) ((var_1) == (((/* implicit */int) (unsigned short)53667))))))) << (((/* implicit */int) ((((/* implicit */int) var_4)) <= (var_1))))));
    var_12 = ((/* implicit */signed char) ((long long int) max((((/* implicit */long long int) var_8)), ((+(var_9))))));
}
