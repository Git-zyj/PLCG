/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128781
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
    for (short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) 1413400553);
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [20LL] [i_0 - 2])) ? (((/* implicit */unsigned int) -1413400558)) : (3343563621U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1413400553)) || (((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_0 - 1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))), (max((((/* implicit */unsigned int) var_2)), (var_12))))))));
}
