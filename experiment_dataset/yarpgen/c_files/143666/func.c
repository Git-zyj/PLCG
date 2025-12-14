/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143666
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] [i_0 + 3] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                arr_5 [7] [i_0] |= ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_2);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (var_2) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))) | (((/* implicit */long long int) ((var_3) - (var_3))))))));
    var_14 = ((/* implicit */unsigned char) var_11);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((((~(((/* implicit */int) var_11)))) >> (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) ((var_7) / (var_2)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_9))))))));
}
