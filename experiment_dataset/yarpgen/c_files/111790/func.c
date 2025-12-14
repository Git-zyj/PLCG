/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111790
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
    var_13 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_12))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 1])) ? (((((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [i_1 - 2] [(unsigned short)19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) << (((((/* implicit */int) arr_0 [i_2] [i_2])) - (37343))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2 + 2])) : (((/* implicit */int) var_3)))) <= (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 1U)))))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_1 + 1])), (arr_1 [i_0 - 1]))) + (min((((((/* implicit */_Bool) arr_3 [i_1] [15U] [i_2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_2 + 1]))))), (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))))))));
                    arr_9 [i_0] [i_1 - 2] [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [i_2]);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_7), (arr_4 [i_1] [i_1])))) ? (((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_4 [i_0 - 4] [i_2])) - (47881))))) : (((/* implicit */int) max((arr_6 [13U] [i_1 - 1] [i_1 - 1] [13U]), (arr_5 [i_0 - 1] [i_0 - 1])))))), (((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_4 [i_0] [i_0 - 4])))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_9);
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
}
