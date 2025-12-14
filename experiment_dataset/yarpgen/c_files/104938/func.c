/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104938
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
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_3 [i_0]);
                var_20 = ((/* implicit */int) ((unsigned char) min((2501710952219493319ULL), (((/* implicit */unsigned long long int) (short)-28017)))));
                arr_6 [i_1] = ((/* implicit */signed char) ((long long int) min((((/* implicit */int) (short)28017)), ((+(var_10))))));
                arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) || (((/* implicit */_Bool) var_4))))), ((~(arr_0 [i_1 - 1])))));
            }
        } 
    } 
}
