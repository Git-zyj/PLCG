/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175285
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
    var_20 = ((/* implicit */long long int) (-2147483647 - 1));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((min(((((_Bool)1) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59043))))), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((unsigned int) arr_3 [i_0] [i_0])) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))))))))));
                arr_4 [i_0] [i_0] |= ((((((/* implicit */_Bool) min((-4958782785285431100LL), (((/* implicit */long long int) (signed char)-71))))) ? (((/* implicit */long long int) ((unsigned int) -1LL))) : (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */long long int) 1272035032U)) : (4958782785285431129LL))))) >> (((min((((/* implicit */unsigned int) (unsigned short)59043)), (((1787876687U) >> (0LL))))) - (58986U))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((signed char) var_13));
}
