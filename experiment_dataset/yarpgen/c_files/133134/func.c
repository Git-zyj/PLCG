/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133134
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
    var_12 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 0LL))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) max((((short) (signed char)(-127 - 1))), (((/* implicit */short) var_0)))))) & ((~((-(var_2))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 2956242515U)) || (((/* implicit */_Bool) 2956242515U))))))) - ((~((~(4680130550905553716ULL)))))));
                    arr_9 [13LL] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                    arr_10 [i_2] [i_2] [i_1] [i_0 + 2] = -2LL;
                }
            } 
        } 
    } 
}
