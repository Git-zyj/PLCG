/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170453
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
    var_18 = ((((/* implicit */_Bool) var_6)) ? (((long long int) var_2)) : (((/* implicit */long long int) (~(var_14)))));
    var_19 = var_9;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (-(-598711641)));
                var_21 = ((/* implicit */int) min((var_21), (arr_2 [i_1] [i_1])));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) arr_1 [i_0 - 1])))) - ((-(((/* implicit */int) var_1))))));
            }
        } 
    } 
}
