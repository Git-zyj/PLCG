/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182977
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
    var_19 = ((/* implicit */unsigned long long int) var_9);
    var_20 = ((short) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 = ((short) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                    arr_6 [i_0] [i_0] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_2 + 1] [i_0] [i_2]), (arr_4 [i_2 - 1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_0] [i_2 + 2]))) : (arr_5 [i_0] [i_0] [i_2 + 2] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
}
