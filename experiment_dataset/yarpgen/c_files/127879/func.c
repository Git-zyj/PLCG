/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127879
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (var_4)))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), ((unsigned short)20982)))) ? (((/* implicit */int) (unsigned char)154)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)30046)) : (((/* implicit */int) (unsigned short)60047)))))))));
    var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (533068961U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_5)))))) : (var_12)))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) var_13)), (var_16))))))) + (((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) var_3)) : (9344989727630111541ULL)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -32768)) ? ((-(3761898335U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_0] [i_2]))))))));
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_1])), (var_3)));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0 - 3] [i_0] [i_0] [i_1]);
                }
            } 
        } 
    } 
}
