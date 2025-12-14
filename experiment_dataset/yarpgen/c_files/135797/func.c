/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135797
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
    var_14 = ((var_12) | ((+(((((/* implicit */_Bool) var_9)) ? (var_4) : (var_6))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((min((((((/* implicit */_Bool) -2225981407651429862LL)) ? (-1LL) : (1LL))), (var_4))) ^ (((/* implicit */long long int) ((/* implicit */int) ((max((var_7), (35184372088831LL))) < (var_11))))));
        var_16 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [24LL])) ? (arr_1 [i_0 + 1] [i_0]) : (var_7)))) ? ((~(arr_0 [2LL]))) : (max((var_5), (var_10))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_5 [8LL] &= ((((/* implicit */_Bool) min(((+(var_8))), (5582821885026128188LL)))) ? (-2LL) : (((((/* implicit */_Bool) ((long long int) var_2))) ? ((+(1LL))) : (min((8796093022207LL), (-7199437510126863526LL))))));
        var_17 = arr_1 [i_1] [i_1];
        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) ((long long int) arr_2 [i_1]))) ? (min((-1653057755780807632LL), (arr_4 [8LL]))) : (var_0)))));
        var_19 += -1LL;
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((long long int) ((arr_2 [i_1]) | (arr_2 [i_1]))))));
                    var_21 = ((min((var_1), (arr_10 [i_1] [i_1] [i_3]))) / ((~(arr_2 [i_2]))));
                }
            } 
        } 
    }
}
