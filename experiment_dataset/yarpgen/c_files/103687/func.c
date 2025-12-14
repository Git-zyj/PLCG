/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103687
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) & (14019712193782360451ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_11 *= (-(((/* implicit */int) max((var_3), (var_5)))));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) 1614512361716039106ULL);
                    arr_10 [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? ((+(((/* implicit */int) (short)-17512)))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)15] [(unsigned char)1] [i_1])))))));
                    var_13 += ((/* implicit */unsigned int) var_8);
                    var_14 = ((/* implicit */int) ((unsigned long long int) (~(arr_6 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) (~(14019712193782360480ULL)));
}
