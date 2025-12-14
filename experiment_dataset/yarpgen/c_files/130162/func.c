/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130162
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 |= ((/* implicit */unsigned short) arr_0 [i_0]);
                var_17 = ((/* implicit */unsigned int) var_12);
                var_18 = ((/* implicit */short) var_8);
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((((/* implicit */_Bool) 12348210957332780921ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) var_1)))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)111)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */int) (signed char)68)), (1454164142))), (var_14))))));
                arr_6 [i_0 - 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (var_5))), (((/* implicit */int) var_4))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (signed char)68))));
    var_20 *= ((/* implicit */short) 1951921108);
}
