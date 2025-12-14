/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140384
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1]) : (((((/* implicit */_Bool) 1U)) ? (var_7) : (((/* implicit */long long int) 3U))))));
                arr_6 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [(_Bool)0]))));
                var_18 = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_10);
}
