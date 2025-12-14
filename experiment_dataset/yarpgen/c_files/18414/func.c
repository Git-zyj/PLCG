/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18414
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
    var_18 *= var_11;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) var_8);
        var_20 ^= (((!(((/* implicit */_Bool) arr_2 [(signed char)15])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_0]));
        var_21 ^= ((/* implicit */int) ((arr_2 [(short)24]) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((_Bool) ((short) arr_1 [24U] [i_0]))))));
    }
    var_23 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned long long int) min((((int) var_14)), ((~(((/* implicit */int) var_1)))))))));
}
