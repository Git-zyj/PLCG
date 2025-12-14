/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184454
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_1 [i_0]);
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_7), (((/* implicit */long long int) (_Bool)1)))) - (arr_3 [i_0] [i_0] [i_0])))) ? (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(8384512LL)))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) var_6);
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) -664761959222599948LL))));
}
