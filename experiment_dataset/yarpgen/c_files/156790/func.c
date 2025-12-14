/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156790
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
    var_18 &= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_12)) >> (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_12)) & (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) var_8)) ? (633221004U) : (4294967295U))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */short) arr_4 [i_0] [i_0] [(short)14]);
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(short)2])) ? (arr_4 [(_Bool)1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) + ((-(arr_4 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_8);
}
