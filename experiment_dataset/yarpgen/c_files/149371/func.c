/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149371
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
    var_16 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 128034183)))))) > (((((/* implicit */_Bool) (short)-20533)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [i_0] [i_1]))))));
                var_18 |= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((unsigned int) (unsigned short)1))) + (var_12)))));
                arr_4 [i_0] = ((/* implicit */signed char) ((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (((_Bool)0) ? (arr_2 [i_1] [(unsigned char)7]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) ((long long int) 860199818));
}
