/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17619
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(max((-2371313268314253648LL), (((/* implicit */long long int) arr_0 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)13387)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((arr_0 [(unsigned short)2] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-13388))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */int) (short)-13388)) <= (((/* implicit */int) (short)26070)))))));
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) ? ((-(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15132))))))));
}
