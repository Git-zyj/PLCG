/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((!146) ? var_9 : (!0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, ((((arr_8 [i_1] [2] [i_2] [i_2]) ? (var_9 <= 9165264570381761837) : -13008)))));
                        var_14 += (~110);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_15 = (((arr_9 [i_5] [6] [i_5 - 1] [i_5 - 1]) ? var_7 : (arr_4 [3] [i_5 - 1])));
                    var_16 &= ((146 ? 126 : (arr_14 [i_4] [i_4 - 1] [i_5 - 1] [i_5])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_17 += (arr_2 [i_0]);
                        var_18 ^= (91 ^ 32755);
                        var_19 &= ((-var_5 - (157 >= 91)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                {
                    var_20 = ((!(arr_7 [i_0] [i_0] [3] [i_10] [1])));
                    var_21 ^= (arr_8 [i_9] [2] [4] [i_10 - 1]);
                    var_22 = var_3;
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_34 [i_11] = (((min(-877516707, (var_2 != var_3))) <= (arr_30 [i_11])));
        var_23 *= (((-1 + 2147483647) << (!var_2)));
        var_24 = ((213 >= (min(-1994715551181416158, 8255448940451397678))));
        var_25 = (min(var_25, (((-(138 > 175))))));
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 12;i_13 += 1)
            {
                {
                    arr_40 [6] [i_12] [i_11] [i_11] &= 146;
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_47 [i_11] [i_12] [i_13] [i_14] [i_15 + 1] = (~(8884 | 63960));
                                arr_48 [i_14] [i_14] [i_13] [i_14] [i_14] = (142 - 9);
                                var_26 *= ((8884 ? -1994715551181416158 : (((~(0 ^ 50209))))));
                                var_27 = (~22725);
                                var_28 = ((+((((((arr_33 [i_11] [i_14]) ? 1 : 4513))) ? (arr_46 [9] [i_14] [i_15]) : (((arr_31 [i_11] [i_12]) ? 146 : var_4))))));
                            }
                        }
                    }
                    var_29 = (2901437477 | 110);
                    var_30 = (min(var_30, (((50209 << ((((arr_31 [i_11] [i_13]) > (var_4 | 2901437477)))))))));
                    var_31 = (arr_30 [i_11]);
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_32 = (-877516715 | -1311584086);
        var_33 = (min(var_33, (((((var_7 ? (arr_49 [i_16] [14]) : ((-877516707 ? 8255448940451397675 : (-32767 - 1)))))) && var_6))));
    }
    for (int i_17 = 1; i_17 < 13;i_17 += 1)
    {
        var_34 = (((arr_50 [i_17]) << (((((arr_46 [i_17] [i_17] [i_17]) ? 146 : 111))))));
        arr_54 [6] &= ((~((((-5187752451612804959 + 561989512) > (arr_36 [i_17 + 1] [i_17 - 1] [i_17 - 1]))))));
        var_35 = (min(var_35, (((((max(9, 45))) ? (arr_43 [i_17] [7] [i_17] [i_17] [2]) : ((-99912007 ? 1729533552 : 0)))))));
    }
    #pragma endscop
}
