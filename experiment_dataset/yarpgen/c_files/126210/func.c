/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126210
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
    var_10 = ((/* implicit */unsigned short) max(((short)7249), (((/* implicit */short) (signed char)0))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (var_6) : (var_0))))))) + (var_5)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_12 ^= (((!(((/* implicit */_Bool) min(((signed char)126), ((signed char)0)))))) ? (((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_2))))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775803LL))) + (9LL))))) : (((/* implicit */int) arr_1 [(unsigned short)0])));
        var_13 = ((/* implicit */unsigned long long int) var_9);
    }
}
