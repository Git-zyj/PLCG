/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135943
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) arr_3 [i_0] [22U])))))))));
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [i_0] = ((((/* implicit */_Bool) -6876469955991803505LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) arr_3 [6ULL] [i_0])) % (((/* implicit */int) arr_3 [i_0] [i_0])))));
    }
    var_20 = ((/* implicit */unsigned long long int) (~(-4810954864040825906LL)));
    var_21 = ((/* implicit */signed char) var_12);
}
