/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137417
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = var_12;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)94)) ? (((unsigned int) (unsigned short)30163)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30169))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-6032)))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned int) (_Bool)1);
}
