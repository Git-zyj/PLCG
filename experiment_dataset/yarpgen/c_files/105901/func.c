/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105901
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [(short)16] [i_0] = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned short)6])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) - (min((((/* implicit */unsigned int) arr_2 [6U] [i_1])), (arr_6 [i_0])))))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [6LL])) ? (arr_6 [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)4] [(unsigned short)4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))))))), (((((/* implicit */_Bool) ((arr_3 [(_Bool)1] [i_1]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_2] [i_0] [i_2 + 1]))))) ? (max((arr_8 [12] [i_1] [i_0]), (((/* implicit */long long int) arr_5 [6ULL] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_3 [(short)16] [(short)16])), (arr_7 [i_0] [i_1] [i_2]))))))))))));
                    arr_11 [i_0] [i_0] [14U] [i_0] = ((/* implicit */_Bool) ((max((((arr_8 [14U] [i_1] [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [9LL]))))), (((/* implicit */long long int) arr_4 [i_0])))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) || (((arr_9 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [0]))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (var_3)))))))))));
    var_15 = ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))) - (((((/* implicit */int) var_11)) - (((/* implicit */int) var_1)))))) + (((((/* implicit */int) max((((/* implicit */short) var_9)), (var_8)))) - (((((/* implicit */int) var_7)) - (var_6))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_7), (var_1)))))) : (max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_2)) ? (var_6) : (var_3)))))));
}
