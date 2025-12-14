/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101943
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
    var_20 += ((((/* implicit */_Bool) var_17)) ? (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))))) : (((/* implicit */unsigned long long int) (~(var_7)))));
    var_21 -= ((/* implicit */int) 2893397464398955166LL);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_1)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) (+(-2344609347338509780LL))));
                    var_23 -= ((/* implicit */unsigned int) (((~(arr_2 [i_0] [i_1 - 1]))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)189))))))));
                    var_24 &= ((/* implicit */short) var_7);
                    var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (1071644672U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2344609347338509759LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)224))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (3223322645U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [(unsigned short)0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [(signed char)2] [4] [(signed char)2] [i_1])))))) : (((/* implicit */int) arr_4 [i_2])));
                    var_26 -= ((/* implicit */int) -1LL);
                }
            } 
        } 
    } 
}
