/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 ^= var_1;
        arr_2 [i_0] [i_0 - 2] = (arr_1 [i_0 + 2]);
        arr_3 [i_0] = ((max(((((arr_0 [14] [i_0]) <= 24021))), (arr_1 [i_0 - 2]))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1] = 62817;

        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_20 = ((((((arr_14 [i_1]) > (arr_7 [i_1])))) <= var_11));
                var_21 = (((arr_0 [i_2 - 2] [i_2 - 2]) + (arr_5 [i_3] [i_1 + 2])));
                arr_15 [i_1] = (((((1 ? var_5 : (arr_8 [13] [i_3])))) || (((var_2 ? (arr_1 [i_1 + 2]) : 62817)))));
            }
            arr_16 [i_1] = (+-2091802592);
            arr_17 [i_1] [i_2 - 4] = (((arr_10 [i_1 + 1]) >= (arr_10 [i_1 + 1])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_22 [i_1] = (!var_17);
            arr_23 [i_1] = (arr_0 [i_4] [i_4]);
            var_22 = (((arr_14 [i_1 - 1]) - var_13));
            var_23 -= (((((var_17 ? var_10 : 1))) ? -4170 : (var_14 - 7)));
            var_24 = (((arr_1 [i_1]) <= (arr_0 [i_1] [i_1])));
        }
        arr_24 [i_1] = var_15;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_25 = (max((((((((!(arr_25 [i_5]))))) > (min(var_3, var_6))))), var_10));
        arr_28 [i_5] = -var_6;
        var_26 -= ((((min(1, (arr_27 [12]))))));
    }
    var_27 = ((~(((var_7 > ((min(var_4, var_14))))))));
    #pragma endscop
}
