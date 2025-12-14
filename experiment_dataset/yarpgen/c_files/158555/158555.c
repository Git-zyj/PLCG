/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, ((min((arr_4 [i_0] [i_0] [9] [i_0]), (arr_5 [i_2] [i_1 + 4] [i_1]))))));
                        var_13 ^= (((((15 && (((-15 ? -15 : 1)))))) >> (((min(1, (~1))) + 24))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_14 -= 53;
                            arr_12 [i_1] [i_1 + 3] [i_1 - 1] [i_4] [i_3] = ((1 ? 4072620877 : 0));
                            var_15 = (arr_3 [i_1 + 1] [i_1 + 3] [i_4 + 1]);
                            arr_13 [i_1] [i_1] [18] [i_1] = ((((var_10 ? (arr_7 [i_0] [i_0] [6] [i_3]) : (arr_7 [i_1] [10] [i_3] [i_1]))) << (((arr_3 [i_0] [i_4 + 2] [i_1 + 3]) - 1040050687))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_16 += ((((max(34284, 1532209812))) ? (max(1, 7980017887267806683)) : (min(((1 ? 1 : (arr_16 [i_0] [i_1] [8] [i_3] [15] [i_0]))), (((var_8 ? -2 : var_8)))))));
                            var_17 += -15012;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_18 = (arr_0 [i_0]);
                            arr_21 [i_1] [i_1] [i_2] [i_3] [i_6] [i_6] [1] = (((((arr_15 [i_1]) ? (arr_15 [i_1]) : 1))) * ((min((arr_8 [i_0] [i_0]), var_5))));
                            var_19 = ((~(((arr_8 [i_0] [i_0]) ? (arr_16 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1 - 1]) : 18446744073709551613))));
                            arr_22 [i_1] [i_1 + 2] [i_1] [i_2] [i_3] [i_6] = -5926512739491669402;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_20 += ((1 == ((576460752303423488 ? -61 : 1))));
                            var_21 = 0;
                        }
                    }
                }
            }
        }
        var_22 = (max((max(var_5, 13422947903234853005)), 1));
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        var_23 = ((18227693398310897287 || (((1 ? (((6159647708412767219 ? 20 : 4194303))) : 17230064972088479483)))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_24 = (min(((((((arr_14 [i_8] [i_8] [i_8] [i_8] [4] [i_8]) || 0)) || (846805740 && 18446744073709551615)))), (max(((var_8 ? (arr_10 [i_10] [4] [i_8] [20] [4] [i_8]) : 4294967295)), (arr_9 [i_8] [i_9])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_25 = (arr_31 [i_8 - 1] [i_9] [10]);
                                var_26 = (min(15942, ((-1642503184657530312 ? (arr_31 [1] [i_10] [i_12]) : (max(8745544270617939849, (arr_5 [i_12] [23] [i_12])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (min(((var_8 ? ((-61 ? var_10 : var_3)) : var_7)), var_11));
    #pragma endscop
}
