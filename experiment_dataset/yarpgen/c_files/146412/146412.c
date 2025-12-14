/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 8363974169846819823;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = 2419943759281871242;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] = (!var_6);
            arr_7 [8] [8] = (((-92 + 2147483647) >> (((((var_4 == (arr_5 [12] [17]))) || var_0)))));
            var_12 = (min(var_12, var_6));
            var_13 = var_2;
            var_14 = (max(((~((var_1 ? var_3 : 16)))), (((((arr_1 [i_0]) + var_8)) >> (var_8 - 65)))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_15 = (98 / 16708521323756475519);
                            var_16 = (arr_5 [0] [0]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [1] [i_0] [1] [0] = (((((-52 ? 101 : 155))) - ((1178757702480799816 * (arr_19 [i_0] [i_0] [i_0] [3] [1])))));
                            var_17 = (arr_9 [9] [9]);
                            var_18 = (((arr_5 [i_2] [i_2]) * (arr_5 [i_4 - 1] [i_4 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_19 = (11859179563669513482 || (arr_14 [8] [8] [0] [3]));
                            var_20 = (((((min(60, (arr_21 [13] [12] [4] [12] [12] [12] [4])))) || (((3830714807 ? -23 : 155))))) ? (arr_2 [i_0]) : var_3);
                        }
                        arr_26 [17] [17] [17] = var_5;
                        var_21 = (arr_18 [1] [3] [1] [1] [3]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_22 = var_7;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_23 = (arr_24 [i_0] [11] [11] [i_0] [5]);
                                var_24 = 21678;
                                arr_39 [9] [3] [i_10] [4] [13] [9] [9] = (min(2068931159, -100));
                                var_25 = var_1;
                            }
                        }
                    }
                    var_26 = ((((101 < ((7585404673425967020 ? var_8 : (arr_14 [i_0] [i_0] [i_0] [17]))))) ? (((var_3 == 19217) ? ((((arr_9 [i_0] [i_0]) / (arr_3 [i_0] [i_0])))) : (14231868716686515744 | 8186020789015619746))) : (arr_4 [i_8])));
                }
            }
        }
    }
    var_27 = (((((max(var_0, var_9))) ? var_7 : 14231868716686515744)));
    var_28 = ((100 == ((((49049 - 2869) < ((var_4 ? 17173 : var_0)))))));
    var_29 ^= ((15 ? 464252488 : (min(((min(27911, -2737))), 3023695048))));
    #pragma endscop
}
