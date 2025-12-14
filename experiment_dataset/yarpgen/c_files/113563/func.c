/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113563
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((unsigned short) arr_0 [i_0]));
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0 + 4])) == (var_4)))), (min((((/* implicit */int) (unsigned short)23)), ((-(((/* implicit */int) var_12))))))));
    }
    var_18 = ((/* implicit */long long int) var_2);
}
