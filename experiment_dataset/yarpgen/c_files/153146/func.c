/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153146
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */short) (!(arr_2 [i_2] [i_2 - 3])));
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 1] [i_2 - 1]))))) ? ((+(arr_6 [i_2 - 3] [i_2 - 1] [i_2] [i_2 - 3]))) : (((/* implicit */unsigned long long int) ((190879064U) << (((((/* implicit */int) (signed char)90)) - (81))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 &= ((/* implicit */unsigned int) var_9);
}
