/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130267
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
    var_10 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned long long int) var_0);
                var_11 ^= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (signed char)-46))));
                var_12 = ((/* implicit */_Bool) (~(arr_5 [(signed char)9])));
                var_13 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
            }
        } 
    } 
}
