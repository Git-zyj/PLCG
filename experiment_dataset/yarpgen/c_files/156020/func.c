/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156020
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
    var_12 = ((/* implicit */signed char) (((+(var_2))) / (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                    arr_7 [i_0] [i_0 + 1] [i_2] [i_2 + 2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_0] [i_0])));
                }
            } 
        } 
    } 
}
