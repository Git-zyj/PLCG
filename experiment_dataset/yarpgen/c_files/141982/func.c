/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141982
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
    var_20 = ((/* implicit */long long int) (+(var_2)));
    var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(67108860U)))), (min((max((((/* implicit */long long int) var_19)), (var_8))), (((/* implicit */long long int) var_7))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((((((/* implicit */int) arr_0 [14])) + (2147483647))) << (((((/* implicit */int) var_9)) - (55100)))))) ^ (((var_16) >> (((((/* implicit */int) arr_1 [i_0])) - (119)))))))));
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((((67108860U) / (4227858435U))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 + 2])))))));
        var_22 += ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    }
}
