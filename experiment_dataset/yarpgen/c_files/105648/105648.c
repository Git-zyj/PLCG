/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2 - 2] = var_7;
                    var_18 += (((((arr_2 [i_0] [i_1]) <= (arr_2 [i_1] [i_2 - 1]))) ? (min(-1572085862076035736, (min(5311791148204546053, (arr_8 [i_1] [i_1] [i_0]))))) : ((max(-var_12, ((min(var_15, var_11))))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [4] [i_3] [i_3] [i_1] = (max((min((((1352088731 ? 908205727 : var_15))), 5311791148204546053)), var_0));
                        arr_14 [i_0] [i_1] [i_1] [i_0] = (max(((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))), (max((max((arr_0 [i_0] [i_1]), 1)), (((var_0 ? (arr_6 [i_1] [i_2 - 2] [i_1] [i_1]) : 10)))))));
                    }
                }
            }
        }
        var_19 = (((((arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? var_8 : (arr_8 [i_0] [i_0 - 2] [i_0 - 2]))) << ((min((arr_8 [i_0] [i_0 - 2] [i_0 - 2]), (arr_8 [1] [i_0 - 2] [i_0 - 2]))))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_17 [i_4] = (min(((!((((arr_15 [i_0] [i_0] [9]) ? -11 : 10))))), ((var_5 < ((max((arr_10 [i_0 - 2] [12] [i_4] [i_4]), 76)))))));
            var_20 = 682078586;
            var_21 = 2276946107776733006;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_22 = ((var_15 ? 1483428735 : 1));
            var_23 = (min(var_23, -77));
            var_24 ^= 81;
            var_25 = var_14;
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_26 += ((((max((max((arr_11 [i_6] [7]), 536870911)), (((var_6 ? (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 + 1]) : 1)))))) && (((((var_10 ? 32768 : 32)) ^ (arr_4 [i_6 + 1] [i_6 + 1] [i_0]))))));
            var_27 = (min(var_3, ((((arr_1 [i_6 + 1]) ? (arr_16 [i_6 - 1]) : (min(-621411101, 5581587459274526668)))))));

            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_28 = var_5;
                    var_29 = (min(var_29, (((((((min((arr_26 [i_0] [13] [13]), var_0))))) & 11273875466266305287)))));
                    var_30 = ((var_9 * (((+((0 ? (arr_1 [0]) : (arr_16 [i_6 - 1]))))))));
                    var_31 += ((var_4 ? var_7 : ((var_0 ? var_7 : (arr_7 [i_8] [i_8] [i_6 - 1] [i_6])))));
                    var_32 = ((max(var_1, 134217727)));
                }
                var_33 += (arr_12 [i_7] [12] [i_0] [i_0] [i_0]);
                var_34 = (min(var_34, ((((var_9 | (arr_22 [20] [i_7 - 1] [i_6 - 1])))))));
                var_35 ^= (min(3396868609824763228, ((min((arr_16 [i_0]), ((((arr_22 [i_0] [i_6] [i_6]) ^ var_15))))))));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_36 = (((arr_26 [1] [i_0 - 2] [i_6 - 1]) ? ((max(1, var_2))) : (arr_8 [i_6 - 1] [i_6 + 1] [i_0 + 1])));
                var_37 = (arr_15 [i_0 - 1] [4] [i_0]);
                var_38 = ((!(max((arr_20 [i_0 - 2]), (arr_20 [i_0 + 1])))));
            }
            var_39 -= 72;
            arr_31 [i_0] [i_0] = (((((arr_11 [i_6] [i_0 - 2]) ? var_3 : 1))) ? -1537544437 : (arr_11 [i_0 - 1] [i_6]));
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_40 ^= ((!((((arr_15 [i_0] [i_0 - 1] [i_0 + 1]) ? (arr_15 [i_0 - 2] [i_10] [i_10]) : (arr_15 [i_0] [i_10] [i_0]))))));
            arr_34 [i_0] [i_0] &= (2296920200 * 36643);
            arr_35 [i_10] = ((!(((var_10 ? -var_6 : (arr_6 [i_0] [1] [i_10] [i_10]))))));
            var_41 = ((var_1 != (min((arr_10 [i_10] [i_10] [i_0] [i_0 - 2]), (~var_6)))));
        }
        arr_36 [i_0 - 2] = ((((((arr_10 [i_0] [i_0] [i_0] [i_0]) >> (((max(536870911, var_13)) - 536870884))))) ? var_9 : var_1));
    }
    var_42 = (max(var_16, ((((var_14 ? 20083 : 10))))));
    #pragma endscop
}
