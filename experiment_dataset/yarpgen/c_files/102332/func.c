/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102332
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
                arr_4 [10] [(unsigned char)6] |= ((/* implicit */short) max(((unsigned short)0), (((/* implicit */unsigned short) ((var_0) || (((/* implicit */_Bool) arr_0 [(unsigned char)10])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((_Bool) ((signed char) var_1))), (var_1)));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) var_1)), (var_15)))))));
    var_21 = ((/* implicit */short) ((long long int) var_15));
}
