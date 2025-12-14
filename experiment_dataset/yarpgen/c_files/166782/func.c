/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166782
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
    var_10 = ((/* implicit */int) min((var_10), (min((((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))), ((-(((((/* implicit */_Bool) (short)23921)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 |= ((/* implicit */int) arr_0 [i_0] [i_0]);
                var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_1 + 1]) * (arr_1 [i_1 - 2])))) ? (((((/* implicit */_Bool) 2529402280U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)176)))) : (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < ((-(((var_2) ? (var_5) : (2147483638)))))));
}
