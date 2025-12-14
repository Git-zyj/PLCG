/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = ((min(((var_5 ? var_14 : var_10), 8964801553648055345))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, var_9));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (((((!(arr_0 [i_2 - 2])))) | ((((!(arr_0 [i_2])))))));
                }
            }
        }
    }
    var_20 |= (var_0 ? (min(var_15, (min(var_2, var_11)))) : var_12);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_21 = ((~(arr_3 [i_4] [i_3] [i_3])));

                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    arr_16 [i_3] [i_4] [i_3] = (min(-2080, 16));
                    var_22 = (min(16, 6606328571451263642));
                    var_23 = (min((((43 ? 0 : var_8))), (min(-3749217392027694573, 18446744073709551611))));
                }
            }
        }
    }
    #pragma endscop
}
