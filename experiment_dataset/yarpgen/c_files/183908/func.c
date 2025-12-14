/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183908
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((-((+(arr_1 [i_0]))))) / (((/* implicit */int) var_10))));
        arr_3 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (1814766066056268625LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13)))))));
    }
    var_13 = ((/* implicit */long long int) ((_Bool) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)5590)))), ((+(((/* implicit */int) (_Bool)1)))))));
    var_14 = ((/* implicit */_Bool) var_1);
}
