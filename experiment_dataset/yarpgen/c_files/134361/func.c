/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134361
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
    var_14 = ((/* implicit */signed char) var_7);
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(2934923708251943771ULL)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+((+(arr_3 [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) ((((var_9) - (((/* implicit */unsigned long long int) var_11)))) % (var_7)));
}
