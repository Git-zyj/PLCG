/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182030
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32751))) < (288221580058689536ULL))))));
                arr_7 [i_0] [i_0] = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 - 1]))))), (max((arr_4 [i_1 - 1] [i_0 + 3]), (arr_4 [i_1 - 2] [i_0 - 1]))));
            }
        } 
    } 
    var_10 = var_6;
}
