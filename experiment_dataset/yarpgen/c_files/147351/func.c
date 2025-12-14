/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147351
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
    var_15 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) ((int) (unsigned char)216));
                arr_8 [i_0] = ((/* implicit */long long int) ((int) (-(3U))));
                arr_9 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31251)) * (((/* implicit */int) (short)9731))))) : (arr_1 [i_0] [i_0])))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((((/* implicit */int) (signed char)(-127 - 1))) | (738650889))), (((/* implicit */int) ((_Bool) 317964137U))))))));
            }
        } 
    } 
}
