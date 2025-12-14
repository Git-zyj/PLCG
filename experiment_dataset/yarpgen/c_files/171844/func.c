/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171844
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
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 &= ((/* implicit */short) var_3);
    var_17 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] [i_1] [i_2] &= ((/* implicit */unsigned char) var_11);
                    arr_8 [i_0 - 1] [16U] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) min((var_8), (((/* implicit */short) var_14))))), ((+(((/* implicit */int) (signed char)70))))));
                    var_18 ^= ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_13)), (var_10)));
}
