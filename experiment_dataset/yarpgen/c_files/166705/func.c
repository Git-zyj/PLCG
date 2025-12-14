/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166705
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57974))) > (var_12)))))) <= (3436772402U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1])))) ? ((~(arr_5 [i_1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_13))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) arr_3 [i_0])) : (3436772388U))))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1]))))))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((short) (short)20932)))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((max((arr_3 [i_0]), (arr_3 [i_0 - 1]))), (((((/* implicit */int) (unsigned char)37)) ^ (((/* implicit */int) (signed char)111)))))))));
                var_17 = (unsigned char)41;
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0] [i_0 + 1])), (-4082586348000276043LL)))) ? (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0 - 3])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (3436772415U) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
