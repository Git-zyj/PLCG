/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165338
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
    var_19 -= ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (signed char)102)) != (((/* implicit */int) var_3))))) | (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1] [i_0 + 1]))))) / (((((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) == (arr_1 [i_0]))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) min((((/* implicit */signed char) var_6)), ((signed char)102))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (8408584100245326915ULL))))) ? ((~(((((/* implicit */_Bool) arr_0 [i_1])) ? (3547694714U) : (1953686038U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102)))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_1])) ? (arr_2 [i_0 - 1] [i_1] [i_0 - 1]) : (arr_1 [16ULL]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_11), (((/* implicit */unsigned long long int) (signed char)-102)))) << (((var_7) + (9004540950442584160LL)))))) && (((/* implicit */_Bool) var_3))));
}
