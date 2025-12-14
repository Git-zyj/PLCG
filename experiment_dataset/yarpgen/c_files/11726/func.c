/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11726
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [11ULL] [i_2 - 3] = ((18237152710714763994ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))));
                    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 0U)), (209591362994787613ULL)));
                    arr_8 [i_0] = ((/* implicit */unsigned int) var_1);
                    arr_9 [2ULL] [i_1] [i_1] [i_1] = ((18237152710714763994ULL) | (((max((arr_0 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) * (16430140509095878221ULL))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)63))));
}
