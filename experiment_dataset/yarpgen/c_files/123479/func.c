/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123479
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_18)), (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32758)) >= (((/* implicit */int) (short)32733))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (((/* implicit */unsigned long long int) max((arr_0 [(signed char)9]), (((/* implicit */unsigned int) var_5)))))))) ? (((/* implicit */unsigned int) -2109647261)) : (((((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [1ULL])))))));
    }
    var_20 &= ((/* implicit */unsigned char) (unsigned short)25859);
}
