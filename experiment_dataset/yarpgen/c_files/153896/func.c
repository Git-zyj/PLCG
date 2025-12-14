/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153896
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) min(((~(var_1))), (((/* implicit */int) max(((unsigned short)25660), (((/* implicit */unsigned short) var_0)))))))), ((~(arr_2 [i_1 + 1] [i_1] [i_1])))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) (signed char)-19))))) ? (((((/* implicit */_Bool) (short)-407)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) : (4294967295U))) : (min((arr_2 [i_1] [i_1 - 2] [i_0]), (var_7)))));
                var_22 = ((/* implicit */long long int) ((unsigned char) 5380455671217856000LL));
            }
        } 
    } 
    var_23 = var_11;
}
