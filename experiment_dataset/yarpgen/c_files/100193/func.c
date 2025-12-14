/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100193
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
    var_12 = ((/* implicit */unsigned short) (~(var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */long long int) var_6);
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)24)) ? (0U) : (((/* implicit */unsigned int) var_6)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_6) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2683121472U)))) != (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) var_6))))))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_1 [12U]))) == (max((var_10), (((/* implicit */int) var_5))))));
                arr_5 [i_1] = ((/* implicit */signed char) var_6);
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((arr_3 [(signed char)0] [i_1] [(signed char)0]), (((/* implicit */unsigned short) var_9)))))));
            }
        } 
    } 
}
