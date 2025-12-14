/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180423
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
    var_15 = ((/* implicit */unsigned int) (+(var_0)));
    var_16 = ((/* implicit */_Bool) var_13);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31090))) <= (min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-12414))))), (((1964869587U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-13638)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 2] |= ((/* implicit */_Bool) ((((int) ((arr_5 [i_0] [i_1]) << (((var_14) - (5937268618873425468LL)))))) & (var_11)));
                var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_2)), (var_0))) % ((+(((/* implicit */int) (unsigned short)127))))));
            }
        } 
    } 
}
