/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187557
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
    var_11 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [(unsigned char)9] [i_0] = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_4)))));
        arr_3 [i_0] = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-110)) - (((/* implicit */int) var_3))))) ? (954824181U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (var_8)))))));
        var_12 *= ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) arr_0 [(short)9] [(short)9])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (short)4215)))))), (((((/* implicit */int) (unsigned char)10)) << (((((/* implicit */int) (unsigned char)78)) - (60)))))));
    }
    var_13 = ((/* implicit */unsigned int) var_7);
}
