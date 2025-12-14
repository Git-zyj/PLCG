/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152275
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))) ? (11543406658329136190ULL) : ((~(9073061806451558030ULL)))));
                var_18 = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_19 = (short)30602;
}
