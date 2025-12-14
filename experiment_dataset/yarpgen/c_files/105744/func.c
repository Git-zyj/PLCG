/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105744
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
    var_20 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19540))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((arr_5 [(unsigned char)13]) << (((arr_1 [i_0]) - (17162160895339060759ULL))))))))));
                var_22 = ((/* implicit */unsigned short) (~((-(arr_3 [i_0])))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(min((-1LL), (((/* implicit */long long int) var_14)))))))));
            }
        } 
    } 
}
