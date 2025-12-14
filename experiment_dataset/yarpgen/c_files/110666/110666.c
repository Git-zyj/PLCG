/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(-32767 - 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (~(arr_1 [i_0] [i_0]));
        arr_2 [6] [i_0] = (((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_5 [0] [i_0] [8] = (!7674432548922697128);
            var_21 = (arr_0 [i_0] [i_1 - 1]);
            var_22 = (arr_0 [i_1] [4]);

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_23 = (arr_8 [i_1 - 1] [i_1] [i_2 + 1] [i_0]);
                var_24 = (arr_0 [i_0] [i_1]);
                var_25 = (((arr_8 [i_0] [i_1 - 1] [3] [i_2]) || (((~(arr_4 [i_0] [i_1 + 1] [i_2]))))));
                var_26 = (arr_6 [i_0] [i_2]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_27 = (((((arr_11 [0]) - (arr_7 [i_3] [1] [0] [i_0]))) | ((((((arr_0 [i_1] [i_0]) + 2147483647)) >> (((arr_6 [i_0] [0]) - 19145)))))));
                arr_12 [i_0] [2] [i_0] = (~2988075965947832469);
            }
            arr_13 [i_0] [i_1 - 3] = ((~(arr_9 [i_1] [i_0] [i_0])));
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_28 = (min((arr_17 [i_4] [14]), (min((min((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))), (arr_14 [i_4])))));
        var_29 = ((~(arr_16 [i_4] [i_4])));
        var_30 = (min(((~(arr_17 [i_4] [i_4]))), (min((arr_16 [1] [i_4]), (arr_16 [i_4] [i_4])))));
        var_31 ^= ((((~(arr_16 [8] [i_4]))) / (max((((!(arr_17 [12] [i_4])))), (arr_15 [i_4])))));
    }
    var_32 = ((var_9 <= (max(var_4, (min(var_11, var_4))))));
    var_33 = ((-(var_8 % var_14)));
    var_34 = (max(var_34, ((min((~-var_1), var_3)))));
    #pragma endscop
}
