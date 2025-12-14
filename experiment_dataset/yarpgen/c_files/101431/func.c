/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101431
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
    var_16 |= ((/* implicit */unsigned char) var_0);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */unsigned long long int) var_7)) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (1705247518419074102ULL))) % (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) (unsigned short)65513)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) var_12))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
    }
    var_19 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_11)) ? ((((_Bool)0) ? (4429692499449004232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)23), ((unsigned short)65520)))))))));
}
