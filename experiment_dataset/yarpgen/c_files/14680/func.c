/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14680
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
    var_15 = var_10;
    var_16 = ((/* implicit */_Bool) 1048575U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) (~(max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0])))));
                var_18 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0])))))));
                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_2 [i_1] [i_1] [(signed char)5]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))));
            }
        } 
    } 
}
