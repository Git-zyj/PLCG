/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127502
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) == (-533324618154808141LL))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) : (((/* implicit */int) arr_2 [i_0]))));
        var_19 = ((/* implicit */int) var_9);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(arr_0 [i_0] [4U]))))));
    }
    var_21 = (+(848371400U));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_16))));
}
