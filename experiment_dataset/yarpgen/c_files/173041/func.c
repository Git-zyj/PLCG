/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173041
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
    var_17 = ((/* implicit */unsigned long long int) ((int) var_9));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) max(((-(1033344173U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_5)), (var_13))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (+(((62914560U) >> (((((/* implicit */int) (unsigned char)241)) - (233)))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */int) arr_6 [i_1] [i_1] [i_2]);
            arr_11 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_7 [i_2 + 1] [i_2 + 1])));
        }
    }
}
