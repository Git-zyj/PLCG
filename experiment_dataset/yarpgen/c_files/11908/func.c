/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11908
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
    var_13 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) min(((_Bool)1), (((((/* implicit */_Bool) 1231106886)) && (((/* implicit */_Bool) 6608415129599406723ULL))))));
                var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4556145521330140928ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) < (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            }
        } 
    } 
}
