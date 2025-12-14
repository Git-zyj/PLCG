/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) arr_5 [i_0]);
                    var_21 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_1 - 1] [i_1 - 1] [i_0]))) | (((((arr_9 [i_1]) | (arr_9 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) * (((/* implicit */int) ((((unsigned long long int) var_15)) <= (((/* implicit */unsigned long long int) ((2147483647) << (((var_18) - (668232055U)))))))))));
    var_23 = ((/* implicit */unsigned int) ((((int) var_4)) ^ (((/* implicit */int) (signed char)-119))));
    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((_Bool) var_15))) & (((((/* implicit */int) var_16)) & (((/* implicit */int) var_1)))))) & (((/* implicit */int) var_13))));
    var_25 = (signed char)6;
}
