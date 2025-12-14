/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187119
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) var_16);
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))))))))));
                arr_6 [(unsigned char)9] [i_0] = (-(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0])))));
                arr_7 [15] [i_0] = ((/* implicit */_Bool) var_19);
            }
        } 
    } 
}
