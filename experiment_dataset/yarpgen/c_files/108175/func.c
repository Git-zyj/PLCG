/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108175
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [1ULL] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)228)) <= (703785193))))));
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) var_3);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_1 [13ULL]), (((/* implicit */unsigned long long int) ((var_8) >> (((((/* implicit */int) arr_0 [i_1] [i_0])) - (217))))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((846607191U) >> (((((/* implicit */int) var_2)) - (92))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)213)))))))) ? (var_8) : (var_3)));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_11))));
}
