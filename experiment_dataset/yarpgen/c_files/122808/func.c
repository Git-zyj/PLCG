/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122808
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 4])) ? (((/* implicit */int) arr_4 [i_0 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-23840)))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))) : (arr_3 [i_0 - 1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)11])))))) : (-1LL)))));
                arr_6 [i_0 - 4] [i_0 - 4] = ((((arr_1 [i_0 + 1] [i_0 - 4]) >= (arr_1 [i_0 + 1] [i_0 - 4]))) ? (((arr_1 [i_0 + 1] [i_0 - 4]) / (arr_1 [i_0 + 1] [i_0 - 4]))) : (arr_1 [i_0 + 1] [i_0 - 4]));
                arr_7 [i_0] |= ((/* implicit */unsigned char) arr_2 [i_1] [(unsigned char)3]);
                arr_8 [i_0] = arr_2 [i_0 + 4] [i_0 - 1];
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) ((signed char) (unsigned char)88)))), (var_3)));
}
