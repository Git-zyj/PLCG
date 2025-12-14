/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131696
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 2]))) ? (arr_4 [i_0 - 1] [i_2 + 2]) : (((/* implicit */int) arr_6 [i_0 + 1])))) % (((/* implicit */int) arr_6 [i_1]))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3] [i_0])) != (((/* implicit */int) var_6)))))) | (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_7) : (((/* implicit */unsigned int) arr_4 [i_0 - 2] [i_0 - 2])))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) && (((/* implicit */_Bool) (unsigned short)48088))))), (var_3)));
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((var_2), (((/* implicit */signed char) var_10))))) ^ (((/* implicit */int) var_9)))) & (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) >> (((/* implicit */int) var_10))))));
}
