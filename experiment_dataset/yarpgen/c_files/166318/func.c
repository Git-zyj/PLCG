/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166318
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
    var_14 = ((short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (((unsigned long long int) (short)-28652))));
    var_15 = ((/* implicit */signed char) ((int) (-(((/* implicit */int) ((unsigned short) (short)28674))))));
    var_16 = ((/* implicit */unsigned long long int) (short)-28630);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) (short)-28652);
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) != (((arr_0 [5U] [(_Bool)1]) + (((/* implicit */int) arr_1 [i_0]))))))) * (((/* implicit */int) (_Bool)0))));
                var_18 = ((/* implicit */long long int) ((_Bool) var_10));
            }
        } 
    } 
}
