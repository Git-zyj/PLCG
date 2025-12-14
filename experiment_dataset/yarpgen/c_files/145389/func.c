/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145389
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                var_19 = ((/* implicit */long long int) (_Bool)1);
                var_20 = ((/* implicit */short) var_0);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) var_15))))) ? (arr_5 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */long long int) arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) (unsigned short)27);
    var_24 = ((/* implicit */short) var_8);
    var_25 = ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)92)));
    var_26 = ((/* implicit */short) (unsigned short)50178);
}
