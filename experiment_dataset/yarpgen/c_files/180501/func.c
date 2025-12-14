/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180501
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
    var_18 = ((/* implicit */unsigned long long int) var_16);
    var_19 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_10)), (arr_2 [i_0 + 2])))));
                var_21 = ((/* implicit */unsigned char) ((var_10) ? (5648933915397620086ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-755)))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned short) ((int) var_11));
}
