/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = ((((max((-5091875467533034601 == var_2), (arr_1 [i_0])))) % (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((arr_1 [i_2]) ? (!var_5) : (arr_4 [i_0 - 1] [i_0 - 1]));
                    arr_7 [i_2] = ((((-1401750243 ? var_8 : ((12 ? var_1 : var_5)))) * ((((min(23527, (arr_6 [i_2] [0] [i_0]))))))));
                    arr_8 [9] [2] [2] [i_2] = (((!var_2) >> (((!(arr_4 [i_0] [7]))))));
                }
            }
        }
        arr_9 [1] = ((25129 ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 0));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_14 [i_3] = 55647324569241327;
                    var_13 = (min(var_7, var_8));
                    arr_15 [i_3] [i_3] [i_3] = (((((1413 ? ((min(3794377761, 1))) : var_6))) ? (((((8191 ? -1 : (arr_10 [3] [i_3]))) - ((-1334195266 ? -1334195268 : -1415))))) : (max(-1415, 1289827670))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_6] [1] [i_5] = var_10;
                    arr_23 [1] [9] [i_5] = ((-1426 ^ var_1) ? ((((((var_10 ? 36028794871480320 : (arr_4 [i_5] [i_6])))) ? ((((arr_0 [i_5] [i_5]) >= var_3))) : (((127 <= (arr_3 [i_7] [1] [i_7]))))))) : var_1);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_14 = (((((arr_2 [i_9 + 4] [6]) == 142)) ? (max((arr_20 [i_8] [4] [i_6]), (arr_27 [i_8] [4] [1] [i_6] [i_8]))) : (arr_18 [5] [i_7])));
                                var_15 = (min(-23992, -var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
