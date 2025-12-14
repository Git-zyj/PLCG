/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184142
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (3548058613990866526ULL)))) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0] [i_1])), (var_0))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((9444896083229022449ULL) - (9444896083229022420ULL))))))))));
                    var_12 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_6);
}
