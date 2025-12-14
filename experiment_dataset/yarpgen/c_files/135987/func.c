/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135987
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
    var_15 = ((/* implicit */unsigned int) var_2);
    var_16 += var_8;
    var_17 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) >> (((var_14) + (1844868653)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)10533), (((/* implicit */unsigned short) var_3)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) | (0U)))))), (-9223372036854775796LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0 - 1] [i_0 - 4] = ((/* implicit */_Bool) arr_7 [i_0] [i_1]);
                var_18 = ((/* implicit */_Bool) max((var_18), ((!(((_Bool) arr_7 [i_0] [i_0 + 1]))))));
                arr_9 [i_0] [2U] [(signed char)10] = ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) arr_1 [i_0 - 2])) : (911843759U))) ^ (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (266384039U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
            }
        } 
    } 
}
