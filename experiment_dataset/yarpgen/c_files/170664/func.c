/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170664
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
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */short) (signed char)112);
                var_15 = ((/* implicit */unsigned long long int) (unsigned char)31);
                arr_6 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-98))))), (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0 - 2] [i_1]))) ? (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) 45191150U)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */signed char) var_7);
}
