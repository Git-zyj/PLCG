/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131952
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_3 [6ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned long long int) ((1823532917) | (((/* implicit */int) (_Bool)1)))))))) ? (((arr_1 [i_0]) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_0)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (var_6))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63488)) ^ (((/* implicit */int) (unsigned short)57344))))) || (((/* implicit */_Bool) arr_1 [5]))));
        arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1]))));
    }
}
