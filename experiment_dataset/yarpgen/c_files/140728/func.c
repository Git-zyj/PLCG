/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140728
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
    var_10 ^= ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (+(arr_9 [i_0] [i_0] [5] [i_2])));
                    arr_10 [i_2] = ((/* implicit */unsigned int) (~(arr_2 [i_0])));
                }
            } 
        } 
    } 
    var_12 = (+(((/* implicit */int) var_3)));
    var_13 = ((min((((((/* implicit */_Bool) (short)-10131)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))), (((/* implicit */unsigned int) var_8)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
}
