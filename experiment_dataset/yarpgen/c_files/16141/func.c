/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16141
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_2)), (var_8)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) / (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(unsigned char)16])) != (((/* implicit */int) (signed char)-6))))))) : (((((/* implicit */int) (unsigned short)7695)) >> (((((((-7783294763592997164LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)96)) - (67))))) - (2682352937LL)))))));
                var_13 = max((((/* implicit */unsigned int) max((arr_2 [i_1 - 1] [i_1 + 1]), (((/* implicit */int) (short)32767))))), ((~(((((/* implicit */_Bool) -7347979329264513744LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [0]))) : (1723320487U))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) var_12)), ((-2147483647 - 1)))) : (((((/* implicit */_Bool) 7347979329264513739LL)) ? (var_5) : (-1)))))), (var_4)));
}
