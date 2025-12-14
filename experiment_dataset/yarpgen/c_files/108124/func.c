/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108124
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (398933838U) : (3896033457U))), (((/* implicit */unsigned int) var_14))))) : ((((!(((/* implicit */_Bool) var_7)))) ? (((var_4) - (((/* implicit */unsigned long long int) 398933847U)))) : (((/* implicit */unsigned long long int) max((var_10), (1238388283))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((var_10) / (((/* implicit */int) arr_1 [i_0 - 1])));
        var_18 ^= ((/* implicit */unsigned short) ((((long long int) 2356892300986155174LL)) << (((((/* implicit */int) var_0)) - (28)))));
    }
}
