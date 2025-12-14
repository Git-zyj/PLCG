/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128261
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) arr_0 [i_0 - 1]))));
                var_12 = var_5;
            }
        } 
    } 
    var_13 = ((((/* implicit */int) var_3)) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_2)))))))));
    var_14 = ((/* implicit */unsigned long long int) (unsigned char)255);
}
