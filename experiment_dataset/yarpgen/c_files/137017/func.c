/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137017
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
    var_14 = ((/* implicit */int) var_8);
    var_15 &= ((/* implicit */unsigned int) var_0);
    var_16 = ((/* implicit */int) ((((_Bool) 3709561155443145469ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3709561155443145470ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!((!(((/* implicit */_Bool) 1994178198U)))))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_1 [i_1]))))))));
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_0] [i_0]) ? (min((14480040325214821062ULL), (((/* implicit */unsigned long long int) 1994178195U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)15] [i_0]))) * (arr_3 [i_1] [(short)8] [i_0]))))))) ? ((+(((/* implicit */int) var_12)))) : (-1242650838)));
            }
        } 
    } 
}
