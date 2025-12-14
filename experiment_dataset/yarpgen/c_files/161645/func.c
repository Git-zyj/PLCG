/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161645
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
    var_14 |= 2147483647;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), ((-(((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) -473742626)))))))))));
                var_16 = ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? ((~(arr_3 [i_1] [i_0]))) : (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (-1206480059) : (arr_3 [i_0] [i_1]))), (((((/* implicit */_Bool) var_3)) ? (var_5) : (1322575368))))));
                var_17 = ((int) ((int) min((-1322575368), (703814046))));
                var_18 = arr_3 [8] [8];
            }
        } 
    } 
}
