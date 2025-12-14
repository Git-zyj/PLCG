/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157930
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)2))))))))));
                    var_11 = ((/* implicit */long long int) ((unsigned char) (signed char)-6));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
}
