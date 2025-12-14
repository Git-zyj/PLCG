/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107335
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
    var_20 = ((/* implicit */unsigned char) var_19);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) arr_3 [i_0]);
                var_21 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) 1534196879U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (1534196879U)))))));
            }
        } 
    } 
}
