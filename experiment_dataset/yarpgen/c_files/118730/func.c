/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118730
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
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_0 - 1] [6U]), (arr_0 [(signed char)4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [(short)9] [9]))))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (max((var_9), (arr_4 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) >= (arr_2 [(short)0])))))))));
                arr_6 [(short)12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_1]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) % (var_3)))))))));
                var_10 *= ((/* implicit */unsigned short) max(((+(arr_2 [i_0 - 1]))), (((/* implicit */unsigned long long int) var_5))));
                var_11 *= ((/* implicit */short) arr_2 [i_1]);
                var_12 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_4 [i_0]))) : (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))), (((/* implicit */unsigned int) ((unsigned short) var_2)))));
            }
        } 
    } 
    var_13 = (((((~(((/* implicit */int) var_1)))) >> (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_2)) + (28518))))))) >> ((((-(((/* implicit */int) var_5)))) + (113))));
    var_14 = ((/* implicit */long long int) max((var_3), (max(((+(var_3))), (((/* implicit */int) var_1))))));
}
