/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184401
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (var_9) : (((/* implicit */long long int) ((var_6) - (var_8))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((var_6), (((/* implicit */int) var_17))))) ^ (var_1)))) ? (((/* implicit */long long int) var_14)) : (var_18)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_1 - 4])) && (((/* implicit */_Bool) arr_0 [i_0 - 3] [i_1 - 1])))));
                    var_22 = min((((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0 - 2]) >= (arr_2 [i_0 - 2])))) > (((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)7]))))))))), (((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_1))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 3])) / (var_14)))))));
                }
            } 
        } 
    } 
}
