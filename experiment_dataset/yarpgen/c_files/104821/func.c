/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104821
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
    var_10 = ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3))))))) & (max(((-(var_8))), (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (((_Bool)1) ? (((unsigned long long int) (_Bool)1)) : (18446744073709551615ULL))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_1]);
                var_12 -= ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [(signed char)2]))) && (((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
}
