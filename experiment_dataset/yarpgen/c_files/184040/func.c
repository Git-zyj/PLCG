/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184040
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
    var_18 = ((/* implicit */unsigned long long int) min((-5124474446672291536LL), (((/* implicit */long long int) (short)12288))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((max((((arr_2 [9U]) ? (((/* implicit */unsigned long long int) var_10)) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_0])))) > (arr_1 [i_0])));
        var_20 ^= ((/* implicit */long long int) var_9);
        var_21 = ((/* implicit */long long int) ((min((arr_2 [i_0]), (arr_2 [i_0]))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (var_1))))));
    }
}
