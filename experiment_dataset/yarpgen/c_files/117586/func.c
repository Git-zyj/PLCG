/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117586
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
    var_14 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (_Bool)1);
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 893000850283390038LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 4444571150024479117LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) : (arr_1 [i_0])))));
    }
}
