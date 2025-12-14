/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15033
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
    var_17 -= ((/* implicit */short) ((2093056) / (((/* implicit */int) var_16))));
    var_18 = min((var_14), (var_1));
    var_19 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0 - 1]))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) -2093057))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((4307705265633368815ULL) << (((min((634283239U), (((/* implicit */unsigned int) var_3)))) - (17761U)))));
            }
        } 
    } 
}
