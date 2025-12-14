/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116335
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
    var_11 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) var_1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 += ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))))));
        var_13 = ((/* implicit */int) max((var_13), ((-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)36))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_1 [i_0]))))))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
}
