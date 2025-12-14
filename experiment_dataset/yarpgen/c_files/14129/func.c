/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14129
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [i_1])));
                arr_5 [(unsigned char)3] [i_0] = ((/* implicit */_Bool) arr_2 [7]);
                var_11 = ((/* implicit */long long int) (-(var_7)));
                arr_6 [i_0] = ((/* implicit */int) var_6);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_1);
}
