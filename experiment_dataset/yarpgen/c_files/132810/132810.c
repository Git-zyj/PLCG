/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((2509743909 ? var_3 : 18395390959700119339))) ? (51353114009432277 >= 5461678733349614900) : (max(0, 18395390959700119339))))) ? var_0 : var_4);
    var_17 = var_8;
    var_18 = var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((arr_0 [i_0 + 2] [i_0 + 2]) ? ((var_14 ? (arr_0 [i_0] [i_0 + 2]) : var_6)) : (var_5 + var_7));
        arr_3 [i_0] [i_0] = ((var_1 * (arr_0 [i_0] [i_0 - 2])));
        var_19 = (max(var_19, (((((var_4 ? var_3 : (arr_0 [i_0 + 1] [i_0])))) ? ((var_9 ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0 + 3] [i_0 - 2])))));
        var_20 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((51353114009432277 ? 57 : 3))) && (((-(arr_1 [i_1 - 2] [1]))))));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_9 [8] |= var_4;
            var_21 = (((arr_7 [i_1 - 2] [i_1 - 2] [i_1]) ? (arr_8 [i_1]) : (arr_7 [i_1 - 2] [i_1 - 2] [i_1])));
        }
        arr_10 [i_1] = ((((((arr_5 [i_1]) ? var_13 : (arr_7 [i_1] [5] [i_1])))) ? (((arr_1 [i_1] [i_1]) ? (arr_8 [i_1]) : var_8)) : (0 != 23228)));
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_22 = ((!(((-(max((arr_12 [i_3]), (arr_7 [i_3] [i_3] [i_3]))))))));
        var_23 = (8888242240722040687 ? 928332161356272106 : 18395390959700119353);
        var_24 &= ((((0 * (arr_11 [2])))) ? (((var_6 ? ((max((arr_7 [i_3] [i_3] [2]), var_11))) : (((arr_5 [i_3]) ? var_11 : (arr_7 [4] [i_3] [4])))))) : (((arr_4 [8]) ? ((var_2 ? var_4 : var_9)) : (max(234, 51353114009432262)))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (max((max((51353114009432277 * -7342410684999431983), ((max((arr_1 [i_4] [i_4]), var_0))))), (max((((var_10 << (((arr_11 [1]) - 47))))), (min(2162206876909097125, 1447677967892773239))))));
        var_25 = var_7;
        arr_16 [i_4] [i_4] = max((min(((max(var_2, 491010065967422121))), (((arr_5 [i_4]) ? var_13 : (arr_12 [i_4]))))), (arr_12 [i_4]));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_26 = ((var_14 ? (arr_14 [i_5]) : var_14));
        arr_19 [i_5] [i_5] = (((((9244916915282474849 << (9223371761976868864 - 9223371761976868845)))) ? 1447677967892773221 : (arr_18 [i_5] [i_5])));
        var_27 = ((var_0 ? ((var_12 ? (arr_13 [i_5]) : (arr_17 [i_5]))) : (((arr_7 [i_5] [i_5] [i_5]) ? var_10 : (arr_12 [i_5])))));
    }
    #pragma endscop
}
