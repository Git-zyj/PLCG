/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141208
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)209))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) var_8)))))));
                    arr_8 [4LL] [i_1] [i_1] [(unsigned char)7] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) var_3)) ^ (36028797018439680LL)))));
                    var_14 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((36028797018439680LL), (((/* implicit */long long int) var_0))))) & (max((var_9), (((/* implicit */unsigned long long int) 36028797018439680LL))))))) ? ((((-(((/* implicit */int) var_6)))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)0)))))) : ((~(var_2)))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_5))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) ? (((long long int) ((((/* implicit */int) var_10)) ^ (-2147483624)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)208)))) | (((/* implicit */int) var_10))))))))));
}
