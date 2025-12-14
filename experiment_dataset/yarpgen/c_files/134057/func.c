/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134057
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 3]);
                var_14 = var_11;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (var_6)))) ? (var_7) : (max((((/* implicit */long long int) var_3)), (var_7)))))) ? (((/* implicit */int) ((unsigned char) var_3))) : ((+(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_9)))))))));
}
