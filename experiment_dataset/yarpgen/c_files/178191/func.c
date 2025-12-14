/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178191
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((((unsigned int) arr_0 [i_1 - 1] [i_1 - 1])), (((/* implicit */unsigned int) arr_3 [i_0]))));
                var_19 = ((/* implicit */unsigned char) arr_3 [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_17)))) ? (var_15) : (((/* implicit */int) max((var_0), (var_12))))))) ? (var_8) : (((/* implicit */unsigned long long int) -1584614421))));
}
