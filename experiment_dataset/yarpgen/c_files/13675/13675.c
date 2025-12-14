/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (((((((((var_15 ? (arr_1 [i_1]) : -1))) || (((var_12 & (arr_4 [i_0] [3])))))))) < (max(var_8, 2016))));
                var_20 ^= ((((min((min(4294967295, 28995)), (max(96, var_14))))) ? ((min(26946, 48))) : (((!(arr_1 [i_1]))))));
                var_21 = ((((min(var_15, (128 + 0)))) ? (((arr_2 [i_0]) / var_1)) : ((min(((max((arr_4 [i_0] [i_1]), (arr_3 [i_0])))), (max(var_10, 28672)))))));
                var_22 += ((((3365465837 - (((var_9 ? 32434 : (arr_0 [i_1]))))))) + (max((((2239356797 >> (((arr_4 [i_0] [i_0]) + 90))))), var_5)));
            }
        }
    }
    var_23 = (((-9927 & var_14) ^ (((((var_12 ? var_2 : var_1)))))));
    var_24 += (max(((((var_13 > var_0) < ((max(var_7, var_2)))))), (min((268435328 || 0), var_12))));
    #pragma endscop
}
