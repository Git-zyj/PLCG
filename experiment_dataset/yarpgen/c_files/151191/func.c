/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151191
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) arr_1 [i_0] [i_0 + 4]);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22479)) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 3])) : (((((/* implicit */int) var_9)) & (((/* implicit */int) var_2))))))) ? (max((max((((/* implicit */unsigned int) var_3)), (var_0))), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
    }
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (max((((long long int) var_0)), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))));
}
