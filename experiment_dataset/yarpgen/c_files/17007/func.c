/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17007
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
    var_18 = var_2;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = min((3004342155622918989ULL), (min((((((/* implicit */_Bool) 9448183977291015492ULL)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_16)) ? (arr_5 [(_Bool)0] [i_1 - 1]) : (15442401918086632642ULL))))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) 8998560096418536123ULL);
                }
            } 
        } 
    } 
}
