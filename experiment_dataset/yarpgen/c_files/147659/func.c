/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147659
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
    var_13 = ((/* implicit */unsigned char) var_7);
    var_14 = ((((((/* implicit */int) var_9)) | (((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_8)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)80)) << (((arr_3 [i_0 - 2] [i_0 - 2]) - (7745921867018906132ULL)))))), ((+(arr_3 [i_0] [i_0 - 1]))))))));
                var_16 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_5)))));
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1] [(short)2])) ? (arr_2 [i_0 - 2] [5LL] [i_0]) : (arr_2 [i_0 - 1] [i_1] [i_1]))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))))));
                var_18 = ((/* implicit */_Bool) arr_0 [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 664205178U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned char)95)) : (((((/* implicit */_Bool) (short)-2045)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_9))));
}
