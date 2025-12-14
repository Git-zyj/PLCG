/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103258
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
    var_16 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-4419)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) == (var_6))))))), ((+(18446744073709551612ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) arr_0 [i_0]);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_1);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8)))))));
}
