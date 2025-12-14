/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101291
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 2]))))) >= (min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (var_6)))), (var_8))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0 - 2])), ((-(-8192LL))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_4 [i_1]))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_4 [(signed char)4]))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) + (((-8183LL) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 9223372036854775807LL))))));
    }
    var_18 = (!(((/* implicit */_Bool) ((unsigned char) var_9))));
}
