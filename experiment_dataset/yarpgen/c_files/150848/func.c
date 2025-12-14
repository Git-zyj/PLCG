/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150848
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
    var_16 = var_11;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((2200192071U) & (((/* implicit */unsigned int) 0)))), (((/* implicit */unsigned int) arr_5 [i_1 - 3] [i_1 + 1] [i_1 - 3]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 4]))))) : (((max((((/* implicit */long long int) var_12)), (arr_2 [i_2] [i_1] [i_0]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) var_2)))))))));
                    var_18 = ((/* implicit */unsigned long long int) var_8);
                    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_15) == (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_3 [i_0]))))))))));
                }
            } 
        } 
    } 
}
