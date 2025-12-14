/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173111
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
    var_19 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)3968))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [(unsigned char)10] [10]))))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [4ULL] [i_0]))) ^ (arr_0 [i_0]))))) * (((/* implicit */unsigned int) (+(((int) arr_0 [i_0]))))))))));
        var_22 = ((/* implicit */long long int) arr_0 [(short)6]);
    }
    var_23 = ((/* implicit */unsigned int) (~(var_9)));
}
