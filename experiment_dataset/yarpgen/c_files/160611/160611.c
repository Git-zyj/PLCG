/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 ? (((((var_17 ? var_14 : 18906)) + (var_18 - var_10)))) : ((var_6 ? (((min(6928, 58607)))) : var_3))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [18] |= ((((max((arr_1 [i_0 + 2] [i_0 - 2]), var_1))) ? ((((var_6 ? var_11 : (arr_1 [i_0 + 1] [i_0 + 1]))))) : var_3));
        arr_4 [i_0] = (17743183245112531786 - 464305374);
        arr_5 [i_0] [i_0] = (max((arr_1 [i_0 - 2] [i_0 + 3]), ((max(58607, 7)))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_2] = (((((~(var_10 ^ var_2)))) && ((min((arr_1 [24] [i_1 + 2]), var_0)))));
                    arr_15 [i_1] [3] [i_2] [i_3] = var_1;
                    arr_16 [0] [i_1] [i_1] [12] |= (arr_11 [i_2]);
                }
            }
        }
        arr_17 [i_1] [i_1 - 1] = var_15;

        /* vectorizable */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            var_20 = ((-(((arr_0 [i_1]) ^ 2108))));
            arr_21 [5] = (3780139253 | 6929);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        var_21 = 1700008138935646576;
                        var_22 = ((10668 && (((var_17 + (arr_8 [12] [i_1 - 1]))))));
                    }
                }
            }
        }
        arr_29 [i_1] = ((((max(var_1, (arr_27 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1])))) ? (min((arr_27 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 3] [i_1 - 1]), (arr_27 [i_1] [15] [i_1 - 2] [i_1 - 2] [i_1 + 3] [i_1 + 1]))) : (63 + var_11)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                {
                    var_23 |= var_13;
                    arr_36 [i_7] [i_8] = (((((-242191314 & (~var_13)))) ? ((((var_17 ? (arr_6 [i_1 + 2]) : (arr_11 [i_8]))) | var_17)) : ((((((2713014917 ? var_8 : var_17))) & (min(var_12, var_13)))))));
                }
            }
        }
    }
    #pragma endscop
}
