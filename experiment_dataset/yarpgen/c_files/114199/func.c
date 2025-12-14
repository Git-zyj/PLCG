/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114199
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 4294967292U)) : (5286997790642984504LL))), (((/* implicit */long long int) ((int) var_2))))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) | ((~(arr_0 [i_1] [i_0]))))))));
                arr_5 [i_0] = ((/* implicit */long long int) max((4294967292U), (((/* implicit */unsigned int) ((signed char) arr_1 [i_0 - 3])))));
            }
        } 
    } 
    var_11 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((var_1) - (811190371U)))))) | (2804310958U)));
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_3)))))))));
}
