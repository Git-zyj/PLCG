/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165018
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (arr_2 [i_0 + 3])))));
                var_11 = ((/* implicit */_Bool) arr_5 [i_0] [11LL]);
                var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1 - 2])) ? (((/* implicit */int) (short)30476)) : (((/* implicit */int) arr_0 [i_0 + 1])))) != (((((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 1])) + (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_1 + 1]))))));
                arr_7 [(_Bool)0] [(_Bool)0] = ((/* implicit */_Bool) max((min((min((6994472042935592635ULL), (18003995000266063123ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_4 [7ULL] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((18003995000266063123ULL), (11452272030773958981ULL))))));
}
