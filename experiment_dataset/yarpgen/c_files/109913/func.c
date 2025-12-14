/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109913
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_2 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) var_11)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_1 [i_0])))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 512)) % (var_7))))))));
    }
    var_15 &= ((/* implicit */short) var_6);
    var_16 = ((((/* implicit */unsigned long long int) var_5)) * (((var_8) - (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (14848333978982774883ULL))))));
}
