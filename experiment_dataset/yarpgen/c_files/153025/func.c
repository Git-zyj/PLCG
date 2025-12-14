/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153025
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
    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (short)28269)) << (((/* implicit */int) ((var_14) && (((/* implicit */_Bool) var_15)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (signed char)114);
                    arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(short)2] [(signed char)14] [(short)2]))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [i_1 - 2] [i_1 + 3] [i_1 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned char) ((((_Bool) var_2)) ? ((+((+(((/* implicit */int) var_17)))))) : (((/* implicit */int) min((((/* implicit */short) var_13)), (var_16))))));
}
