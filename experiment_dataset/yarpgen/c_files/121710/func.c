/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121710
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
    var_17 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))), (var_8)));
    var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1314821567U) << (((((/* implicit */int) (short)18747)) - (18730)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (var_1))))) : (((((/* implicit */_Bool) var_6)) ? (var_14) : (var_9)))))) && (((/* implicit */_Bool) ((unsigned short) (short)18767)))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) max((((/* implicit */short) (unsigned char)94)), ((short)17624)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)231)))))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_13)) + (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) (short)-18748)) >= (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [6U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) var_3))));
    }
}
