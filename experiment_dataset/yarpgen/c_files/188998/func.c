/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188998
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((16777215) / (((/* implicit */int) (unsigned char)248))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) (~(((16777225) - (((/* implicit */int) var_2)))))))));
}
