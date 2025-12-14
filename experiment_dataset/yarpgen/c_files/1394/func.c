/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1394
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
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_1 [i_0]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)127)))))))))));
                var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
                var_21 = ((/* implicit */unsigned char) var_15);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((unsigned int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)61))))));
}
