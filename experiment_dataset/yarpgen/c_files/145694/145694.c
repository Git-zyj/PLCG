/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((-21138 ^ var_11) - ((var_8 ? var_4 : 1117103813820416))))) ? ((~(max(17855165322344706561, var_8)))) : (((-var_4 ? -var_5 : (var_4 >= -14176))))));
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 *= 17;
                arr_6 [i_0] |= (max((!27), (arr_3 [i_0] [i_0])));
                var_18 |= (((var_2 ? var_3 : (arr_4 [i_0]))));
                var_19 = (max(var_19, -9223372036854775787));
            }
        }
    }
    #pragma endscop
}
