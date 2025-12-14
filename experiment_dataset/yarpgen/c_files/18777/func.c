/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18777
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (signed char)-1);
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((var_5) - (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((var_3), (var_3)))))) : (((min((var_12), (((/* implicit */unsigned long long int) var_5)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_2))))))));
}
