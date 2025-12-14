/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160834
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (8387584U))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((_Bool) (short)32766))) : (((/* implicit */int) (short)-8971))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_7 [i_2] [i_0 + 1] [i_2 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : ((~(min((4286579704U), (((/* implicit */unsigned int) (signed char)-64))))))));
                    var_19 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))) : (((arr_2 [i_2 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((~(-3468568993863597495LL)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)8957))) + (var_2))))));
}
