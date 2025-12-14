/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124148
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (max((((((/* implicit */int) var_9)) >> (((/* implicit */int) var_6)))), (var_5)))));
    var_14 = ((/* implicit */short) var_8);
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_12))) + (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((arr_0 [i_0] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_17 = ((/* implicit */short) (((+(arr_4 [i_1]))) >= (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */short) min(((-(((/* implicit */int) arr_8 [i_2 + 3] [i_1] [i_0 + 2] [i_0 + 1])))), ((+(var_5)))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)6] [i_1] [i_2] [7LL])) ? (((/* implicit */int) arr_8 [i_2 - 3] [i_1] [i_0 + 1] [i_0 - 1])) : (var_5)))) ? (((int) arr_8 [i_0 + 3] [i_0 - 1] [i_1] [i_2])) : (((/* implicit */int) ((var_0) <= (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
}
