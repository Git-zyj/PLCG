/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16826
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
    var_19 = var_11;
    var_20 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -9100033696088490698LL))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) var_7)))))) || (var_7)));
                arr_6 [i_0] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? ((+(((/* implicit */int) arr_1 [i_1 - 1])))) : (((/* implicit */int) min((arr_1 [i_1 - 1]), ((_Bool)0))))));
            }
        } 
    } 
}
