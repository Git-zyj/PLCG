/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141927
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_6)) > (min((var_1), (((/* implicit */long long int) var_4)))))))) % (((((/* implicit */_Bool) ((unsigned char) var_11))) ? ((-(2339158191U))) : (((/* implicit */unsigned int) (-(var_11))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) min((var_6), (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))))) > (max((((/* implicit */long long int) (~(var_3)))), (((long long int) (signed char)-11))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_4)))));
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */long long int) var_9);
}
