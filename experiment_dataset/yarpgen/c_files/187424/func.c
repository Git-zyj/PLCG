/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187424
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_0 [i_0 - 1] [11ULL])) ? (7024438165731632355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */short) ((2073509734U) >> (((((/* implicit */int) max((arr_0 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned short) var_14))))) - (44886)))));
        arr_4 [2] [i_0] = (+((-(((/* implicit */int) (signed char)118)))));
    }
    var_16 = ((/* implicit */_Bool) ((signed char) (short)17534));
    var_17 = ((/* implicit */int) var_9);
}
