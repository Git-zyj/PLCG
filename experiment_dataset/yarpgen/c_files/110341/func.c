/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110341
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
    var_19 *= ((/* implicit */signed char) ((-1962940162532999844LL) <= (var_13)));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */long long int) -1111805930)) : (var_13))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] &= ((/* implicit */_Bool) 484657427U);
                arr_7 [i_0] [i_1] [i_0] = (unsigned short)925;
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)925)) || (((/* implicit */_Bool) (unsigned short)64611))))) * (((((/* implicit */_Bool) (signed char)-62)) ? (((((/* implicit */int) (unsigned short)908)) >> (((3953954190U) - (3953954177U))))) : (((((/* implicit */int) (unsigned short)924)) % (((/* implicit */int) (unsigned short)64611)))))))))));
                arr_8 [i_0] &= ((/* implicit */long long int) 1188973426);
            }
        } 
    } 
}
