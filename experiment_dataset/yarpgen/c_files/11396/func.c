/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11396
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
    var_12 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    var_13 &= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 1905331202)) ? (-1905331188) : (((/* implicit */int) (unsigned char)67)))) / (((/* implicit */int) var_3)))) * (min((((((/* implicit */int) var_2)) / (-1905331202))), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_0 [i_0 + 3])))));
        var_14 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1905331202)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    }
}
