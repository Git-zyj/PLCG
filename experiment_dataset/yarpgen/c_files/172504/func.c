/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172504
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_2 [i_2] [i_1] [i_2])) + (((/* implicit */int) var_6)))))), (((long long int) arr_1 [i_1]))));
                    var_13 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3274483752U))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-93)) & (((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) -3271432145638190743LL);
    var_15 = ((/* implicit */unsigned int) var_4);
}
