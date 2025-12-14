/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11145
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
    var_15 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */int) ((max((max((2147352576U), (516096U))), (min((var_14), (((/* implicit */unsigned int) (unsigned char)124)))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))))))));
                arr_6 [i_0 - 2] &= ((/* implicit */int) max((min((var_14), (((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 2])))), (min((((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 2])), (2147614719U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_12);
}
