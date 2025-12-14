/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154614
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
    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (min((var_15), (((/* implicit */int) (unsigned short)4365)))) : ((~(((/* implicit */int) (_Bool)0))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9))))))) : (4230322123873615864ULL)));
    var_19 = ((/* implicit */_Bool) (short)10714);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)22657)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30736))) : (10457596104722906758ULL)));
        arr_3 [i_0] [5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(short)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2820167082U)));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)0))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_13)))))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_4))));
    }
}
