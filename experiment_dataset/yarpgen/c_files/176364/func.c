/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176364
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 3179702137622963867ULL)) ? (((arr_3 [i_1] [i_1] [i_1]) ? (-8LL) : (((/* implicit */long long int) -613743045)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_1 + 3]))))), (((/* implicit */long long int) ((signed char) arr_4 [i_0] [i_1] [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(min((var_12), (var_11))))))));
                var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [8ULL] [8ULL] [i_1])) ? (arr_2 [i_0] [i_0] [2LL]) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_9))))) ? (arr_2 [i_0] [i_0] [0ULL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -8LL)) && (((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)0] [(short)4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [10ULL]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) 1302360327U);
}
