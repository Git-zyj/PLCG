/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110338
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
    var_11 = ((/* implicit */_Bool) var_4);
    var_12 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_2 + 2])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) : ((~(-2886947866411406503LL)))))));
                    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) (signed char)-1))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                    arr_8 [i_0 - 1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))) ? (max((((/* implicit */long long int) arr_6 [i_0] [i_0 + 4] [(signed char)7] [i_0])), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (arr_0 [i_0]))))))) ? (1504399510) : (((/* implicit */int) (signed char)2))));
                    arr_9 [i_2] [i_1 + 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) ((4294967295U) < (((/* implicit */unsigned int) var_1))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-22))));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_4)));
}
