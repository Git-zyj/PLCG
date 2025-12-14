/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153450
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
    var_16 = ((/* implicit */unsigned int) max(((!(((var_11) != (10639004198367719042ULL))))), (var_10)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 ^= ((((/* implicit */_Bool) ((unsigned long long int) (-(arr_1 [i_1 - 1]))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 3348650023591573975LL)) && ((_Bool)1))) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_0] [(signed char)2] [i_0])))))))));
                var_18 *= ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
}
