/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123643
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) arr_3 [i_0 - 3] [i_0 - 1] [i_0 - 1]);
                    var_14 = ((/* implicit */short) var_9);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(6142185412661871255LL)))) ? (max((((/* implicit */int) arr_5 [i_2] [i_2])), (var_0))) : ((~(arr_1 [i_0 - 1] [i_0]))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (arr_1 [i_0] [i_0])))))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_12)))))))) : ((((!(((/* implicit */_Bool) arr_1 [6ULL] [6ULL])))) ? ((+(var_5))) : (((/* implicit */int) ((signed char) var_5))))))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0 - 2] [i_0 + 1] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [9ULL] [i_0] [i_0 - 3] [i_0 - 1])), (((((/* implicit */_Bool) var_3)) ? (var_9) : (9223372036854775807LL)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0] [i_0 - 1])) : (arr_4 [i_0 - 2] [i_0 + 1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) && (((/* implicit */_Bool) arr_10 [i_3])))))))) >> (((max((((/* implicit */long long int) var_6)), (var_8))) - (681751538LL))))))));
        arr_13 [i_3] [i_3 + 1] = ((/* implicit */short) arr_0 [i_3]);
    }
    var_18 = ((/* implicit */unsigned int) ((int) min((((var_4) % (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_0)) ? (8263269844281674804ULL) : (((/* implicit */unsigned long long int) var_0)))))));
}
