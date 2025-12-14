/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101646
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_5))));
    var_11 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1]);
                var_12 = ((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_1]));
            }
        } 
    } 
    var_13 &= ((/* implicit */short) ((signed char) var_1));
    var_14 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) var_2)))));
}
