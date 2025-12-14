/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110126
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
    var_18 = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-24366)), (var_6)))), (max((var_12), (((/* implicit */long long int) (unsigned short)56888))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_16))));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_8))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), ((unsigned short)8639)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_2))))) : (var_0)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(2551404751U)))) ? ((+(max((((/* implicit */unsigned int) var_17)), (var_1))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)63)))) | (((/* implicit */int) arr_1 [9] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((min((arr_0 [i_0]), (arr_0 [i_0]))), ((short)24373)));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24366))) | (11613000398901963071ULL))))));
    }
    var_23 = ((/* implicit */long long int) var_14);
}
