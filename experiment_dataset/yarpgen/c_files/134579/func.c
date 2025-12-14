/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134579
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
    var_17 = var_12;
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_2))));
    var_19 = var_5;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 ^= ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-1)));
                arr_5 [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
            }
        } 
    } 
}
