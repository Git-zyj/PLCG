/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153802
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
    var_11 = ((/* implicit */unsigned int) ((var_4) >> (((/* implicit */int) var_0))));
    var_12 = ((/* implicit */int) var_10);
    var_13 |= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (((unsigned int) arr_4 [i_1] [i_1] [i_0]))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_1]))) ? (min((4328767996392142668ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
}
