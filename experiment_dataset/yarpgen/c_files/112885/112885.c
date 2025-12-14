/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 ? ((var_1 ? ((max(var_8, var_7))) : (~var_6))) : var_1));
    var_15 = (min(var_15, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [1] = (min((((var_0 ? (arr_8 [i_2] [i_1] [i_0]) : var_8))), ((((max(var_11, var_7))) ? var_9 : (arr_4 [i_1])))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_16 = max(1, (((!(arr_2 [i_2])))));
                        arr_13 [i_2] [i_2] = (max((min(var_4, ((var_11 + (arr_3 [7] [i_1]))))), ((min(0, 8)))));
                        var_17 = ((((((var_0 == (arr_6 [i_0] [i_1] [14]))))) / (arr_8 [i_0] [i_2] [i_3])));
                        arr_14 [i_2] [i_0] [20] [i_3] = (arr_11 [i_3]);
                    }
                }
            }
        }
    }
    var_18 *= (1 << 1);
    #pragma endscop
}
