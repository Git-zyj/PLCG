/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131623
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
    var_14 -= ((/* implicit */signed char) min((min((((/* implicit */unsigned short) (unsigned char)38)), (min(((unsigned short)25189), (((/* implicit */unsigned short) var_5)))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (-2097152)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */signed char) var_11);
                arr_4 [i_1] [i_0] [8] = ((/* implicit */int) 7709060239119506018LL);
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (var_4)))));
}
