/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162811
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned int) ((int) var_4))) : (((var_9) - (2917039957U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)7)) : (arr_2 [i_0])))) : (((((/* implicit */_Bool) ((int) 1226587355))) ? (((var_9) / (3530811135U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)239)))))))));
                var_11 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) != (arr_6 [i_0] [8U] [i_0])))) | (min((((/* implicit */int) (unsigned char)245)), (1958501794))))));
                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0]))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (var_9) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                var_13 = ((((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) * (max((((/* implicit */unsigned int) arr_2 [i_0])), (((unsigned int) (unsigned char)228)))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */_Bool) -553689388)) || (((/* implicit */_Bool) arr_0 [i_0]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (arr_6 [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */unsigned int) var_7)) * (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))) * (min((((/* implicit */unsigned int) var_5)), (var_4)))))))));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_9)))));
}
