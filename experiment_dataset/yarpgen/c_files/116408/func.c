/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116408
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [(_Bool)0] [i_0] |= min((arr_9 [i_1] [i_1]), (((((/* implicit */_Bool) var_7)) ? (arr_9 [i_0] [i_2]) : (arr_9 [i_0] [i_1]))));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_8))));
                    var_13 -= ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 971675364U))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) var_2))));
    var_15 = ((/* implicit */signed char) var_8);
}
