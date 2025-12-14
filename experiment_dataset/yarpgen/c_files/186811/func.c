/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186811
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -5734801739088183777LL))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(4294967295U))))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1270649301U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (6ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2859411943U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)59450))))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [(short)11] [i_1])), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9U)))))) : (arr_2 [i_0] [i_0] [i_1 + 2]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (short)-32765)), (7)))))))));
                arr_5 [i_1 + 2] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
                var_18 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65024))))), (-1959160912)));
            }
        } 
    } 
}
