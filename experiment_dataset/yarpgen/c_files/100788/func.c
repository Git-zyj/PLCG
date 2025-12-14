/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100788
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + ((+(((/* implicit */int) var_3))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) min((var_10), (arr_4 [0LL] [i_0 + 4] [i_0])))) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_3 [i_0] [i_0 + 4]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)50)) : (var_11))))))));
            }
        } 
    } 
    var_21 = 253764123;
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))));
}
