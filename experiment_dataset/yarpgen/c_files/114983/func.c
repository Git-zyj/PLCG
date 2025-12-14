/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114983
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
    var_13 = var_4;
    var_14 = ((_Bool) min((var_12), (((/* implicit */signed char) ((1189792576331507692LL) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4248569413U)) ? (((/* implicit */int) ((arr_0 [i_1]) > (((/* implicit */unsigned long long int) 4248569413U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [14LL] [i_1]))))))))));
                var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15311002343368008354ULL)) ? (var_10) : (var_3)))), (min((14619158589682157359ULL), (((/* implicit */unsigned long long int) 4294967289U))))))) ? (min((min((((/* implicit */unsigned long long int) 46397868U)), (var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) 46397883U);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))))));
}
