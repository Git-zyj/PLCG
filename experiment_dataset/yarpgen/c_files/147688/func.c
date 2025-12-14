/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147688
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((min((((/* implicit */unsigned int) min((var_7), (var_9)))), (((unsigned int) var_7)))) != (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (((int) var_9)) : (var_7)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) << (((((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 1])) - (22535)))))) > (((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_5 [i_0] [i_0])))));
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (min((((arr_0 [i_1 + 1] [i_1 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1]))))), ((-(arr_0 [i_1 + 1] [i_1])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */long long int) var_9)) != (var_2)))) : (min((var_7), (var_4)))))) ? (min((((/* implicit */unsigned long long int) var_1)), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) var_8))))) ? ((+(var_4))) : (var_0)))))))));
    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_10)) - (33502))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_5) >= (var_6))))))) : (((var_6) % (var_6)))));
    var_15 = ((/* implicit */unsigned char) ((unsigned short) max((var_5), (min((((/* implicit */unsigned long long int) var_7)), (var_5))))));
}
