/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149021
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
    var_14 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_13)), (((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11610))) : (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) 106880730)) : (-598316530678159968LL)))))) ? (min((-106880725), (((/* implicit */int) (unsigned short)53925)))) : (((/* implicit */int) min((((/* implicit */signed char) var_13)), (arr_9 [i_0] [i_1] [i_2]))))));
                    arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24083)) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))))), ((-(((/* implicit */int) (unsigned short)53926)))))));
                    var_15 = ((/* implicit */signed char) (unsigned char)89);
                    arr_13 [i_0] [i_1] [i_0] = min((arr_1 [i_2]), (((2379928507U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53248))))));
                }
            } 
        } 
    } 
}
