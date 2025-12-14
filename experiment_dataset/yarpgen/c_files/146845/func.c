/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146845
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_11 = ((/* implicit */unsigned long long int) ((signed char) ((arr_4 [i_2 + 1] [i_2] [i_2 + 1]) == (((/* implicit */unsigned long long int) min((2191275708U), (((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_0] [i_0]))))))));
                    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_4)) - (50528)))))) + (var_9))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1] [(short)11])))))));
                    var_13 = ((/* implicit */int) (+(((10233461424361522861ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 2] [i_2] [i_2] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (24ULL))))));
    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
    var_16 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_4));
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)-27438)))) ? (((/* implicit */unsigned int) (~(-2084066948)))) : (min((((/* implicit */unsigned int) var_7)), (1476656249U)))))));
}
