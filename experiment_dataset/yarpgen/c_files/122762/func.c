/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122762
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_0)) + (29))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((_Bool) min((37290213U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))));
                var_15 = ((/* implicit */unsigned int) ((unsigned short) var_11));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((53892552U), (((/* implicit */unsigned int) (short)-3297))))) ? (max((var_1), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))))));
            }
        } 
    } 
}
