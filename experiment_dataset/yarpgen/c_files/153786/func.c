/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153786
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
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((min(((_Bool)0), ((_Bool)0))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) -2927749548136662925LL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))));
                arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (2927749548136662955LL)))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */long long int) 2147483621)) : (2927749548136662926LL)));
                var_21 = ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [(signed char)15])), (arr_2 [i_1])))), (max((((/* implicit */int) var_10)), (var_17)))));
                var_22 *= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_18))))), (((/* implicit */unsigned long long int) ((var_4) ? (2147483647) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (var_5)))) ? (((((/* implicit */_Bool) var_16)) ? (var_11) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) var_13)) : (var_15)));
    var_24 = ((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_4))));
}
