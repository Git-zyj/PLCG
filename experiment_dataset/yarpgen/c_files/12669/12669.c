/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (min(-1919396689, -1919396689));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (var_12 & var_14);
            var_15 = -1919396674;
            var_16 = (min(1919396688, (arr_3 [i_0] [i_0] [i_0])));
        }
        var_17 = (((max((1919396690 & 1919396670), (arr_3 [i_0] [i_0] [i_0])))) ? var_7 : (((!1919396688) ? (min(var_5, var_9)) : 1919396688)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_18 ^= var_3;
        arr_8 [i_2] [i_2] = ((arr_1 [i_2] [i_2]) ? var_14 : (arr_1 [i_2] [i_2]));
        var_19 = 1919396676;
    }
    var_20 &= (min((min(((1919396688 ? -1919396674 : var_7)), (min(-1919396694, -1919396689)))), (max(var_0, var_6))));
    var_21 = ((((~(~var_12))) >= (-1919396671 != var_0)));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        arr_20 [i_3] [i_6] = var_12;
                        arr_21 [i_3] [10] [i_6] = var_2;
                        arr_22 [i_3] [i_4] [2] = (((~-1919396689) ? var_3 : (min((min(var_7, var_8)), 1919396688))));
                        var_22 = (max(var_22, (((-var_1 ? (((((min((arr_11 [i_3]), 1919396688)) + 2147483647)) >> (((min(var_6, (arr_19 [i_3] [i_3 - 2] [i_4] [i_3] [i_3]))) - 553749132)))) : (min((arr_18 [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]), (max((arr_13 [i_4] [i_4] [i_4]), 1919396671)))))))));
                    }
                    var_23 = (min(var_23, (min((arr_14 [10]), -1919396680))));
                }
            }
        }
    }
    #pragma endscop
}
