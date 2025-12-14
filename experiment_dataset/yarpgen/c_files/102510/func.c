/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102510
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
    var_20 = ((unsigned long long int) (+(((/* implicit */int) (!(var_18))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) var_10);
                var_22 += ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_13)))));
                arr_6 [i_1] = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
}
