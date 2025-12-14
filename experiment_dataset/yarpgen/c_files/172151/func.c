/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172151
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((_Bool) 3712294041U)))));
        var_21 -= 2305843009213693440ULL;
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((long long int) arr_3 [i_0] [i_0])) : ((-(arr_2 [i_0] [i_0])))));
    }
}
