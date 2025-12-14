/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_13;
    var_18 = (max(var_4, -7291));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_20 ^= ((16634817323372900632 ? ((min(((65535 ? (arr_2 [i_1]) : 1048572)), var_4))) : ((((max(9223372036854775807, 844022694))) ? (min(-6377094089080374431, 65535)) : -32761))));
                arr_4 [i_1] = 1013856534;
                var_21 = (max(var_21, (((((~(arr_3 [i_1 - 2]))) >= (((arr_3 [i_1 - 1]) ? (arr_3 [i_1 - 3]) : var_1)))))));
                var_22 ^= (min(((max((min(1, 2111537079)), ((((arr_1 [i_1]) && 89852659)))))), 2800566185));
            }
        }
    }
    #pragma endscop
}
