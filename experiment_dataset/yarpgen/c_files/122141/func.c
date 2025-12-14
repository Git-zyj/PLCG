/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122141
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((short) (unsigned short)6518));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 + 1] [i_0 - 1]);
        var_14 = ((/* implicit */unsigned char) ((_Bool) 32767LL));
        var_15 = ((/* implicit */unsigned char) ((signed char) -32764LL));
        var_16 -= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
    }
    var_17 = ((/* implicit */unsigned int) var_6);
}
