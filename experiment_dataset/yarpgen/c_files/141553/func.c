/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141553
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)52837))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 2])) <= (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) max((arr_1 [i_0]), ((_Bool)0))))));
                    arr_11 [i_1] = ((/* implicit */unsigned short) min((((arr_5 [i_2 + 1] [i_1]) & (arr_5 [i_2 - 1] [i_1]))), (((arr_5 [i_2 + 1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (-(var_4)));
}
