/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158612
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(var_10))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (unsigned char)198))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_5), (var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_4 [0] [i_1] [i_1]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_5))))), ((+(arr_1 [i_0]))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))));
                var_15 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)58))))) : (((((/* implicit */long long int) (-(var_10)))) * (min((1299796179380238777LL), (((/* implicit */long long int) var_5)))))));
            }
        } 
    } 
}
