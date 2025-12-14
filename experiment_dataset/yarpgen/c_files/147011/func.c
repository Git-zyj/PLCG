/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147011
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
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) (unsigned char)43)))));
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (7U)))));
        var_22 &= ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_13))) ? (((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2])))));
    }
    var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? ((-((-(var_11))))) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_3)))))))));
}
