/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106975
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
    var_20 = max((((/* implicit */unsigned long long int) var_4)), (var_10));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11498)) ? (((/* implicit */int) (unsigned short)11507)) : (((/* implicit */int) (unsigned short)54013))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)54032)) ? (((/* implicit */int) (unsigned short)6960)) : (((/* implicit */int) (_Bool)0)))) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-4268826332507164504LL))) - (2175LL)))))) : (arr_0 [i_0])));
                var_22 = ((/* implicit */unsigned short) (~((+(((arr_0 [i_1]) & (var_2)))))));
                var_23 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) ((arr_0 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7604595683501764982ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_18)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)));
    var_25 = ((/* implicit */long long int) var_15);
}
