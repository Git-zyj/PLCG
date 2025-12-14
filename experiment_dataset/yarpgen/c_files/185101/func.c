/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185101
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)8)), (max((0ULL), (1846242743172397683ULL)))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned long long int) var_1);
        arr_5 [0U] [i_0] = ((unsigned char) arr_0 [i_0]);
        var_12 = ((/* implicit */signed char) var_6);
        var_13 = ((/* implicit */_Bool) min((var_13), (var_3)));
    }
    var_14 = ((/* implicit */_Bool) var_9);
}
