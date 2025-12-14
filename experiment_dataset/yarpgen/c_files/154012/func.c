/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154012
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
    var_20 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [2LL] [i_0] [2LL] &= ((/* implicit */unsigned short) min((((arr_4 [i_0] [i_1] [i_1]) / (arr_4 [i_0] [i_0] [3ULL]))), (min((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_19))))));
                var_21 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (min((var_13), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [(signed char)4] [i_0]) < (((/* implicit */long long int) arr_0 [4U] [i_1]))))))))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)2] [4] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (arr_4 [i_0] [i_0] [i_0])))));
                var_22 &= (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))));
            }
        } 
    } 
}
