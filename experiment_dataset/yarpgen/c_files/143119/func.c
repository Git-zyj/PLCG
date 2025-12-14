/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143119
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (+((-(var_3))))));
                arr_6 [i_0] [i_0] = 13904795313143948516ULL;
            }
        } 
    } 
    var_11 *= ((/* implicit */unsigned int) var_3);
    var_12 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(var_2)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
}
