/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182011
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) && ((_Bool)0)))), (min((var_10), (((/* implicit */unsigned char) (_Bool)1))))))) > ((-(((/* implicit */int) var_3))))));
    var_13 = var_11;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_7 [(_Bool)1] [i_1 - 1] [(_Bool)1] |= arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1];
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((unsigned char) (_Bool)0)), (var_2)));
}
