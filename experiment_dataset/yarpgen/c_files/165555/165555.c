/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((5 % 60) - -32)) * (((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 1]) % (arr_3 [i_1 + 4] [i_1 - 2] [i_1 + 2])))));
                var_11 = (((arr_2 [i_0]) ? (56 ^ var_5) : (((-32 + 2147483647) << (((((arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 2]) + 71)) - 22))))));
                arr_7 [i_0] [i_0] [i_0] = ((((((arr_5 [i_0]) ? ((((arr_2 [6]) >= -32))) : -72))) ? (((((var_7 ? var_1 : (arr_0 [i_0] [2])))) ? ((max(27, 31))) : (arr_4 [i_0]))) : (min((~-3), (arr_5 [i_1])))));
                var_12 = ((((((var_3 < (arr_3 [i_0] [i_0] [i_0]))) ? ((min(var_2, var_0))) : var_4)) % (((arr_2 [i_0]) ? ((min((arr_0 [i_1] [i_1 - 1]), var_6))) : var_9))));
            }
        }
    }
    var_13 = var_10;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_14 *= (((arr_12 [i_2] [i_3] [i_3]) ? (arr_11 [i_3]) : (arr_11 [5])));
            arr_14 [i_2] = (((arr_9 [i_2]) ? var_3 : (arr_8 [i_2])));
        }
        var_15 = var_1;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_16 = (((var_5 ? var_3 : (arr_16 [i_4]))));
        arr_17 [i_4] = arr_16 [i_4];
        var_17 = (min(var_17, ((min((((((arr_15 [3] [5]) - 37)) * ((max((arr_16 [i_4]), var_6))))), (((((~(arr_16 [i_4]))) <= (var_9 != 90)))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_25 [4] = (min(((((max((arr_22 [14] [i_5] [i_5] [i_6] [i_5] [16]), var_7))) ? (arr_24 [i_4] [11] [11] [i_6] [i_7]) : var_3)), (((arr_21 [i_7]) / -14))));
                        var_18 = ((~(min((arr_18 [16] [16] [i_6]), ((29 ? -59 : -110))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_29 [i_8] [i_6] = arr_23 [i_8] [i_5] [i_6] [9] [i_5] [i_4];
                        arr_30 [i_8] [i_5] [i_5] [i_4] [7] = var_10;
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 17;i_9 += 1)
                    {
                        var_19 ^= var_9;

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_20 = var_2;
                            arr_36 [i_4] [i_5] [i_5] [i_9] [i_10] [i_9] = var_7;
                            arr_37 [i_4] [18] [i_9] [i_4] [i_4] [i_4] = (~var_5);
                        }
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            arr_40 [i_9] [16] [16] [i_9] [16] = (((arr_38 [i_11] [i_9 - 3] [i_6] [5] [i_5] [i_5] [i_4]) ? 14 : var_8));
                            arr_41 [i_4] [i_5] [i_6] [i_9] [i_11 + 2] = ((!(arr_19 [i_9 - 4])));
                            arr_42 [i_4] [i_9] [i_4] [i_4] = ((~((127 ? var_5 : (arr_19 [i_4])))));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            arr_46 [i_4] [i_9] [i_6] [i_9] [i_12] = 85;
                            arr_47 [i_4] [i_4] [0] [i_6] [i_9] [i_12] [i_12] = (((arr_15 [i_9 + 2] [i_9 - 2]) ? -40 : var_0));
                            var_21 = (arr_18 [i_9 - 2] [i_9 - 1] [i_9 + 2]);
                        }
                    }
                    arr_48 [i_6] [i_6] [i_6] = ((+((((min((arr_39 [i_4] [i_4] [i_4] [i_4] [12] [i_6]), var_0))) ? (((arr_34 [i_5]) ^ (arr_38 [i_4] [5] [i_4] [5] [i_4] [i_4] [i_4]))) : ((var_2 ? (arr_39 [i_4] [i_4] [i_5] [16] [i_6] [i_6]) : (arr_20 [i_5] [i_6])))))));
                    arr_49 [17] = (((((-116 ? (arr_24 [i_4] [1] [i_5] [i_5] [18]) : -45))) ? 56 : ((min(-110, 24)))));
                    var_22 = ((((((((var_0 <= (arr_43 [i_4] [i_4])))) > (((var_1 == (arr_34 [i_6]))))))) - ((((min((arr_26 [i_4] [i_4] [i_5] [i_6]), (arr_33 [18] [i_5] [i_5] [i_5] [i_5])))) | ((var_2 / (arr_39 [i_6] [i_6] [i_5] [i_4] [5] [i_4])))))));
                }
            }
        }
    }
    #pragma endscop
}
