/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156389
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))))) : (((/* implicit */int) ((signed char) var_14)))));
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (var_15)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0])))))) >= (((/* implicit */int) arr_1 [i_0])));
                var_20 = ((/* implicit */long long int) ((signed char) (short)0));
            }
        } 
    } 
}
