/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166932
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
    var_19 += ((/* implicit */signed char) var_8);
    var_20 = ((/* implicit */_Bool) var_5);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((var_9) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)7)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 1]);
                    arr_6 [i_0] [(short)8] = ((/* implicit */unsigned int) max((((((/* implicit */int) (short)-32)) * (((/* implicit */int) arr_0 [i_0 - 1])))), (((((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (short)35)))) / (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2] [i_0 + 2]))))));
                }
            } 
        } 
    } 
}
