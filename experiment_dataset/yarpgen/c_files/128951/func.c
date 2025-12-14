/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128951
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
    var_12 -= ((/* implicit */short) max((var_7), (((/* implicit */unsigned int) var_4))));
    var_13 = ((/* implicit */_Bool) (short)32759);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) (unsigned char)218)), (arr_0 [i_0]))), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38028)))));
        var_15 -= ((/* implicit */short) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) -1140828657)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)18]))) : (var_7)))));
    }
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (short)32759));
}
