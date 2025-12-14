/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179762
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (unsigned char)32))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (var_10)))) ? (((((/* implicit */int) (unsigned char)205)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) var_4)))))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : (arr_0 [i_0]))))));
        var_21 ^= ((/* implicit */unsigned char) -9223372036854775797LL);
        var_22 = ((/* implicit */unsigned int) arr_2 [(_Bool)0]);
    }
    var_23 |= ((/* implicit */short) (((((~(-1938010532675180193LL))) / (((/* implicit */long long int) max((264241152U), (((/* implicit */unsigned int) (unsigned char)135))))))) / (((((/* implicit */long long int) var_9)) + (var_0)))));
}
