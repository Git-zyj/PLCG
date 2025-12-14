/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136516
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
    var_14 = ((int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [(signed char)1] [(signed char)1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (~(var_3)))) ? ((~(((/* implicit */int) (unsigned short)8118)))) : ((~(((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((1U), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) max((-3421934523020280643LL), (((/* implicit */long long int) 1312668750))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (max((var_5), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44677))) : (960517600U))))));
        var_16 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) var_11))));
    }
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (+(var_13)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-16328)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)200)), (var_7)))) ? ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)14)))) : ((~(((/* implicit */int) (short)-30143))))))));
}
