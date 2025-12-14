/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135997
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) -7927529514865724330LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_0 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (1250727051) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))) << ((((+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_9))))) - (9814764996740080413ULL)))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((-6132090309634703629LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551603ULL)));
}
