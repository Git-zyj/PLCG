/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105157
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1887274371)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (max((4003162923846489048LL), (4003162923846489048LL)))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) ? (-4003162923846489058LL) : (((/* implicit */long long int) arr_2 [i_0]))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_1] [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((int) var_6)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) max((-4003162923846489056LL), (((/* implicit */long long int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2)))))))) : (6422040041105270122ULL)));
    var_13 = var_10;
    var_14 = ((/* implicit */unsigned char) ((_Bool) ((var_5) ? (((unsigned int) (unsigned short)392)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)229)))))));
}
