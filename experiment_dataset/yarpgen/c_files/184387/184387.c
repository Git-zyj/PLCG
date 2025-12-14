/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (min(1, 6401178343496262886));
                    var_11 = (((((-(255 != var_9)))) ? ((((((var_0 ? (arr_3 [i_0]) : var_0))) ? (((arr_4 [i_0] [i_1 + 1] [i_1 + 1]) | var_3)) : var_9))) : (max(23, (((-(arr_4 [7] [i_1] [i_2]))))))));
                    arr_10 [i_2] [18] [i_1] [i_2] = var_0;
                    var_12 = var_1;
                }
            }
        }
    }
    var_13 = ((((!(!0))) && (1 && 65516)));
    var_14 |= -var_6;
    var_15 = (max(var_15, (((var_6 ? var_9 : ((1 ? 917390728 : 2659181241)))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_16 = (~511);
                var_17 = (max(var_17, (arr_2 [i_3] [i_3])));
            }
        }
    }
    #pragma endscop
}
