/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180288
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
    var_17 = ((/* implicit */signed char) ((unsigned int) var_15));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_16), (((/* implicit */signed char) max(((_Bool)1), ((_Bool)1)))))))));
        var_18 ^= ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)21717))) * (3761888354U))), (((/* implicit */unsigned int) ((signed char) max((2176348629U), (((/* implicit */unsigned int) (_Bool)1))))))));
    }
}
