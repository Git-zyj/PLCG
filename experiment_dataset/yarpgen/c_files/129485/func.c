/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129485
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_7);
        var_11 = ((/* implicit */unsigned short) var_7);
        var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)210))))));
    }
    var_13 *= ((/* implicit */signed char) var_5);
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) var_6)))) > (((/* implicit */unsigned int) min((((int) var_4)), (((/* implicit */int) var_4)))))));
    var_15 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) min((var_1), (((/* implicit */long long int) var_0)))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_5))))) : (min((var_1), (((/* implicit */long long int) var_0))))))));
}
