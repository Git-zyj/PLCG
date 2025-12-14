/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134798
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
    var_10 = ((/* implicit */int) ((((/* implicit */int) max((((unsigned char) (signed char)27)), (((/* implicit */unsigned char) (signed char)1))))) >= (((/* implicit */int) (signed char)29))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) var_6);
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) arr_0 [i_0 - 1]))));
    }
    var_12 = ((/* implicit */unsigned int) var_0);
}
