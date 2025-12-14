/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14883
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17)))) & (((((/* implicit */int) var_9)) + ((~(((/* implicit */int) (unsigned short)38657))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(17ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))));
    }
    var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16)) ? (var_13) : (((/* implicit */unsigned long long int) max((((var_1) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58585))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65528))))))))));
}
