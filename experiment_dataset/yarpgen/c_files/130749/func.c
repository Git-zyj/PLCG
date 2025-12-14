/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130749
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
    var_11 = ((/* implicit */long long int) ((unsigned char) (unsigned char)60));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                var_13 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (min((var_6), (((/* implicit */unsigned long long int) (unsigned char)201)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [(short)1] [i_1] [i_0])))))));
            }
        } 
    } 
}
