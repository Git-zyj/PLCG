/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (-30304546 >= var_3);

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = 89115304;
                    arr_7 [i_1] = (~((-2147483645 ? -89115305 : -89115305)));
                    var_17 = var_10;
                }
            }
        }
        arr_8 [i_0 - 1] [5] |= ((+((49632 ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 - 1])))));
    }
    var_18 = (min(var_18, ((((((((var_7 ? var_12 : var_1))) ? ((max(var_7, var_10))) : -var_7))) ? 799 : (21456 || 9293)))));
    #pragma endscop
}
