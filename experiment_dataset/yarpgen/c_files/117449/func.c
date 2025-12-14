/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117449
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
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), ((((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [6] [i_1 + 1])) : (((/* implicit */int) arr_5 [4] [i_1 + 1]))))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 4])) > (((/* implicit */int) arr_0 [i_0 - 4])))))))));
                var_18 = var_15;
                arr_6 [i_1] = (~(720001781));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_0))));
}
