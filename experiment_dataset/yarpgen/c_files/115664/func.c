/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115664
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) (unsigned char)238);
                var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((var_4) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) var_16))))))), (min((var_12), (((/* implicit */long long int) var_8))))));
    var_20 -= ((/* implicit */short) var_6);
}
