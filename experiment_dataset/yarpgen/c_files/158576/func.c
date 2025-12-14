/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158576
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_19 -= ((/* implicit */signed char) (short)3422);
    }
    var_20 |= ((/* implicit */int) ((((unsigned int) min((var_17), (((/* implicit */unsigned int) (signed char)100))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384)))));
}
