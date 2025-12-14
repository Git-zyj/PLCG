/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164772
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)244)) - (236)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((_Bool) min((arr_5 [i_2] [i_1]), ((+(8388607LL)))));
                    arr_9 [i_0] [i_1] [i_0] [(unsigned char)18] = ((/* implicit */unsigned short) ((_Bool) ((signed char) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_1 [18ULL]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((signed char) ((((((/* implicit */int) (signed char)-102)) > (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) -15)) ? (((/* implicit */unsigned long long int) 2031110349)) : (7079660936356982443ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
