/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118584
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((long long int) var_11)) : (var_16)))) ? (var_7) : ((+(((/* implicit */int) var_18))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_17))));
                var_22 &= ((/* implicit */unsigned char) max((((/* implicit */int) max(((unsigned short)7680), (((/* implicit */unsigned short) (unsigned char)167))))), (((((/* implicit */_Bool) -362119912)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (short)4))))));
            }
        } 
    } 
    var_23 |= max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) var_15))))))));
    var_24 = ((/* implicit */short) var_12);
    var_25 |= ((/* implicit */short) var_6);
}
