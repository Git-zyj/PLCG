/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170540
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
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_2 + 1] [i_2 + 3])) ? (((/* implicit */int) arr_7 [i_0 + 3] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_0 + 2] [i_2] [i_2 + 3])))) % ((+(((/* implicit */int) arr_1 [i_0 + 3]))))));
                    arr_8 [i_0] [i_1] [i_1] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_4)))))) : ((~(((long long int) arr_2 [i_1]))))));
                    var_15 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned char) arr_7 [i_0 + 3] [i_1] [i_2 + 3])), (arr_6 [i_2]))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)246)) ? (884801593U) : (884801600U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
