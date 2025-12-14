/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 -= 16148409479784744172;
        var_15 = (((((arr_0 [i_0]) && var_10)) ? (arr_1 [i_0]) : var_9));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = var_13;
        var_17 = (max((max((arr_3 [i_1]), var_5)), var_1));
        var_18 = arr_3 [i_1];
    }

    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_19 = (min(var_19, ((min(0, 235678800)))));
            var_20 = (max((arr_8 [i_2 + 1]), (arr_5 [i_2 + 3] [i_2])));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_21 = (min((max(55355, (max(var_8, 16148409479784744189)))), (((((((arr_1 [i_4]) ? 17745 : (arr_11 [i_2])))) ? (arr_9 [i_4]) : (((1862894138713695428 || (arr_2 [i_2] [i_2])))))))));
            var_22 = (max(var_22, (((min((max((arr_1 [i_2]), var_6)), var_2))))));
            var_23 = (arr_6 [i_4]);
            var_24 = ((~((min((!2298334593924807451), 8)))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_25 = ((arr_2 [i_2 - 1] [i_2 + 2]) ? (((((5741316020093517492 ? -1862894138713695428 : var_3))))) : (max((arr_4 [i_2 - 1]), (arr_8 [i_2 + 2]))));

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_26 = ((~(arr_3 [i_2 + 2])));
                var_27 = max((arr_4 [i_2]), (min(1, (arr_14 [i_2 + 1] [i_2 + 3]))));
                var_28 = var_11;
                var_29 = ((((max((arr_18 [i_2 + 1] [i_2] [i_2]), (arr_18 [i_2 + 1] [i_2] [i_2 + 2])))) ? (arr_8 [i_2 + 2]) : var_10));
            }
            var_30 = 1938666707;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_31 = (min((arr_18 [5] [i_7] [i_8]), (max((arr_18 [i_2] [i_7] [i_7]), var_1))));
                        var_32 += (min((((arr_12 [i_2 + 2] [i_2 + 2]) ? (arr_12 [i_2 - 1] [i_7]) : (arr_12 [i_2 + 1] [i_2 + 1]))), (arr_12 [i_2 + 2] [i_5])));
                    }
                }
            }
        }
        var_33 = ((~(arr_15 [i_2] [i_2])));
        var_34 = (max((((~(max(9223372036854775807, var_11))))), (arr_16 [i_2] [i_2])));
    }
    var_35 = -var_7;
    var_36 = ((((2298334593924807444 <= (((max(30228, var_9)))))) ? ((((max(var_12, 8268))))) : var_5));
    #pragma endscop
}
