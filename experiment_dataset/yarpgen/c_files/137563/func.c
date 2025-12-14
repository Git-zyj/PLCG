/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137563
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) 4611686018427387902LL))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) arr_1 [5LL] [5LL]);
                    arr_7 [13] = ((/* implicit */unsigned char) max(((signed char)-126), (((/* implicit */signed char) (_Bool)1))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (max((var_3), (var_8)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_5)) : (8223196453820825603LL)))))));
}
