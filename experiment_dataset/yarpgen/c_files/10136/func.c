/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10136
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) max((((1795907238) | (min((2139792042), (-1795907245))))), ((-(-1795907238)))));
        var_11 |= ((_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((_Bool) (((+(((/* implicit */int) arr_1 [i_0] [i_0 + 2])))) << (((((1795907244) + (var_4))) - (946192836)))))))));
        var_13 = ((/* implicit */_Bool) (+(1795907249)));
    }
    var_14 = ((/* implicit */_Bool) min((((/* implicit */int) ((short) -1795907242))), (((((/* implicit */_Bool) 1491066947)) ? (((/* implicit */int) (short)30129)) : (max((1491066948), (((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */int) ((_Bool) var_1));
    var_16 = var_5;
    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((int) (+(((/* implicit */int) var_3)))))));
}
