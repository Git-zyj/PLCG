/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154926
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3839293069U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_11))) : (4227858432U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [6U]))));
                arr_6 [(short)0] [i_1] [i_0] |= ((/* implicit */int) arr_1 [i_0]);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_2 [i_0 + 1]))));
                var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_0 + 1]) > (arr_5 [i_0] [(short)0] [i_0 + 1])))) : (arr_0 [i_0])));
                arr_8 [i_0 - 1] = ((/* implicit */unsigned long long int) 67108863U);
            }
        } 
    } 
}
