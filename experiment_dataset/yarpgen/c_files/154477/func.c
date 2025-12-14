/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154477
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
    var_13 = (!(((/* implicit */_Bool) (+(((((var_9) + (2147483647))) >> (((((/* implicit */int) (short)32767)) - (32763)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) ((((/* implicit */_Bool) max(((short)-32762), ((short)-32758)))) || (((/* implicit */_Bool) var_9))))) & (((/* implicit */int) ((short) (+(((/* implicit */int) var_12))))))))));
                var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((var_8), (((/* implicit */short) var_3))))) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))) : (((/* implicit */long long int) ((((unsigned int) arr_4 [i_1] [i_1])) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))))));
            }
        } 
    } 
}
