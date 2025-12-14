/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = min((((var_14 ? var_6 : 268435424))), 108662028);
                    var_20 = var_16;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    var_21 = max(((~(arr_1 [i_5] [15]))), var_15);
                    arr_15 [i_5] [i_4] [i_3] = (min((~22), var_4));
                    arr_16 [i_5] [i_4] [i_3] |= (-(max(551927826, var_1)));
                }
            }
        }
    }
    var_22 = (-(((var_13 / var_8) ? (var_8 * var_6) : var_0)));
    #pragma endscop
}
