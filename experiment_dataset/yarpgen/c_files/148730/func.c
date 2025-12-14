/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148730
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (_Bool)0)))));
                var_15 = ((/* implicit */int) max((var_15), ((~(((((/* implicit */_Bool) arr_0 [(signed char)4])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                var_16 = ((/* implicit */long long int) (signed char)(-127 - 1));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))));
}
