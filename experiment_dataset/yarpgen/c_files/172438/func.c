/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172438
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
    var_18 = ((((/* implicit */_Bool) ((var_14) >> (0LL)))) ? (((/* implicit */unsigned long long int) (+(var_14)))) : (var_9));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (-(((arr_1 [i_1]) - (arr_1 [i_2])))));
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 11LL)) ? (2597593446125159353ULL) : (((/* implicit */unsigned long long int) 0LL))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (-1LL))))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) + (((((/* implicit */_Bool) ((var_13) ? (var_14) : (2230564731U)))) ? (var_0) : (((/* implicit */long long int) var_12))))));
    var_23 = ((_Bool) ((((var_9) | (((/* implicit */unsigned long long int) var_14)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_17) : (26LL))))));
}
