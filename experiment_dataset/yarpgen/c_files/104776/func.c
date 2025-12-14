/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104776
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_1] [i_2] = ((unsigned char) ((((/* implicit */int) (unsigned char)127)) + (((/* implicit */int) (unsigned char)220))));
                    var_11 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)119)) & (((/* implicit */int) (unsigned char)169)))) ^ (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)138)))))) >= (((/* implicit */int) ((unsigned char) max((var_2), (arr_1 [i_1])))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)217))));
                    arr_10 [i_1] = var_5;
                    arr_11 [i_2] [i_1] [i_0] = arr_2 [i_0];
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) (unsigned char)30)) - (((/* implicit */int) (unsigned char)139)))) != (((/* implicit */int) var_7))))) << (((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_7)))))) - (150)))));
    var_13 = var_1;
}
