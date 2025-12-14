/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141252
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2])))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (min((arr_4 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0 - 1])))) : (arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) arr_2 [11U])) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))))))));
                var_18 = ((var_8) - (arr_1 [15ULL]));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6)))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (var_1))))))));
    var_20 = ((/* implicit */int) ((max((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
}
