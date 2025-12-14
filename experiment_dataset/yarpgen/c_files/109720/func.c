/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109720
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) var_5)) : (var_0)));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((3317146897276956325ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) var_0);
                var_13 = ((/* implicit */signed char) (+(arr_1 [i_0])));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) 0ULL))));
                var_15 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
}
