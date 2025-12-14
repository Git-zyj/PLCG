/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138452
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), (min((arr_0 [(unsigned char)8] [i_1]), (((/* implicit */unsigned char) var_9))))));
                var_18 = ((/* implicit */unsigned char) ((638134059U) * (3656833257U)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) 3656833224U))));
    var_20 = var_12;
    var_21 = ((/* implicit */unsigned long long int) var_2);
}
