/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152858
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
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (-(var_3)))) : (max((var_12), (((/* implicit */long long int) var_2)))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((-7134697384304497766LL) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_21 = ((/* implicit */_Bool) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((signed char) min((-7134697384304497756LL), (((/* implicit */long long int) var_2))))));
                    arr_8 [i_0] [i_1 + 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (arr_3 [i_0 + 1] [i_0 + 1])))) || (((/* implicit */_Bool) (~(arr_3 [i_0 + 2] [i_0 + 2]))))));
                    arr_9 [i_1 + 2] [(short)8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(-7134697384304497784LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 - 3] [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (var_1)))))) / (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(short)4] [(short)4]))) : (((-7134697384304497766LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
