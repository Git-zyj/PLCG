/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159544
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) | (16777215U)));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_1 - 1] [i_1])), (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_5 [i_1] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) var_7)))))));
    var_19 -= var_15;
}
