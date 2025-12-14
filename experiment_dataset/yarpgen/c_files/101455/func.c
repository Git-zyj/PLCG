/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101455
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (((-(max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18014398509480960ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1 - 3])) >> (((((((/* implicit */_Bool) (short)-10410)) ? (var_14) : (((/* implicit */int) var_1)))) + (982297675))))))));
                    var_16 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)255)), (11221577649185683297ULL)));
                }
            } 
        } 
    } 
    var_17 |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!((_Bool)1)))) : ((+(((/* implicit */int) var_15)))))) - (((/* implicit */int) var_1)));
}
