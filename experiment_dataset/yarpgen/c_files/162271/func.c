/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162271
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
    var_20 = var_9;
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((_Bool) var_13)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_2] [i_1]);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) | (((min((arr_2 [i_0] [i_0 + 1] [i_2]), (((/* implicit */long long int) arr_5 [i_1])))) - (arr_2 [i_0] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_17);
    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_11))))) * (((/* implicit */int) ((signed char) var_2)))))) || (((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_7))))) >= (((/* implicit */int) var_19))))));
}
