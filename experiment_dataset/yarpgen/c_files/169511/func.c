/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169511
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
    var_18 = ((/* implicit */unsigned int) ((min((min((((/* implicit */long long int) (signed char)127)), (-9223372036854775801LL))), (((/* implicit */long long int) var_14)))) - (((/* implicit */long long int) (-2147483647 - 1)))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [13ULL])))), (arr_3 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -2892106476683370483LL)))) : (((((/* implicit */_Bool) var_15)) ? (2892106476683370467LL) : (((/* implicit */long long int) arr_3 [i_0]))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 2426868348440233553LL)) ? (max((9223372036854775801LL), (((/* implicit */long long int) var_12)))) : ((-(max((((/* implicit */long long int) (signed char)127)), (2426868348440233553LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_6))));
}
