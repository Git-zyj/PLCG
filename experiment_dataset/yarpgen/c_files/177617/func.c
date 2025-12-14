/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177617
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
    for (short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 &= (~(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(3987792879U)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_15)), (-2665678432839004022LL)));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (max((var_10), (var_8))))) - (var_8)));
}
