/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13424
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
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))))), ((signed char)106)))) << ((-(0)))));
    var_18 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] [(unsigned short)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (12397118147290429215ULL)))) ? (((/* implicit */int) arr_6 [i_0])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) (signed char)119)), ((-(0)))))));
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)77)) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [0U] [i_1])) ? (((/* implicit */int) (short)-255)) : (((/* implicit */int) arr_4 [i_1] [(signed char)3] [i_0]))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0])))))))))));
            }
        } 
    } 
}
