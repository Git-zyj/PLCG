/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112714
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_20 &= ((/* implicit */signed char) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)60)), ((short)-31208))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) max((arr_2 [12LL] [(_Bool)1]), (111750080U)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)5])) : (arr_3 [i_0 + 1])))))));
        var_22 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 3])))) ? (((/* implicit */long long int) min((var_19), ((~(var_5)))))) : (arr_0 [i_0 + 3] [i_0 + 1])));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) max((var_6), (var_6))))))));
}
