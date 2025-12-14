/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_12, (max(var_1, var_9))));
    var_19 = ((min(var_2, (max(0, var_3)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(1, 0));
        var_21 = (min(1, ((1 ? var_10 : 1))));
        arr_2 [i_0] = 5360772665896827468;

        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_22 = (((max(1, -26))) ? 0 : (arr_0 [i_0]));
            var_23 ^= (arr_4 [6]);
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_24 -= (min(1, (arr_4 [i_0])));
            var_25 = 4294967295;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_26 &= (arr_3 [0] [i_3]);
            arr_13 [i_0] = 526006787;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_27 = (((max(6501185703096891394, 24))) ? (max((max((arr_5 [i_0] [i_4] [3]), 45)), ((max(79, 29296))))) : (((arr_4 [i_4]) | (arr_8 [i_4] [i_4]))));
            var_28 = ((1 ? -23 : 3447860708));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_21 [i_0] [8] [8] = (max(((min(((max(var_13, 1))), 1))), (max(17238, (min(5360772665896827448, 526006790))))));
                var_29 = (min(var_10, 1));
                arr_22 [i_0] [17] = (arr_12 [i_0] [i_0] [i_0]);
                var_30 = (min(var_30, 14));
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_31 = -46;

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_32 = (max(0, (arr_9 [i_0] [i_0])));
                    var_33 -= ((54 ? (max((max((arr_7 [i_6]), 595950816)), ((max(191, 1))))) : (arr_14 [i_6] [i_4] [i_6])));

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_34 -= (max((((max((arr_6 [i_7] [i_4] [i_7]), 18446744073709551598)))), (max((arr_26 [i_4] [i_4] [i_7] [i_8]), (((arr_10 [8] [i_6]) ? 29282 : 13536))))));
                        var_35 = (min((max(526006788, 0)), (arr_6 [i_4] [6] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_36 = (arr_12 [i_0] [i_4] [i_7]);
                        var_37 ^= var_9;
                        var_38 = 4294967277;
                    }
                    var_39 = (((max(((max(65523, var_4))), (min((arr_4 [i_7]), (arr_28 [i_0] [i_0] [i_6] [0] [i_7] [i_0]))))) <= (((max((((arr_18 [10] [i_0] [i_6] [15]) < 19)), 1))))));
                }
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_40 = (max(((var_9 + (((-29297 ? 1 : (arr_26 [i_4] [10] [i_0] [i_10])))))), ((max((min(-46, 1)), 1)))));
                var_41 = 547275032;
            }
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_42 = 4175919025840535365;
                    var_43 ^= (max(((max(17, (arr_26 [18] [i_11 + 2] [i_12] [1])))), (max((max(5, 4323203796140580862)), (min(0, (arr_17 [1])))))));
                }
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        var_44 = var_6;
                        var_45 = (min(1, 1412231840));
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_46 = 9086540543624429679;
                        arr_47 [i_11] [i_0] [i_11 - 1] [i_13] [i_0] = (min((max(1, (min(6166572959835741484, var_8)))), ((((((max(-4, 6624)))) == (arr_44 [1] [20]))))));
                    }
                    arr_48 [3] [i_0] [20] [i_13] = (min(((max((max(var_8, var_8)), (min(74037319, (arr_12 [0] [1] [i_13])))))), 11));
                }
                var_47 = (max(((5360772665896827468 ? 891617369 : var_10)), -1234175197));
                var_48 -= ((53 ? 138166104 : -13994));
                var_49 = ((((min((arr_0 [i_0]), 0))) ? (max((arr_38 [i_0] [i_4] [5] [i_4] [i_4]), (arr_18 [i_4] [i_0] [i_4] [i_0]))) : ((min(65524, 0)))));
            }
        }
    }
    #pragma endscop
}
