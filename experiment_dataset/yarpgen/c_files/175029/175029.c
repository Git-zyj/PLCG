/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_11, (((arr_1 [i_0] [i_0]) ? (((var_10 ? 3523540040 : (arr_0 [i_0])))) : var_7))));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_15 = var_13;
            var_16 = ((+((~((var_7 ? (arr_1 [i_0] [i_0]) : 50938))))));
            var_17 = ((~(((!(((-49 ? var_1 : var_3))))))));

            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                var_18 += var_2;

                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_19 = (max(var_19, var_0));
                    var_20 = (max(var_20, 14597));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_21 = (max(var_21, ((max((((((24 << (((((arr_8 [10]) + 583102770)) - 24))))) ? ((((arr_10 [i_0] [i_0] [2] [i_2 + 1] [i_2 + 1] [14]) ? (arr_7 [12] [12] [12]) : var_10))) : var_9)), (~3405460449))))));
                        var_22 = (min(var_22, ((((arr_5 [i_2] [i_2 + 1] [i_2] [i_2 + 1]) ? (max((arr_10 [i_3 - 1] [i_3 - 1] [16] [16] [i_1] [i_1]), (max(var_5, -64)))) : var_11)))));
                        var_23 = (24 ? (((var_3 ? (((arr_3 [i_3] [1]) >> (var_7 - 11503973002744459316))) : (~50938)))) : (((arr_6 [i_1 - 1] [i_2 - 3] [i_0]) & (arr_5 [i_0] [i_2 - 3] [i_0] [i_0]))));
                    }
                }
                var_24 = ((1675321324 ? (-32767 - 1) : 231));
                var_25 = (((var_11 & (~var_7))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                var_26 += (~410991806);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_27 = ((0 ? 664472402 : -21895));
                            var_28 = var_13;
                        }
                    }
                }
                var_29 = (((arr_18 [i_0] [i_1] [i_5 + 1] [i_1 - 1] [i_5 + 1] [i_0]) ? (arr_4 [i_0] [i_1] [0]) : var_9));
                var_30 = -var_8;
                var_31 = (((~var_12) ? (~var_12) : (arr_12 [i_1 - 2] [i_1] [i_5] [i_5] [i_5])));
            }
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_32 = (min(var_32, 10126517203285084753));
            var_33 = var_13;
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                var_34 = (arr_10 [i_10 - 1] [i_10] [i_0] [i_10 - 1] [i_10 - 1] [i_10]);
                var_35 = -2089355818;
                var_36 -= var_9;
            }
            /* vectorizable */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                var_37 = (((arr_12 [14] [i_11 + 1] [14] [i_11] [i_11 - 1]) ? (arr_15 [i_11] [i_0] [i_11] [i_11]) : (arr_15 [i_11 - 2] [i_0] [i_0] [1])));
                var_38 = (min(var_38, (((!(((30030 ? 10497223939658242205 : (arr_1 [i_0] [i_11])))))))));
                var_39 = -915391659;
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_40 ^= ((((((arr_11 [14] [i_0] [i_9] [i_9] [i_0] [14]) * (arr_12 [i_0] [i_0] [i_9] [i_0] [3])))) ? var_11 : (((arr_22 [4] [4]) ? -183823493 : (arr_24 [i_0] [i_0])))));
                var_41 = (arr_27 [i_0] [i_12 - 1] [i_12] [i_0]);
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_42 ^= (((arr_1 [1] [1]) < (((arr_24 [i_0] [i_0]) / 14597))));
                var_43 = ((((((arr_8 [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_9] [i_9] [i_0]) : (arr_8 [i_0])))) <= (((arr_23 [i_0] [i_0] [i_0] [i_13]) * (max(var_11, var_10))))));
                var_44 = ((~(((((((arr_1 [i_0] [i_0]) > (arr_29 [i_13] [i_0] [i_0] [i_0]))))) - (var_6 + var_10)))));
            }
            var_45 = var_8;
            var_46 = 3883975478;
        }
    }
    for (int i_14 = 0; i_14 < 0;i_14 += 1)
    {
        var_47 ^= (((((25470 ? 0 : -2062786986))) ? (arr_23 [i_14] [i_14 + 1] [i_14 + 1] [i_14]) : (arr_1 [i_14] [16])));
        var_48 = (min(var_48, ((max(var_12, ((var_5 ? (arr_7 [10] [i_14 + 1] [i_14 + 1]) : (arr_7 [8] [i_14 + 1] [i_14 + 1]))))))));
    }
    var_49 = (max(var_49, var_12));
    #pragma endscop
}
