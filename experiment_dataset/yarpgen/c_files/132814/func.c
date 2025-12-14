/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132814
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)37)))) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) var_4))))) : (((/* implicit */int) var_7))));
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_6)), (var_0)))), (((((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */signed char) var_7)))))) + (((unsigned int) var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min(((-(((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (15485921231745331314ULL))))), (((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) var_5))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_1]) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [(short)10] [i_0])) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_1 [i_1])))))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */int) var_0);
}
