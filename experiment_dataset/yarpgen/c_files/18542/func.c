/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18542
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
    var_14 ^= ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) (short)28196)))))));
        arr_3 [(_Bool)1] = ((/* implicit */short) var_9);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)4353)) % (((/* implicit */int) (unsigned char)80)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) var_10)))))));
        var_17 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)28204))))));
    }
    var_18 = (-(max(((~(((/* implicit */int) (unsigned char)128)))), (-1933425800))));
}
