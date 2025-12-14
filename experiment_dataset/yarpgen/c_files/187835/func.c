/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187835
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
    var_10 ^= ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) arr_2 [(unsigned char)4] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 3] [i_0 + 2])) ? (arr_2 [i_0 - 2] [i_0 - 1]) : (arr_7 [i_0 - 2] [i_0 + 3] [i_0 + 2]))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)182)))))));
                }
            } 
        } 
    } 
}
