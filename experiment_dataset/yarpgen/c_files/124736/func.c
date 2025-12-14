/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124736
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
    var_13 -= ((/* implicit */int) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)17014)) < (((/* implicit */int) (unsigned short)17014)))))) : (((unsigned long long int) (unsigned short)48522)))), (((/* implicit */unsigned long long int) var_9))));
    var_14 = ((/* implicit */signed char) ((unsigned short) (short)30384));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((unsigned short) arr_4 [i_1]));
                arr_6 [0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_5 [i_0 - 1]), (arr_5 [i_0 + 3]))))));
            }
        } 
    } 
}
