/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154566
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max(((+(max((8573179015073687327LL), (((/* implicit */long long int) arr_1 [i_0] [i_1 - 1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3519013665U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1207278715U))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (min((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 1])), (arr_4 [i_0] [i_0] [i_0]))), (((arr_1 [i_0] [10LL]) ? (arr_4 [i_1 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_13);
}
