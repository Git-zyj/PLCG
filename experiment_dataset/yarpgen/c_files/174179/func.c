/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174179
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
    var_17 = ((/* implicit */unsigned char) max((var_8), (-3LL)));
    var_18 = ((/* implicit */unsigned short) ((var_10) & (max((1225374847097635573ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) : ((+(arr_0 [i_0])))));
                var_20 &= ((/* implicit */short) ((0) << (((((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21481))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))) - (15664964012899401622ULL)))));
            }
        } 
    } 
}
