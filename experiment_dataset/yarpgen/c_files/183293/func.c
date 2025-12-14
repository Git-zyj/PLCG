/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183293
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(unsigned char)9] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_3))));
    var_12 = ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)33))))), (var_4))))) - (((min((((/* implicit */long long int) var_4)), (489675983603600504LL))) & (((/* implicit */long long int) ((/* implicit */int) var_0))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_10)))) - ((+(((/* implicit */int) var_0))))))) ? (((((/* implicit */int) var_0)) << (((((unsigned int) var_7)) - (558479308U))))) : (((/* implicit */int) ((_Bool) var_2)))));
}
