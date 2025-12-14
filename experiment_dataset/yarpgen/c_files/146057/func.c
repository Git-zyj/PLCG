/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146057
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
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)113)) >> (((((/* implicit */int) (signed char)93)) - (81)))));
    var_21 |= ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_18))))) <= (((/* implicit */int) max(((short)-32755), ((short)-32748)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [(short)12] = ((_Bool) (+(3793044052U)));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_9))));
            }
        } 
    } 
    var_23 &= ((/* implicit */_Bool) (short)12155);
    var_24 = ((/* implicit */signed char) var_14);
}
