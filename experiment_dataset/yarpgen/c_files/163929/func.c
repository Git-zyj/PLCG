/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163929
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
    var_20 = ((/* implicit */unsigned int) (!(((((var_10) | (var_10))) >= (((/* implicit */long long int) ((var_14) >> (((var_8) - (593329723))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= ((((/* implicit */int) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) == (((/* implicit */int) arr_3 [(short)3] [(short)3] [i_1]))))) | (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))))) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))))));
                arr_4 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) arr_2 [(short)8]);
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (arr_2 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [(short)7] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))) : (max((((/* implicit */unsigned int) ((arr_2 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))), (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))))))));
                arr_6 [9ULL] [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned int) var_16);
}
