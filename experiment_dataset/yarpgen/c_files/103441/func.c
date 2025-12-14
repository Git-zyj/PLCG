/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103441
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) & (-2147483626)))))))));
                    var_20 += var_10;
                    var_21 = ((/* implicit */unsigned int) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (-(max(((-(((/* implicit */int) var_1)))), (var_18)))));
    var_23 = var_18;
}
