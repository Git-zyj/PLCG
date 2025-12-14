/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103564
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */short) min(((signed char)47), ((signed char)-48)));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) min((var_3), (((/* implicit */short) arr_2 [i_0]))))) ? (((unsigned int) arr_4 [i_0] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (((((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (signed char)-48)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) ^ (1321872048U))) : (var_14)))));
    var_18 = var_11;
}
