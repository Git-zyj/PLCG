/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131587
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) + ((+(var_11)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_11 [i_2] = ((arr_7 [i_1 + 1] [i_0 + 1] [i_2]) * (((((/* implicit */long long int) arr_5 [i_0] [5] [i_2])) / (((arr_6 [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)12] [i_1 + 1]))))))));
                    arr_12 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0]))) | (arr_1 [i_2]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 + 1]))))))));
                    var_14 *= ((/* implicit */int) arr_9 [i_1 + 1] [i_0 + 1] [(unsigned char)1]);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_0 + 1] [i_1 - 2] [i_2])) - (arr_2 [i_0] [i_2])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_5);
}
