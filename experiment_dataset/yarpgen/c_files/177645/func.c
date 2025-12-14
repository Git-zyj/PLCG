/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177645
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
    var_14 = ((/* implicit */unsigned char) ((int) 15104912909791435454ULL));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_10);
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_9 [i_2 - 3] [i_1] [i_0]), (((/* implicit */int) arr_11 [i_2 - 3] [(short)7] [i_1])))))));
                    arr_12 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */unsigned long long int) var_0);
    var_18 = ((/* implicit */unsigned char) ((8661245781396335791ULL) == (9785498292313215825ULL)));
}
