/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103803
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_1))));
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) arr_5 [2]);
                arr_7 [5U] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [2ULL] [(_Bool)0])) ? (arr_4 [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2)))))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_1] [i_0])))) >= (((/* implicit */int) arr_2 [8ULL] [2ULL])))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */long long int) var_12);
}
