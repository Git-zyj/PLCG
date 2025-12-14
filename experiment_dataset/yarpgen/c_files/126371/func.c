/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126371
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
    var_11 = var_2;
    var_12 ^= ((/* implicit */_Bool) min((max(((-(var_8))), (((/* implicit */int) var_1)))), (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (unsigned short)65526))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3917154358U)))) ? (((/* implicit */int) ((_Bool) var_5))) : (((int) 377812926U))))) ? (((((/* implicit */_Bool) var_5)) ? (min((var_2), (((/* implicit */int) arr_4 [i_0] [i_1])))) : (((/* implicit */int) ((unsigned short) var_8))))) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
}
