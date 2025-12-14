/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142470
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)182))))));
                arr_4 [i_1] = ((/* implicit */_Bool) (~(((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)23)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_12);
    var_22 &= ((/* implicit */int) 910387888U);
}
