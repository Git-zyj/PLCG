/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117717
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
    var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_18))))), ((+(((/* implicit */int) var_0))))))) : (var_13)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))) : ((~(((/* implicit */int) var_4))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(arr_3 [i_1]))), (((/* implicit */long long int) min((((/* implicit */int) var_16)), (var_2))))))) ? ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_13))))) : (max((min((var_13), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_0)))))))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)163))));
                var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_12))))));
                var_24 &= var_1;
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) var_0)), (var_13))) : (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ ((-(var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
}
