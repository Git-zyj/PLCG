/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125810
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
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_6))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1057075981747552827LL)) ? ((~((~(arr_2 [(short)6] [i_0]))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_1] [(short)12] [i_1])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((1733053310192671536LL) == (-1733053310192671537LL)))))))));
                var_15 = ((/* implicit */short) (-(arr_6 [(signed char)11] [(signed char)11])));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((long long int) var_4));
}
