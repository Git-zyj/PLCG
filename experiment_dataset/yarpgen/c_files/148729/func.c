/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148729
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_12) >= (((var_4) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) + (max((var_13), (((/* implicit */int) max((var_10), (((/* implicit */signed char) var_9)))))))));
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 &= ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 |= ((/* implicit */unsigned char) ((arr_1 [i_0]) ? (max((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)10788))))) != (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (var_3)));
    }
}
