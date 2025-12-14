/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115868
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
    var_10 = (unsigned short)0;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) var_1);
                var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -2091600899)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36350))) : (((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */unsigned int) -84030814)) : (2790893437U)))))));
                var_13 = ((/* implicit */long long int) ((unsigned short) arr_1 [i_0 - 1]));
            }
        } 
    } 
}
