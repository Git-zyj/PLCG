/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100618
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
    var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)78))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((var_0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)250)))) & (((((/* implicit */_Bool) var_1)) ? (0) : (((/* implicit */int) var_14))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -422714308787814834LL)) && (((/* implicit */_Bool) var_15)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_12))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1803305573) & (((/* implicit */int) (!(((/* implicit */_Bool) -947901739)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_13)), (var_17)))) & (((/* implicit */int) var_1))))) : (max((((-422714308787814818LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) 3084435434U)) ? (((/* implicit */long long int) 2455452798U)) : (3255865715909094370LL)))))));
}
