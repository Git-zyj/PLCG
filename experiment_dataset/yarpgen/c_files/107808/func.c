/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107808
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : ((~(var_15))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) min(((~(max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_1])))))), (((/* implicit */long long int) arr_5 [i_1] [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((min((((var_6) >> (((var_15) + (9058849062089729219LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7)))))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))))))));
}
