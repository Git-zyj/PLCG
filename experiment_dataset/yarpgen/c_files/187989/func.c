/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187989
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
    var_13 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 += ((/* implicit */int) ((((/* implicit */int) ((short) var_4))) != (max((-1783090844), (((/* implicit */int) arr_0 [i_0 + 2]))))));
                var_15 = ((/* implicit */short) arr_3 [i_0 - 4] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 700526043)), (var_6)))) % (max(((~(var_12))), (((/* implicit */unsigned long long int) var_4))))))));
}
