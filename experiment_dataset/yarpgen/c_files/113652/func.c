/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113652
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */int) min(((!((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))), ((!((_Bool)0)))));
                    var_11 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1339)) - (((/* implicit */int) (signed char)127))))) ? (((((arr_2 [i_0] [i_1]) + (2147483647))) >> (((var_3) - (1132334971822173093LL))))) : ((-(1003241366)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1339)) - (((/* implicit */int) (signed char)127))))) ? (((((((arr_2 [i_0] [i_1]) - (2147483647))) + (2147483647))) >> (((var_3) - (1132334971822173093LL))))) : ((-(1003241366))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_3);
}
