/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156342
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1656774972)) ? (-4717009747524761800LL) : (((/* implicit */long long int) 268435456))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((arr_0 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [i_2]), (var_1)))))));
                    var_15 = ((/* implicit */short) arr_1 [i_0]);
                    var_16 &= ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
    var_17 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 16394171532688568056ULL)))))))));
}
