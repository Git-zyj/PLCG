/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_5 + 9223372036854775807) << (((var_2 + 83) - 63))));
    var_11 ^= ((1 ? -7819921932176492725 : -8391202300568301228));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((!39) ? -12051364172298920129 : (!20)))) ? ((var_3 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : ((((!(arr_1 [10])))))));
        var_12 ^= var_7;
        var_13 = (arr_0 [i_0]);
        var_14 ^= var_5;

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_15 = (min((((arr_1 [i_1 + 2]) << ((((arr_3 [i_0] [2] [i_1]) <= (arr_4 [i_1] [i_0])))))), (min((max(var_8, 12051364172298920125)), 1))));
            var_16 ^= -var_1;
            var_17 ^= (min((max(var_5, var_3)), (arr_0 [i_1 + 2])));
            var_18 ^= ((var_1 ? ((6395379901410631491 / (~7819921932176492750))) : ((227 ? var_7 : 38386))));
            var_19 = -1;
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_4));
        var_21 = (arr_3 [i_2] [4] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 ^= ((~((var_2 ? 6395379901410631487 : var_5))));
                            arr_17 [i_3] [i_3] [i_3] [i_5] [i_6] [i_6] = ((~(arr_5 [i_3 - 1] [i_4 + 1])));
                        }
                        var_23 ^= ((~(arr_6 [i_4 - 2])));
                        var_24 ^= (((!var_3) != (arr_11 [i_2] [i_2] [i_2] [i_2])));
                        arr_18 [i_2] [i_3] [i_4 + 1] [i_3] [i_5] = ((arr_1 [i_3 + 1]) ? (((arr_12 [i_2]) ? var_8 : (arr_5 [i_4 - 2] [i_2]))) : var_5);
                    }
                }
            }
        }
        var_25 = var_8;
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] = (arr_0 [i_7]);
        var_26 ^= (((((((arr_10 [i_7]) ? (arr_10 [i_7]) : var_1))) ? ((var_8 ? var_5 : var_9)) : (((max(var_4, var_4)))))));
    }
    #pragma endscop
}
