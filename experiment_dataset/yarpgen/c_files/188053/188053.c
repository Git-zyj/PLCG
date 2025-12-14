/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((!(var_9 % var_9))))) == (max(((min(var_9, var_0))), (var_12 % 11400318643426393807)))));
    var_16 = (min(var_4, (~var_14)));
    var_17 = (min((max(((1625161765864323285 >> (var_0 - 23464))), var_1)), var_12));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = ((((min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3])))) + ((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
            arr_6 [i_0] = (max((((arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 1]) % (arr_4 [i_0 - 2] [i_0 + 2] [i_0 - 2]))), (!187)));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 3; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_19 = (arr_10 [i_3] [i_2] [i_2 - 2] [i_2 - 1]);
                arr_11 [i_0] [i_0] [i_3] [i_0] = (((arr_4 [i_0 + 2] [20] [i_3 - 1]) & (arr_4 [i_0 - 2] [i_0] [i_3 - 3])));
                var_20 = (max(var_20, (((((var_12 ? (arr_10 [i_0] [i_2] [i_0] [i_0]) : var_13)) ^ (((-19162 != (arr_0 [i_2])))))))));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
            {
                arr_15 [i_0] = (arr_9 [i_0] [i_2] [i_2 - 2]);
                var_21 = var_10;
                arr_16 [i_4] [i_2] = var_9;
                var_22 = (max(var_22, ((((arr_4 [i_4] [i_2 + 4] [i_4 - 2]) ? (arr_4 [i_0] [i_2 + 4] [i_4 - 3]) : var_2)))));
                var_23 = 38;
            }
            arr_17 [i_2 + 1] = ((((!(((arr_1 [i_0]) && (arr_1 [i_0 + 2]))))) && ((((arr_14 [i_0] [i_2 - 1] [i_2]) ? (((!(arr_8 [i_0 + 3])))) : (!var_6))))));
            var_24 = ((((max(var_9, 16821582307845228330)) & (min(7046425430283157809, 1625161765864323285)))));
            arr_18 [i_2 + 3] [i_2] [i_0] = ((((var_7 ? var_13 : ((~(arr_8 [i_0 - 1]))))) < (var_6 / 2044)));
            arr_19 [i_0] [i_0] [i_0] = ((~(arr_5 [i_0 - 1] [i_0 + 3] [i_0])));
        }
        var_25 = ((~(min(11400318643426393807, -var_5))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_22 [i_5] = (arr_4 [11] [14] [i_5]);
        var_26 = ((arr_8 [i_5]) > 19149);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_27 = (max(var_27, (((((arr_21 [i_6] [i_6]) != 0))))));
        var_28 = (min((var_4 % var_3), ((max(-19162, var_6)))));
        var_29 = ((((arr_2 [i_6]) >= (((arr_25 [i_6]) % var_6)))));
    }
    var_30 = var_1;
    #pragma endscop
}
