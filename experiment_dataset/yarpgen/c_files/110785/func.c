/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110785
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)65535)) - (65527))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (arr_1 [i_0]))))));
    }
    var_11 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (((var_8) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (((max((var_6), (var_6))) / (var_6))) : ((~(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
}
