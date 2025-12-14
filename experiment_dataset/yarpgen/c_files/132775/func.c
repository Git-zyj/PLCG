/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132775
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
    var_15 = ((/* implicit */int) (signed char)13);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_17 = ((/* implicit */signed char) min((var_17), (arr_0 [(unsigned short)6])));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)4)) << (((((/* implicit */int) var_0)) - (25543))))) > (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((int) var_2)) + (((/* implicit */int) ((unsigned short) arr_0 [i_0])))))) ? (((/* implicit */unsigned int) -48652744)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)9310)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967291U)))));
    }
}
