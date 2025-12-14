/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187659
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
    var_17 = ((/* implicit */short) var_3);
    var_18 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28713))))) << (((var_0) + (1398034415))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */signed char) var_1)), (arr_0 [i_1]))));
                var_19 = var_7;
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
