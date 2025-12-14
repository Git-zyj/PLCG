/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11557
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) min(((-(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_8)) ? (-690834988) : (((/* implicit */int) var_9)))))))));
    var_15 &= ((/* implicit */signed char) var_6);
    var_16 = ((/* implicit */signed char) -1516473455);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) ((int) max((var_10), (arr_1 [(signed char)6] [i_1 - 2]))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((short) (short)8192)), (((/* implicit */short) ((_Bool) (signed char)2)))))) & (((/* implicit */int) arr_4 [i_0]))));
            }
        } 
    } 
}
