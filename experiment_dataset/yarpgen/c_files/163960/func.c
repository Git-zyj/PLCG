/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163960
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_2 [(short)12]))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)93))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (max((var_3), (((/* implicit */unsigned long long int) (unsigned short)43827))))))));
    }
    var_21 -= (unsigned short)47171;
}
