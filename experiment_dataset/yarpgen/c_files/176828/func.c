/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176828
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = (+(((/* implicit */int) (short)-30938)));
                    arr_9 [i_0] [i_0] [i_2] = (-(((/* implicit */int) ((var_1) || (((/* implicit */_Bool) arr_3 [i_1]))))));
                    arr_10 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (arr_8 [i_0] [i_0 + 1] [i_0] [i_0])))) ? (((/* implicit */int) ((arr_8 [i_0] [i_2 + 2] [i_1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (arr_3 [i_0 - 1])));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0])) ? (arr_2 [i_0 - 2] [i_0]) : (arr_2 [i_0 - 2] [i_0])));
        arr_11 [i_0] = ((((arr_7 [i_0]) - (arr_7 [i_0]))) << (((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (838682756U))));
        var_16 = (-(((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */int) var_9))))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_5)) : (var_10)))) ? (((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((var_8) + (var_7)))))) - (7031122630180943008LL)))));
}
