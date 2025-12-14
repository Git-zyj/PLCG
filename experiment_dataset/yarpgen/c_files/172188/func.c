/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172188
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_15))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])))) == (((/* implicit */int) max((arr_5 [i_0 - 1] [i_0]), ((unsigned char)104)))))))));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 983114977154456190LL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0 - 1] [i_1]))))) : (((max((((/* implicit */unsigned long long int) var_2)), (var_1))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */signed char) var_8);
}
