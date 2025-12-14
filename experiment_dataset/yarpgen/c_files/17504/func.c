/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17504
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] [(unsigned short)11] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1])))));
                arr_6 [i_0] = arr_2 [(short)3];
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (1072759714U)));
}
