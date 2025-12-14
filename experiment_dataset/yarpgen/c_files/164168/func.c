/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164168
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
    var_16 *= ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) | (((((/* implicit */int) var_15)) * (((/* implicit */int) var_9)))))));
    var_17 = var_11;
    var_18 = ((/* implicit */unsigned char) var_2);
    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((short)23769), (((/* implicit */short) (signed char)76))))), (var_6)))) ? (min((((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((_Bool) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) min((((short) var_3)), (((/* implicit */short) ((_Bool) var_2)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) min((((arr_3 [i_0] [i_0]) * (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)-76))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) arr_4 [i_0] [i_1])) - (189))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [2U])))))) : (((((/* implicit */int) arr_5 [i_0])) / (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1]))))))));
            }
        } 
    } 
}
