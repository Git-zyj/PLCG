/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108757
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
    var_13 ^= ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 += (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) (short)-17675)))))))));
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (var_6))))) / (max((var_3), (((/* implicit */long long int) arr_2 [i_0]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) arr_0 [i_0])) : ((~(arr_4 [i_1])))))));
            }
        } 
    } 
}
