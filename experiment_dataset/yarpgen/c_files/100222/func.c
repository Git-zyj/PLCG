/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100222
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned short)3584)))), ((-(2097151)))));
                arr_6 [i_0 - 2] [12LL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)126))))) ? (max((arr_4 [i_0 - 1]), (arr_4 [i_0 - 1]))) : (min((arr_4 [i_0 - 2]), (arr_4 [i_0 + 1])))));
            }
        } 
    } 
    var_15 = ((min((1984368712488484262ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (short)-31798))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)115), (((/* implicit */unsigned char) (signed char)7))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_9)))) : (((/* implicit */int) (unsigned char)48))))));
}
