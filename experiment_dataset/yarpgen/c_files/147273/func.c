/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147273
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((130048U), (1920505192U))))) ? (((/* implicit */unsigned int) var_5)) : ((((+(130059U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1920505192U))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) var_9);
        var_13 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_0])))), (((int) var_0))));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (((unsigned int) var_2)))));
    }
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((var_5), (var_5))))));
}
