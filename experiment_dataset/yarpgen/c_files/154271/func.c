/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154271
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
    var_14 |= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_13))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) var_2);
                var_15 = ((/* implicit */unsigned char) arr_4 [i_0]);
                arr_8 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (1761324359U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
}
