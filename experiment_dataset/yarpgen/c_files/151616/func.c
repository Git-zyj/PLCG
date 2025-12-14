/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151616
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) 0U);
                arr_7 [4U] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8938932297701433843ULL)) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1]))) + ((-(arr_0 [i_1 + 3])))));
                var_10 = ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_11 = ((/* implicit */int) 8U);
}
