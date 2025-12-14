/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101349
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */int) arr_0 [i_0] [i_1]);
                var_11 = ((max((((/* implicit */unsigned int) arr_2 [i_1])), ((~(var_7))))) >> (((max((((/* implicit */unsigned long long int) -5497860182845474379LL)), (9719069113459873122ULL))) - (12948883890864077219ULL))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (~(var_2))));
                var_12 = max((((/* implicit */int) var_3)), ((~(((/* implicit */int) ((short) arr_1 [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (~(max(((-(var_6))), (var_6)))));
    var_14 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) (signed char)-51)), (3594792467U)))));
    var_15 = (signed char)-64;
    var_16 = max((max((9719069113459873122ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_1)), (var_0)))))), (((/* implicit */unsigned long long int) var_3)));
}
