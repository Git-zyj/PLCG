/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155064
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
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */short) min((((arr_4 [i_0 + 1]) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1])))), (((/* implicit */int) min((arr_4 [i_0 + 2]), (arr_4 [i_0 + 4]))))));
                arr_9 [i_1] [(short)0] = var_3;
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_11)) : (var_5)))) : (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_1)) : (var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (962176430))))))));
}
