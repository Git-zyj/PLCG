/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182077
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [7LL] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]))))), (arr_0 [i_0]))));
                arr_8 [8LL] = ((/* implicit */_Bool) ((unsigned short) ((signed char) max((((/* implicit */long long int) var_9)), (var_3)))));
                arr_9 [i_0] [1U] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_11 = var_4;
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) (unsigned short)4092))));
}
