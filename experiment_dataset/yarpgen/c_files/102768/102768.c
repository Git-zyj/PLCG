/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (min((min((max(2987218136912843910, (arr_0 [12]))), 2987218136912843917)), (23211 + 1)));
        var_11 ^= 1569699466155976009;
        arr_2 [i_0] = ((((max((arr_0 [i_0]), ((((arr_1 [i_0] [i_0]) > (arr_0 [i_0]))))))) > (var_2 == 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (max(var_12, (((((((arr_1 [0] [0]) & (arr_3 [6] [6])))) ? (~4294967295) : var_2)))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    {
                        var_13 = 27;
                        var_14 += ((~((-(arr_5 [i_1] [i_2] [i_3])))));
                    }
                }
            }
        }
        var_15 = (min(var_15, (((-var_6 >> (var_1 - 7087971059435762015))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_16 [1] [i_5] = var_4;
        var_16 *= (~0);

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_17 -= ((((75 || (arr_17 [i_5] [4] [i_6]))) || (((~(arr_17 [i_5] [i_5] [i_6]))))));
            arr_20 [i_6] [10] [1] = ((-(arr_8 [i_6] [i_6] [i_5])));
            var_18 = var_9;
            arr_21 [i_6] [i_5] = (((((1 ? (((((arr_9 [i_5] [6] [i_5] [i_5]) && (arr_12 [i_6] [i_6] [4] [i_5]))))) : (min(var_7, var_7))))) || (arr_3 [i_5] [i_6])));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_19 *= (~3111617328769474605);
            arr_25 [i_7] [9] = (arr_14 [i_5] [i_7]);
        }

        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            var_20 -= ((-9 ? 23 : (arr_12 [i_5] [6] [6] [i_8 - 1])));
            var_21 = (max(var_21, ((((((((arr_22 [0] [i_8 + 1] [i_8 - 1]) && -5211817974728650855)))) >= 2987218136912843931)))));
        }
    }
    var_22 = (((var_2 != ((var_1 ? var_0 : 0)))));
    var_23 = (((1 - 41) ? 39189 : ((var_7 ? ((max(118, 5372166314141574083))) : (max(var_6, 16399200036300852357))))));
    #pragma endscop
}
