/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114332
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
    var_16 += min((((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) var_13))))) ? (min((var_13), (((/* implicit */unsigned int) (short)(-32767 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)45)), ((short)-32765))))))), (((/* implicit */unsigned int) ((short) max((((/* implicit */int) var_7)), (452600092))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32765)) + (2147483647))) << (((min((((/* implicit */unsigned int) var_3)), (var_13))) - (24544U)))))) >= ((+(((unsigned long long int) (_Bool)1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) 10396269954430076262ULL);
        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
}
