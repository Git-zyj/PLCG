/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178188
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 2] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (arr_2 [i_0] [i_1] [10U]))), (((/* implicit */unsigned long long int) -2987711752116644650LL))));
                var_11 = ((/* implicit */unsigned long long int) max(((short)26301), ((short)-26301)));
            }
        } 
    } 
    var_12 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) var_7))), (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26301)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) min((12U), (var_6)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)26294)) - (((/* implicit */int) var_8))))))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_2))));
    var_14 += ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_3))))))) <= (((/* implicit */int) var_3)));
    var_15 -= ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_2)), (var_10))));
}
