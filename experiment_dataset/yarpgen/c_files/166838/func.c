/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166838
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((var_4) & (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2])))))));
                    var_12 -= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_3 [i_0])), (arr_2 [i_1] [(unsigned char)11])));
                    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_1])), (max((((/* implicit */int) arr_3 [i_0])), ((+(((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
