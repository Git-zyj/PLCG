/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174354
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
    var_19 = ((/* implicit */signed char) var_10);
    var_20 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((min(((~(arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) min(((unsigned short)46288), (((/* implicit */unsigned short) var_17))))))) & ((~((~(-7832431175464642039LL)))))));
                var_22 -= ((/* implicit */signed char) max(((+(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) (_Bool)0))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) (short)25191)), (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1269614338))))))))));
            }
        } 
    } 
}
