/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144247
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((0U) ^ (4294967284U)))), (var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])) : (arr_6 [i_2])))));
                    var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)75))))));
                }
            } 
        } 
    } 
}
