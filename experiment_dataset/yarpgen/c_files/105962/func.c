/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105962
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
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((int) var_7))))), ((+(max((((/* implicit */unsigned long long int) 1925948381U)), (8181444606721402802ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */unsigned int) var_2))))) : ((~(2064852543287007570ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)63818)), (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_0 [(short)8])) ? (var_4) : (((/* implicit */long long int) -742590194)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [4])))) ? (((arr_2 [i_0]) * (arr_2 [i_0]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)127)), (1629524272))))));
    }
    var_20 = var_1;
}
