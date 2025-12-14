/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (var_9 / 8191);
                    var_16 = (((~((9599263955395293951 ? 13322308640541168299 : -8877470279344908995)))) | var_2);
                    arr_7 [i_0] [12] [i_2] = (i_2 % 2 == zero) ? (((var_2 >> ((((~(arr_6 [i_2]))) + 110))))) : (((var_2 >> ((((((~(arr_6 [i_2]))) + 110)) + 97)))));
                    var_17 += ((var_14 ? ((((min(var_1, 8877470279344908995))) ? ((191 ? var_2 : var_12)) : 8877470279344908992)) : ((((!(!var_2)))))));
                    arr_8 [i_0] [i_1] [i_2] [10] = (arr_3 [i_2] [i_1] [10]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (((~-8877470279344908995) ? 13707799640512238150 : var_8));
        arr_12 [i_3] = (max((((min(8877470279344908995, var_6)) == (max(var_12, (arr_6 [14]))))), (max((var_8 < var_8), (var_11 < var_3)))));
        var_18 = (max(var_14, (192 | -56)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((arr_6 [2]) ? (arr_6 [14]) : var_2)))));
        var_20 = -var_13;
        arr_15 [i_4] = (((arr_9 [i_4]) > 10543620435392206987));
        var_21 = ((8877470279344909019 ? 132 : 8877470279344908994));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_22 = (((((!(((var_8 ? var_3 : (arr_25 [i_7] [7] [9] [i_7]))))))) <= (arr_20 [i_5] [i_6])));
                    arr_27 [i_5] [i_6] [i_7] [i_7] = (max((((var_9 < (((var_14 - (arr_6 [0]))))))), (var_3 * -68)));
                    var_23 = (~32766);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_32 [7] [i_6] [i_7] [i_8] [i_9] = var_7;
                                var_24 = ((~((0 ? 69 : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
