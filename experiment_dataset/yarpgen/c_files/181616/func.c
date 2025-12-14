/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181616
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(arr_0 [i_0])));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12410287037030407265ULL)) ? (((-8751578461578697983LL) | (((/* implicit */long long int) var_12)))) : (8751578461578697983LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0]) != (arr_0 [i_0])));
        arr_4 [i_0] = ((((-978059267498101677LL) / (4493463057293757885LL))) - (((/* implicit */long long int) var_8)));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_10 [i_1] [i_2] = ((/* implicit */_Bool) 4493463057293757887LL);
                arr_11 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(max((-9223372036854775805LL), (((/* implicit */long long int) arr_9 [i_2] [9U]))))))), (17370447395522425648ULL)));
            }
        } 
    } 
}
