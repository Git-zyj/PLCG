/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156629
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((268433408), (((/* implicit */int) var_16)))) : (((/* implicit */int) var_0))));
    var_21 ^= ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])), (var_8)))) ? (((arr_1 [i_1]) | (((/* implicit */long long int) 268433385)))) : (arr_0 [i_2] [i_3])))), (((((/* implicit */unsigned long long int) 600712679)) & (7516192768ULL)))));
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) 13U);
                    }
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) var_6);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) var_19);
}
