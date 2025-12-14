/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100074
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
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_16 = (-(((/* implicit */int) var_13)));
                    arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] = ((/* implicit */int) ((short) 3067233703U));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (unsigned char)15)) ? (-1LL) : (((/* implicit */long long int) 2229548468U)))), (((/* implicit */long long int) min((var_14), (var_11)))))), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                    var_17 = arr_4 [i_0 + 3];
                }
            } 
        } 
    } 
}
