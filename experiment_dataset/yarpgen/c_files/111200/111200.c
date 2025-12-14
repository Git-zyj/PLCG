/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max((((var_0 > (var_18 + var_19)))), (((((1 ? var_3 : var_18))) ? -var_19 : -var_3)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (min(var_21, (max((((min(14860758228960542, 8817)) / (15728640 && 1))), (!6)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_22 *= (1132247670509845505 + 1);
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (((+(min((arr_0 [i_2 - 2]), (arr_1 [i_0]))))) % (((max((1 != -37), -32760)))));
                }
            }
        }
        var_23 = (((min(((min(var_16, var_13))), (((arr_0 [i_0]) - (arr_2 [1]))))) * (max((!1), (min(18446744073709551615, 13))))));
        arr_8 [i_0] [i_0] = (max(((~(arr_1 [i_0]))), -1));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_24 *= ((arr_9 [i_3]) - 32760);
        var_25 *= (arr_9 [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_26 = var_12;
                        arr_18 [15] [i_4] [i_5] [i_5] = -12;
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] = 1;
                        var_27 = var_1;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_22 [i_7] = (max(6498621021345093811, 1));
        arr_23 [i_7] = (max(((((min(1, var_12)) > (255 / var_8)))), -3693935513901158323));
        var_28 = (min(18014398509481968, 11910905863304687159));
    }
    var_29 ^= min(((max(8296581171987669164, 1))), (max((max(var_10, var_8)), var_1)));
    #pragma endscop
}
