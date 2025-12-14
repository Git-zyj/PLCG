/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176357
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (min((min(((unsigned char)17), (arr_3 [i_0 - 1] [i_0 + 1] [i_0]))), (((unsigned char) (!(((/* implicit */_Bool) arr_2 [(unsigned char)6] [i_1])))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) & ((~(((/* implicit */int) (unsigned char)109))))));
                var_21 = ((/* implicit */unsigned char) max((((((((/* implicit */int) var_15)) <= (((/* implicit */int) var_11)))) ? (((/* implicit */int) min((var_5), (arr_2 [i_1] [i_0])))) : (((/* implicit */int) min((var_18), ((unsigned char)194)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (((/* implicit */int) arr_2 [i_1 - 3] [i_0 + 1]))))));
                arr_5 [i_0] = (unsigned char)161;
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_4)) - (131)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5)))))) - (53)))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) + ((-(((/* implicit */int) (unsigned char)202))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))) << (((min((((((/* implicit */int) var_18)) & (((/* implicit */int) var_6)))), (((/* implicit */int) var_15)))) - (42)))));
    var_25 = var_5;
}
