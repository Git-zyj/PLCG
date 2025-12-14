/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157252
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-86))));
                    var_15 ^= ((/* implicit */short) var_11);
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_6) + (1954682866))))))));
                }
            } 
        } 
    } 
}
