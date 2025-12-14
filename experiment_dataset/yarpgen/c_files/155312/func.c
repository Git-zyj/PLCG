/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155312
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
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max(((((~(((/* implicit */int) (unsigned short)44136)))) | (((/* implicit */int) (short)15)))), (((/* implicit */int) (unsigned short)58827)))))));
        var_22 |= ((/* implicit */long long int) max((((15311997987936879698ULL) >> (((8388352U) - (8388347U))))), (max((11963984041056653852ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))));
        var_23 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
}
