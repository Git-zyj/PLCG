/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120626
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
    var_20 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((_Bool) var_12)))))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) var_17)), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((((/* implicit */int) (signed char)-48)) + (2147483647))) >> (((((/* implicit */int) (short)-13221)) + (13223)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+((+(arr_7 [i_0] [i_2])))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_0 + 1] [14] [i_0 + 1])), (((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) arr_3 [i_1])) : (var_7)))))))))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (signed char)-75))))) : (arr_7 [i_0] [i_1]))) : (((arr_6 [i_0 - 1] [i_0 - 1]) ? (((var_15) << (((arr_7 [i_1] [i_1]) - (7650177143970899793ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))));
                }
            } 
        } 
    } 
}
