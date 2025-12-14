/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126477
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)202)), (var_8)))) ? (((/* implicit */long long int) var_17)) : (max((-2508611209009759400LL), (((/* implicit */long long int) 2147483647))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_13)) ? (-2508611209009759400LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-31))))) : (-2508611209009759400LL))) : (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) < (arr_3 [i_1] [i_0]))))) ^ ((-(arr_3 [i_0] [i_0])))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)126)), (arr_0 [i_0])))) / ((-(2508611209009759400LL))))))))));
            }
        } 
    } 
}
