/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101544
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)26242)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-51)))), (((/* implicit */int) max(((short)-27077), (((/* implicit */short) arr_1 [i_0] [i_1])))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12)))))))));
                arr_6 [i_1] [15LL] = ((/* implicit */long long int) var_10);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_0);
}
