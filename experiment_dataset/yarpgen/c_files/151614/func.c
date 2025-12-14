/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151614
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [6U] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-19)) + (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (signed char)53))));
        arr_5 [i_0] = ((/* implicit */long long int) ((1923909048U) >> (((((/* implicit */int) (short)2588)) - (2557)))));
    }
    var_19 = ((/* implicit */unsigned short) var_12);
    var_20 = min((max((min((11ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_16)))), (var_15));
    var_21 = ((/* implicit */signed char) min((((623440224611481925ULL) <= (623440224611481913ULL))), (var_18)));
}
