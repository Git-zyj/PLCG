/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132687
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
    var_10 = min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7)))))) : (max((((/* implicit */long long int) var_2)), (6917585461192756342LL))))), (((/* implicit */long long int) (_Bool)1)));
    var_11 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 5159745031210905952LL)) ? (((/* implicit */long long int) var_7)) : (-6917585461192756324LL)));
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [4U] = ((((/* implicit */_Bool) -19LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6917585461192756342LL));
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) || (((/* implicit */_Bool) arr_5 [i_0 + 1]))));
            }
        } 
    } 
}
