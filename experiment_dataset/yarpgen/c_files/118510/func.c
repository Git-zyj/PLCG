/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118510
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) max(((signed char)-86), ((signed char)-86)));
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((var_6), (((/* implicit */long long int) var_2)))) & (var_6)))), (min((max((var_12), (var_13))), (var_12)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_2))))))), (var_9))))));
}
