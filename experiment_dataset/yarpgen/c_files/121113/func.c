/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121113
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
    var_19 = ((/* implicit */unsigned short) var_11);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 17181325478414012484ULL))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((17181325478414012463ULL), (((/* implicit */unsigned long long int) -1576493451))));
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2])), (arr_0 [i_0] [i_0]))))) * (arr_3 [i_1] [i_2])));
                }
            } 
        } 
    } 
}
