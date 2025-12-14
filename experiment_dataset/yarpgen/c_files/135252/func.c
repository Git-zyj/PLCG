/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135252
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-112)), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (2561579974499799139ULL))), (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_1] [i_0]));
                arr_6 [(signed char)7] [(signed char)7] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-117))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) : (6407248948466775595LL))), (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (signed char)-104)))))));
}
