/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189038
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
    var_10 = ((/* implicit */signed char) min((var_10), (var_9)));
    var_11 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-46))))));
    var_12 = ((((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-45)))), (((/* implicit */int) var_6))))) <= (min((((/* implicit */long long int) (+(var_7)))), (min((var_3), (var_5))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : ((+(arr_0 [i_0] [i_0]))));
                var_13 = ((/* implicit */signed char) (((+(arr_0 [i_0] [i_0 - 1]))) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
            }
        } 
    } 
}
