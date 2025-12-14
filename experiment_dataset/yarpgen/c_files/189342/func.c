/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189342
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
    var_20 = ((/* implicit */unsigned long long int) (+(-2097691724)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */signed char) var_4);
                    var_21 ^= ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned int) var_6)), (max((4294967295U), (((/* implicit */unsigned int) (signed char)20)))))));
                    var_22 = ((/* implicit */short) 2097691714);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767))));
    var_24 = ((/* implicit */unsigned char) var_2);
}
