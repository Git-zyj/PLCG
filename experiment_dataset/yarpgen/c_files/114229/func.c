/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114229
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) (signed char)-41)) : ((-(((/* implicit */int) arr_1 [5] [5])))))))));
        arr_4 [(unsigned short)3] = ((/* implicit */unsigned char) var_0);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (signed char)-41);
    }
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((/* implicit */int) 7550984439454437573LL);
}
