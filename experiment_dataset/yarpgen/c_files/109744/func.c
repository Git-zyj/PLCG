/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109744
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 0)) != (-4080986640082198909LL))) ? (((((/* implicit */_Bool) 1)) ? (-7847529342692336451LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) arr_2 [i_1]))))))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (var_12)));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((/* implicit */int) (short)22688)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) 3885445028U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)8])) || (((/* implicit */_Bool) (short)-22702))))) : (((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_1 [(short)11])))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    var_17 = ((/* implicit */unsigned int) ((int) var_5));
}
