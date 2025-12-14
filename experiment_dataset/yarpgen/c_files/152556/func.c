/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152556
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min(((-(arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2]))))))));
        var_21 *= ((/* implicit */unsigned char) arr_2 [i_0] [i_0 + 2]);
    }
    var_22 = ((/* implicit */short) (signed char)127);
    var_23 = ((/* implicit */long long int) (unsigned short)47956);
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_5))));
}
