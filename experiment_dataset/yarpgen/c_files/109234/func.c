/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109234
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((137010854899842120LL) >= (var_10)))) << (((((/* implicit */int) ((signed char) min((137010854899842120LL), (((/* implicit */long long int) var_19)))))) + (52)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_1] [i_0])))));
                arr_8 [11LL] [i_1] = min((((long long int) (signed char)(-127 - 1))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_6 [12LL] [i_1] [i_1]))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1]) | (((((/* implicit */_Bool) (signed char)-1)) ? (9223372036854775807LL) : (-20LL)))))) || (((((/* implicit */_Bool) arr_5 [0LL] [0LL])) && (((/* implicit */_Bool) 137010854899842103LL))))));
                var_22 = ((((arr_3 [i_0]) >> (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))) / (min((137010854899842103LL), (-137010854899842124LL))));
                arr_9 [i_1] = ((((long long int) arr_2 [i_0] [i_0])) % (((arr_3 [i_1]) & (arr_3 [i_1]))));
            }
        } 
    } 
    var_23 = ((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)15))))) || (((/* implicit */_Bool) var_17))))) - (1))));
    var_24 = ((/* implicit */long long int) var_3);
}
