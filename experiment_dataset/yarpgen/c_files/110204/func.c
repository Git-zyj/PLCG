/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110204
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 3])))) << (((((unsigned int) 8388607U)) - (8388597U)))));
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [12LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)15] [i_1]))) : (-9LL)))) ? (((/* implicit */unsigned long long int) 8388610U)) : (((unsigned long long int) 4286578663U)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) 4286578674U))));
}
