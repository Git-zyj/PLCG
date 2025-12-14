/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113384
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (var_8)));
                var_18 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((signed char) (-(((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) >> (((((/* implicit */int) arr_1 [i_1] [i_0])) - (3497))))))))) : (((/* implicit */long long int) ((signed char) (-(((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) >> (((((((/* implicit */int) arr_1 [i_1] [i_0])) - (3497))) - (49536)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_4);
    var_20 += ((signed char) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned short)6251)) : (((/* implicit */int) var_14))));
}
