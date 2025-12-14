/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17229
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (short)19212))) : (var_15)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -1136835283)) : (max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [(short)4])) % (((/* implicit */int) var_4)))))))));
        arr_2 [i_0] [i_0] = (-((-(((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
}
