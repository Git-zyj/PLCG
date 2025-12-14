/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114157
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
    var_10 ^= ((/* implicit */unsigned int) 17388586236957733586ULL);
    var_11 = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) 2343834221U)) && (((/* implicit */_Bool) var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((var_3) != (var_3)))) : (((/* implicit */int) ((signed char) (signed char)122)))))) : (var_9)));
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)122))))))) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                var_13 = ((((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 0ULL)))))))) : (max((arr_0 [i_0 - 1]), (arr_2 [i_1] [i_1] [i_1 - 2]))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((unsigned int) arr_0 [i_1 + 1]))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            }
        } 
    } 
}
