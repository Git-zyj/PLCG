/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17712
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
    var_20 *= ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [(signed char)3] = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 2] [i_0])), (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_4 [i_0 + 3] [i_0 + 2]) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
                var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_4))))), (max((arr_4 [i_0 + 3] [i_0 - 1]), (arr_4 [i_0 + 2] [i_0 - 1])))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_10)) % (((/* implicit */int) var_14))))));
}
