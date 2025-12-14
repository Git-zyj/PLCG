/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150043
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
    var_15 -= ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) -1831507369))), (((((/* implicit */_Bool) 1831507357)) ? (((/* implicit */int) var_5)) : (var_0)))))), (var_10)));
    var_16 = ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) (short)32762)))), (((/* implicit */int) (unsigned short)13)))) < (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (+(((((-985150023) + (2147483647))) >> (((((/* implicit */int) var_14)) - (23871)))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) 1831507368)), (803883080609091708ULL))))), ((-(((/* implicit */int) (short)-7546)))))))));
            }
        } 
    } 
}
