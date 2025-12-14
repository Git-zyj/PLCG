/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159683
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)18266)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85)))))), ((-(((/* implicit */int) arr_2 [i_0])))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_1))));
                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1]))));
                var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)47269)) ? (max((((/* implicit */long long int) (unsigned short)18269)), (var_9))) : (((/* implicit */long long int) (((-2147483647 - 1)) ^ (((/* implicit */int) (unsigned short)47266)))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */long long int) (signed char)112);
}
