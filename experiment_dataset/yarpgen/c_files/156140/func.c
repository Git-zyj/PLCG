/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156140
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)75)))) : (((/* implicit */int) var_0))))), (((unsigned long long int) arr_1 [i_0]))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) arr_2 [i_0]))))));
        var_14 ^= ((/* implicit */short) min((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_15 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) var_9)), (var_12))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)58))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_6)))))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))))))));
}
