/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172621
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (8422666819789699446LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (min((-8422666819789699432LL), (8422666819789699445LL))) : (((((/* implicit */_Bool) (unsigned short)15617)) ? (((/* implicit */long long int) -1197911918)) : (-8422666819789699446LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */unsigned long long int) 1650606329U))))) ? ((-(var_10))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3157309158U)))))));
                var_11 = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_12 *= ((/* implicit */signed char) ((((67108864U) >> ((((~(((/* implicit */int) var_4)))) + (50))))) > (var_3)));
}
