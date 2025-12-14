/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((max((~var_4), (((~(arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 3])))))))));
                        var_17 ^= (((arr_2 [i_3] [i_0] [i_0]) ? (!var_7) : ((((max(-7232, var_11))) ? ((var_4 ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0]) : var_2)) : var_1))));
                        var_18 = ((((max((((var_0 && (arr_1 [i_0])))), (((arr_3 [i_0] [2] [i_0]) / (arr_0 [i_0] [i_0])))))) ? ((((((var_11 ? var_8 : var_3))) ? (arr_2 [i_0] [i_0] [i_0]) : var_9))) : (((arr_2 [i_0] [i_1] [i_0]) ? (arr_2 [i_2 - 4] [i_2 - 4] [i_2 - 4]) : (((arr_8 [i_3] [i_1] [i_1] [i_1] [11] [i_0]) + (arr_5 [i_0] [12])))))));
                        var_19 = ((((((arr_4 [i_2] [i_2 - 2]) ? (arr_0 [i_2 - 4] [i_2 - 1]) : (arr_4 [i_0] [i_2 - 3])))) / (max(var_13, (arr_4 [i_1] [i_2 - 2])))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_20 = (8422050125810735659 <= 17503);
            var_21 = (!876175367);
            var_22 = (min(((max(181, -21009))), 0));
        }
        arr_13 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_23 = var_10;
    #pragma endscop
}
