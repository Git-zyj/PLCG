/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((-var_9 ? var_16 : ((var_12 ? var_7 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (max(8410928190877244558, ((((((-(arr_5 [i_0])))) ? ((124 ? 115 : (arr_4 [i_1] [i_1]))) : -68)))));
                var_20 &= (((((((max(var_16, var_9))) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_0])))) % (((arr_3 [i_1]) ^ var_5))));
            }
        }
    }
    var_21 = (var_8 % 72);
    #pragma endscop
}
