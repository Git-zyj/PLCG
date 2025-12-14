/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14919
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2813037397354223143LL)) ? (1276373082) : (((/* implicit */int) (unsigned char)14))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((_Bool) ((((/* implicit */_Bool) ((5322851668684683219LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((540431955284459520LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) : (min((((/* implicit */long long int) var_3)), (var_5)))));
                    var_12 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (_Bool)1))));
    var_14 ^= var_6;
}
