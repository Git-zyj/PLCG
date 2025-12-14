/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18093
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2765142690846489538LL)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)197)) : (1668584463))))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */short) (_Bool)1);
                var_17 &= ((/* implicit */unsigned long long int) (unsigned short)55279);
            }
        } 
    } 
}
