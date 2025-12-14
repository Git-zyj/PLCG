/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122067
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
    var_12 -= var_3;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 |= ((/* implicit */unsigned long long int) ((_Bool) max((arr_1 [(unsigned short)10]), (((/* implicit */long long int) var_8)))));
        var_14 = ((/* implicit */unsigned char) min(((~(arr_1 [i_0]))), (((((/* implicit */_Bool) 15059597523415862839ULL)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) 2620938145U))));
    }
    var_16 = ((/* implicit */_Bool) var_8);
}
