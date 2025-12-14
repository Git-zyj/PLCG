/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116270
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)255))))));
                var_13 |= (~((-(min((var_3), (((/* implicit */unsigned long long int) arr_4 [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_1);
}
