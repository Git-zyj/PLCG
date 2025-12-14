/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118387
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [4U] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [12ULL] [(short)2])) ? (arr_2 [i_1 - 1] [4LL] [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 + 1]))))));
                var_20 |= min((((unsigned int) ((((/* implicit */_Bool) arr_1 [0U] [i_1 + 1])) ? (((/* implicit */long long int) 2U)) : (arr_0 [i_0] [i_0])))), (min((((unsigned int) arr_0 [i_1] [i_0])), (((/* implicit */unsigned int) var_5)))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) var_15);
}
