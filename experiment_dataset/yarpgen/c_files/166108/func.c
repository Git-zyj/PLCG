/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166108
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
    var_13 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) 7175826979919915224LL)) ? (((/* implicit */int) (unsigned char)213)) : ((+(134217727)))))));
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((((_Bool)1) ? (-7175826979919915245LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23332))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) : (arr_5 [i_0] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))))))) : (((((/* implicit */_Bool) min((1U), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_10))))));
                var_15 += ((/* implicit */short) (unsigned char)201);
            }
        } 
    } 
}
