/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117870
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) var_8);
                var_11 = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_13 = ((/* implicit */_Bool) var_5);
    var_14 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
}
