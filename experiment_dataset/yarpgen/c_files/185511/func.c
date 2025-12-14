/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185511
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((unsigned char) max((min((((/* implicit */unsigned int) var_12)), (var_16))), (max((4189267039U), (((/* implicit */unsigned int) var_18)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [16U] [(unsigned char)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)62), (arr_2 [i_0] [i_1 + 1])))) >> (((((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))) + (88)))));
                var_21 += arr_3 [i_0];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (105700257U)));
    var_23 |= ((/* implicit */signed char) var_14);
}
