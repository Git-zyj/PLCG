/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169017
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */int) min((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */short) (_Bool)1))))) - (((/* implicit */int) arr_3 [(short)7]))))) : (max(((+(-1844679918404754918LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1]))))))))))));
                var_17 += ((/* implicit */_Bool) min((max((((/* implicit */long long int) 1353712513U)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1844679918404754918LL))))), (((/* implicit */long long int) ((_Bool) var_12)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */long long int) (-(4294967275U)))), (-1LL))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_8);
}
