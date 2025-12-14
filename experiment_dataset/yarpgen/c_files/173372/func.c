/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173372
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
    var_17 = var_8;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_3 [4LL])), (max((((/* implicit */int) (unsigned char)77)), (arr_1 [i_0]))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
            }
        } 
    } 
}
