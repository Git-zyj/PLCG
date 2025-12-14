/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168218
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
    var_16 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [(unsigned char)0] [i_2] [i_2] |= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_14)), (arr_6 [i_0 + 3] [i_1 - 1] [i_2 - 2]))), (((/* implicit */unsigned int) ((short) var_9)))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_2 [i_1]))))) ? (max((((/* implicit */int) (unsigned char)76)), (var_14))) : (((/* implicit */int) (unsigned char)0))))));
                }
            } 
        } 
    } 
}
