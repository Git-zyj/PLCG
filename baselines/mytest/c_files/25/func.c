/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/25
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) 18446744073709551615ULL))));
                arr_7 [i_0] [i_0] [i_1] = arr_2 [i_0] [5ULL];
                arr_8 [i_1] = ((/* implicit */unsigned int) 950138743190904291LL);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1229)) ? (950138743190904279LL) : (-7516116564236972462LL)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) -7516116564236972472LL)), (var_4))) : (max((6880538423784896294ULL), (((/* implicit */unsigned long long int) var_1))))))));
    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) && (((/* implicit */_Bool) var_6))));
    var_16 *= ((/* implicit */short) var_9);
}
