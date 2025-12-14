/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164540
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
    var_11 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_3), (var_3)))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_0))))))) % (max((((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))))), (var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = min((((/* implicit */long long int) min(((signed char)48), ((signed char)-1)))), (var_5));
                var_13 = ((/* implicit */int) arr_3 [i_1]);
            }
        } 
    } 
    var_14 ^= ((/* implicit */long long int) var_1);
    var_15 = 12431884185664894985ULL;
}
