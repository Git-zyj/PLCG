/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149131
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
    var_10 *= ((/* implicit */short) -1883579984);
    var_11 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) var_0)))), ((+(1642117408)))))), ((-(((((/* implicit */_Bool) 371383550U)) ? (371383574U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) 7)))), (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    var_12 &= (-((+(min((32787563), (((/* implicit */int) var_2)))))));
}
