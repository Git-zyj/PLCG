/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159325
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_2] &= ((/* implicit */signed char) ((unsigned char) (short)13359));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_9)))))) : (((((/* implicit */_Bool) 439212511U)) ? (4100874516067182091LL) : (((/* implicit */long long int) 188661182))))));
                    var_17 = ((/* implicit */unsigned short) (unsigned char)193);
                }
            } 
        } 
    } 
}
