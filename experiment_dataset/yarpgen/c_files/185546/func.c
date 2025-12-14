/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185546
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned int) (_Bool)1)), (arr_7 [i_0]))), (arr_7 [i_0]))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_0 - 1])))));
                    var_16 = ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_13);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((2919554373087997627LL) >> ((((-(((/* implicit */int) (_Bool)1)))) + (47))))))));
}
