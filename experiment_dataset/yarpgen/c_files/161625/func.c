/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161625
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [18U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [10LL]))) : (arr_4 [i_0]))))));
                arr_6 [i_0] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15211)) - (((/* implicit */int) (unsigned char)50))))) ? (((/* implicit */long long int) arr_2 [i_0] [19LL] [i_0])) : (9223372036854775801LL)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_11)) : (9223372036854775801LL)))) ? (((((/* implicit */_Bool) -9223372036854775801LL)) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_1)) ? (-9223372036854775801LL) : (((/* implicit */long long int) var_7)))))), (((9223372036854775801LL) & (((((/* implicit */_Bool) -9223372036854775804LL)) ? (9223372036854775791LL) : (9223372036854775801LL)))))));
}
