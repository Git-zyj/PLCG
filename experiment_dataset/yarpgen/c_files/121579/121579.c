/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] = ((((max((arr_11 [i_0] [1] [0] [i_3] [i_3] [2]), (arr_10 [i_0 + 1] [i_1 - 1] [i_2] [i_3])))) ? (max(var_2, 109)) : (arr_1 [i_0 - 1])));
                            var_10 = (min(var_10, (((65529 ? (((arr_9 [i_0] [i_1 - 3] [i_0] [i_0 - 2]) ? (arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : 65529)) : 44316)))));
                            var_11 = ((((max(16288275391051479618, (min(44313, -125))))) != var_3));
                            var_12 *= ((-var_0 * (arr_9 [i_0] [i_0 - 1] [i_0] [i_0])));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_20 [2] [i_1] [i_0] [i_1] [i_0 + 3] [2] |= ((var_1 ? var_5 : (arr_9 [i_0] [1] [0] [i_0 + 2])));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((((((arr_7 [i_0] [i_0]) ? var_2 : var_5))) ? -51 : (max(var_0, -1970184458))))), (max(var_1, (max((arr_7 [i_1 - 2] [i_4]), 21219))))));
                        var_13 = (max(var_13, ((((arr_9 [i_0] [i_1] [i_4] [i_4]) < (((((max(2147483647, var_0))) ? (((!(arr_1 [i_5])))) : ((21220 >> (var_6 + 24779)))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] = min((max(((min(44329, var_9))), ((17627 ? 27 : var_5)))), (((21219 ? (max(44301, 1270102546)) : (var_5 / 1)))));
                                var_14 = (!(arr_3 [i_0]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((min((max((arr_24 [i_1] [0] [i_1 - 2] [i_4 - 3] [i_4 - 3] [i_8 - 2]), var_8)), ((max(var_4, (var_3 + 110)))))))));
                                var_16 = ((((((-117 + 50331648) * -123))) ? (((0 ? 1 : (arr_8 [i_4 - 2] [i_4 + 2] [2] [i_4 - 2] [i_4 - 2] [i_4 + 2])))) : -var_7));
                                var_17 = ((max(var_2, (arr_31 [i_9 - 1] [i_8 - 1] [i_4 - 3] [i_0 - 1] [1]))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_18 = var_5;
                    arr_34 [i_0] [i_0] [i_0] = (!var_4);
                    arr_35 [i_0] [i_0] [i_0] = (arr_9 [i_0] [8] [1] [i_10]);
                }
            }
        }
    }
    var_19 = (max(((max(var_1, var_7))), (((max(var_1, var_4))))));
    #pragma endscop
}
