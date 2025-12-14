/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186321
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
    var_20 = ((/* implicit */int) (~(var_5)));
    var_21 &= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((var_15) + (9223372036854775807LL))) >> (((/* implicit */int) var_12)))))))), ((~(var_14)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) (signed char)43);
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((var_1) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_2 [i_1] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)16])))) - (80))))))));
            }
        } 
    } 
}
