/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157357
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
    var_13 = ((/* implicit */unsigned char) min((((min((((/* implicit */unsigned long long int) var_10)), (var_4))) | (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), (var_12))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1 - 1])), (arr_3 [i_1 - 2] [i_1] [i_1 - 2])))) ? (arr_0 [i_0]) : (((min((arr_0 [i_1 - 2]), (((/* implicit */unsigned int) arr_4 [i_1 + 1])))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_0 [i_1])))))) ? (((((/* implicit */_Bool) arr_2 [(short)13] [(short)13] [(short)13])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) * (arr_3 [i_0] [i_1 - 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 3])))) : (arr_3 [i_0 - 3] [i_0] [i_0])));
            }
        } 
    } 
}
