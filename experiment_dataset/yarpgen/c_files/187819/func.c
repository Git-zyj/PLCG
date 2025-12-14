/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187819
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */signed char) (((+(1670010887))) + (((int) ((_Bool) 1792166299U)))));
                var_13 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((_Bool) ((signed char) 1322391737))))));
                var_14 = ((/* implicit */signed char) ((unsigned int) (-(max((arr_1 [i_1]), (((/* implicit */long long int) (_Bool)1)))))));
            }
        } 
    } 
    var_15 = ((unsigned short) 4294967277U);
    var_16 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)9059)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
}
