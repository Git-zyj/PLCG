/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170828
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_10))))) / ((~(var_11))))))));
                var_18 += ((/* implicit */unsigned char) ((min((((/* implicit */int) var_16)), ((~(((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1])))))) != (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) >> (((arr_3 [i_0 - 1] [i_0]) - (8406450347684440968ULL)))))));
                arr_7 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (_Bool)0)), (2147483647))), (((((/* implicit */int) var_1)) % (((/* implicit */int) arr_4 [i_1 - 3] [i_0 + 1]))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_1 + 1] [i_0 - 1]), (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_3)));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((min((arr_3 [i_1 - 2] [i_0 - 1]), (arr_3 [i_1 - 3] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1])))) : (((/* implicit */int) var_16))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) || (var_7))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))))), (((((((/* implicit */_Bool) var_11)) || (var_1))) ? (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
}
