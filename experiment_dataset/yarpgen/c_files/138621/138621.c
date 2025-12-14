/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((max(var_13, 1))))) <= (max(var_6, (1 - 3200893010941529969)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (((((-((1586444926 ? (arr_0 [i_0]) : var_16))))) ^ (((-(arr_3 [i_0]))))));
                var_20 ^= (max(((((arr_2 [i_1] [i_1]) && (arr_2 [i_0] [i_1])))), 198));
                var_21 = ((((arr_1 [i_0]) % (arr_1 [i_0]))) + (var_1 / 34468));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_4] [i_4] &= ((((var_8 > (arr_12 [i_4] [i_4] [i_3] [i_2]))) ? ((((arr_12 [i_2] [i_3] [i_4] [i_4]) && var_15))) : ((((arr_1 [i_3]) > 3200893010941529969)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_18 [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] = (((((1 ? var_13 : var_9))) ? ((334245212 ? 2649112754775762898 : 11496978282598154611)) : 9));
                        var_22 &= ((662341331 ? (~var_5) : (arr_1 [i_4])));
                        arr_19 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = ((var_16 ? -var_10 : 2));
                    }
                    var_23 -= -var_12;

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_22 [i_2] [2] [i_4] [i_3] = (~-23);
                        var_24 = (max(var_24, ((max(((((var_14 % var_5) != ((max(var_9, (arr_2 [1] [1]))))))), (((arr_0 [i_2]) ? 1 : -var_0)))))));
                        var_25 = ((((max(-23, 255))) % var_9));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        var_26 -= (((var_16 ? var_1 : var_5)));
                        arr_25 [i_2] [i_3] [i_2] [7] = -3200893010941529971;
                        arr_26 [i_3] [i_4] [i_3] [i_3] [i_3] = (((arr_11 [i_3] [i_7 - 1] [i_7 - 1] [i_7 + 2]) ^ (arr_10 [i_7 - 1])));
                    }
                }
            }
        }
    }
    var_27 = (~2649112754775762895);
    #pragma endscop
}
