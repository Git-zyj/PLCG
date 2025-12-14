/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131671
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_19) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2136237743289508574ULL)))) : (var_4)))) : ((+(((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) + (((((/* implicit */_Bool) arr_0 [14ULL])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */int) min((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) (signed char)-42)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (var_17)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)26273)))))))));
    }
    var_21 = ((/* implicit */int) var_10);
}
