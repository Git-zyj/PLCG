/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181235
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
    var_20 = ((/* implicit */signed char) ((_Bool) var_6));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_0)))))) ? (((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) var_2))))))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */int) (unsigned short)65534))))) ? ((-(((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (_Bool)0)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (arr_0 [i_0]) : (max((arr_1 [i_0]), (((/* implicit */long long int) var_3))))))), (((((unsigned long long int) (unsigned short)6473)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0])))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) ((((arr_0 [i_0]) + (arr_1 [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59060)))))) % (((/* implicit */int) (short)11292))));
        var_24 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))));
}
