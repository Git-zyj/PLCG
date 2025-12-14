/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157734
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((arr_3 [i_0 + 3] [i_0]), ((unsigned short)31)))))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_6 [i_0 - 2])), (min((((((/* implicit */_Bool) 2018661272U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1]))) : (arr_1 [i_1]))), (((/* implicit */unsigned int) var_5)))))))));
            }
        } 
    } 
}
