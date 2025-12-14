/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137708
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (~((~(var_1))))))));
                var_12 = ((/* implicit */_Bool) min((min((((((/* implicit */int) arr_0 [(_Bool)1])) * (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) arr_0 [i_1 + 1])))), (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [(unsigned short)2])) : (((/* implicit */int) arr_2 [i_0])))) : ((-(arr_6 [(unsigned short)9] [i_1 + 1])))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1]))))) ? ((-(1947143472U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) arr_0 [i_0])), (1098084515U))))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (signed char)127))))));
    var_15 ^= ((/* implicit */unsigned int) ((max((min((((/* implicit */unsigned long long int) var_10)), (var_0))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_5))))))) - ((+((-(var_0)))))));
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)124)))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_8)))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-126)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))));
}
