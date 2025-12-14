/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16350
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) var_11);
                var_18 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (min((((((/* implicit */_Bool) -2147483636)) ? (1735555661U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))))), (((/* implicit */unsigned int) -2147483628))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_3);
}
