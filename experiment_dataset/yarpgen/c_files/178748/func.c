/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178748
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
    var_10 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_1);
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [1LL])))) ? (var_6) : (arr_3 [i_0] [i_1])));
            }
        } 
    } 
}
