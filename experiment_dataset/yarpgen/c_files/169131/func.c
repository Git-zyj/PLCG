/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169131
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
    var_14 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) var_4);
                var_15 = ((/* implicit */short) max((max((((/* implicit */unsigned int) var_6)), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (arr_3 [i_0] [i_1] [i_0]))))), ((-(arr_3 [(_Bool)1] [i_0 + 2] [i_0])))));
            }
        } 
    } 
}
