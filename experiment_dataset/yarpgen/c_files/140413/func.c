/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140413
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
    var_19 |= ((/* implicit */unsigned char) var_2);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_13)))) : (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)20257)), (((((/* implicit */_Bool) 3292563773U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 |= ((/* implicit */unsigned int) var_12);
                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [5U] [i_1] [i_0])) - (((/* implicit */int) arr_3 [1LL] [i_0]))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) / (((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) == (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))))));
            }
        } 
    } 
}
