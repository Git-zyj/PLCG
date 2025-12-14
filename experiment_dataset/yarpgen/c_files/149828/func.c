/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149828
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
    var_20 = (~(((((/* implicit */_Bool) 5947249618591014043ULL)) ? (3758096384ULL) : (0ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_21 = (+(((((/* implicit */_Bool) arr_4 [i_0] [7ULL])) ? (arr_5 [i_0]) : (max((arr_3 [i_0] [i_1]), (var_13))))));
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (var_15)))))) ? (((unsigned long long int) arr_2 [i_0])) : (arr_1 [i_0] [i_0]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_22 = var_8;
                var_23 = var_15;
            }
        } 
    } 
}
