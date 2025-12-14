/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119624
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) (short)13094)), (-1058221943854938400LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned short)49152))))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) arr_4 [(short)6] [(_Bool)1]))));
            }
        } 
    } 
    var_13 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_11))));
}
