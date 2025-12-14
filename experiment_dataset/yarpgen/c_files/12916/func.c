/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12916
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-3959)), (0ULL)));
    var_21 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_0 - 1] [15U]), (((/* implicit */unsigned long long int) var_2))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 - 1] [(short)2])))))));
                    var_22 = ((/* implicit */unsigned short) ((unsigned int) (-(7770705900456602682ULL))));
                }
            } 
        } 
    } 
}
