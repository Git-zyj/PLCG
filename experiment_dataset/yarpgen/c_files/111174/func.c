/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111174
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) -6511595721242436853LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))))));
        var_13 = ((/* implicit */_Bool) ((arr_0 [(_Bool)1]) ? (((((/* implicit */_Bool) ((signed char) arr_1 [3LL] [3LL]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6511595721242436840LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24312))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0])), (var_9))))) : (max((var_9), (((/* implicit */unsigned long long int) 6511595721242436841LL))))));
    }
    var_14 = ((/* implicit */_Bool) var_4);
    var_15 = ((/* implicit */long long int) var_8);
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7652930577411804960LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6511595721242436853LL))));
}
