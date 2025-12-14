/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181756
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
    var_18 = ((/* implicit */long long int) 90658510U);
    var_19 = ((/* implicit */long long int) var_0);
    var_20 += ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (9223372036854775807LL)))) ? (((/* implicit */unsigned int) var_11)) : (var_14))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 ^= ((/* implicit */int) min((((arr_3 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 475331989777514261LL)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6301789102375389150LL))))) : (((((/* implicit */_Bool) 2665045438067838188LL)) ? (arr_0 [i_1]) : (1923419148))))))));
                arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (+((+(arr_0 [i_0])))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) arr_0 [i_1])) >= (2732330041U))))) : (4126685566431059030LL));
            }
        } 
    } 
}
