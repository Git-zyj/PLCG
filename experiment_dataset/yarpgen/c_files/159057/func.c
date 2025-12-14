/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159057
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) var_10);
                var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_1 + 1] [i_1] [i_0]) : (arr_5 [5LL] [i_0 + 1] [1LL]))) : (min((((/* implicit */int) var_2)), (arr_5 [i_0 + 1] [(signed char)11] [i_1 - 1])))))) > (((unsigned int) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            }
        } 
    } 
}
