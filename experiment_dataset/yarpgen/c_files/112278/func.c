/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112278
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(short)18] [(short)18] |= ((/* implicit */unsigned char) (-(var_3)));
        arr_4 [i_0] = ((/* implicit */signed char) (~(var_13)));
        var_14 |= ((/* implicit */_Bool) (~(2048366466552406506LL)));
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        arr_5 [i_0] [i_0] = (!(((/* implicit */_Bool) var_5)));
    }
    var_16 += var_0;
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : ((~(var_2))))))));
}
