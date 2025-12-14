/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175729
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
    var_10 ^= ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), ((unsigned short)37595)))))))));
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (unsigned short)14078))));
            }
        } 
    } 
}
