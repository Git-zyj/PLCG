/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116682
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
    var_12 = ((/* implicit */signed char) var_4);
    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((var_11) < (var_3)))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)25)) ? (((arr_2 [i_0]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-6)))))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_5)));
                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                var_16 = min(((((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) var_11))) - (16402))))), (((((((/* implicit */int) var_4)) << (((1427619691U) - (1427619680U))))) << (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_1 [i_1])))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_8))));
            }
        } 
    } 
}
