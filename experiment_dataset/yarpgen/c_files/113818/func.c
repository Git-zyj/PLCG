/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113818
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
    var_12 = ((/* implicit */unsigned long long int) var_4);
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(0ULL))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13548))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14534))) ^ (arr_3 [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
}
