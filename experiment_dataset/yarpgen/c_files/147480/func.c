/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147480
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
    var_20 = ((/* implicit */long long int) max((((/* implicit */int) var_12)), (var_2)));
    var_21 -= ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2111798693815930426LL)) ? (-321648149) : (((/* implicit */int) (signed char)36))));
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned char) ((_Bool) arr_4 [i_1] [i_0])))))) && (((/* implicit */_Bool) ((unsigned short) ((var_15) ? (((/* implicit */int) arr_3 [i_0])) : (var_18)))))));
            }
        } 
    } 
}
