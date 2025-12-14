/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137887
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
    var_19 = ((short) var_0);
    var_20 = ((/* implicit */short) ((unsigned char) ((short) max((var_12), (((/* implicit */unsigned int) var_8))))));
    var_21 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (arr_3 [12]) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) arr_4 [i_0] [(signed char)2] [(signed char)2])))))))));
                var_23 += ((/* implicit */long long int) ((unsigned char) 3106944998302236731ULL));
            }
        } 
    } 
}
