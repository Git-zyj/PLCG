/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131786
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [1LL]);
        var_13 ^= ((/* implicit */signed char) max((arr_0 [i_0]), (arr_0 [i_0])));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned short)2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)31010)) <= (((/* implicit */int) (short)24671)))))));
    }
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (7879565233112198679ULL)))) != (((((((/* implicit */int) (short)-10843)) + (2147483647))) << (((var_7) - (4138468530U)))))))) << (((((/* implicit */int) max((var_12), (var_12)))) - (55)))));
    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_11))));
}
