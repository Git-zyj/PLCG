/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = ((((((var_13 < var_13) >= (var_4 % var_10)))) == ((23 ^ ((max((-32767 - 1), var_14)))))));
    var_17 = (min(var_17, var_14));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_18 = (((arr_2 [3]) == (898002945765344516 == 1503491526)));
        var_19 ^= ((((((var_2 != (arr_0 [8]))))) / (arr_1 [8] [i_0])));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_20 = (((((arr_6 [i_1] [i_1]) / (arr_7 [i_1] [i_1]))) == (arr_2 [i_1])));
        arr_8 [18] [i_1] = (((arr_2 [i_1]) <= ((((arr_2 [i_1]) >= (arr_2 [i_1]))))));
        arr_9 [i_1] = 18;
        var_21 += (arr_1 [14] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_22 = arr_11 [i_2 + 2];

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_23 = (max(var_23, (arr_16 [i_2 + 1])));
                arr_20 [i_2] [i_2] [i_3] [i_4] = (arr_10 [i_2]);
                var_24 = 64461;
                arr_21 [i_4] [i_4] [i_2 + 1] = 1256700098;
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_25 [i_5] [i_5] [i_2 + 1] = (65533 / 18);
                arr_26 [7] [i_5] [1] = (arr_19 [i_2]);
                arr_27 [i_3] [0] [i_3] [i_3] &= 8119417145072120365;
            }
            var_25 = arr_7 [i_2 + 1] [i_2 + 2];
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_26 = (max(var_26, 71776119061217280));
                        var_27 = (max(var_27, 1028));
                        var_28 *= (54 < 154);
                        var_29 = (max(var_29, (arr_31 [i_2] [i_2] [i_2] [i_2] [6])));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_35 [i_2] [10] [i_2] = 199895831;
            arr_36 [i_8] = ((((2136413881 + (arr_2 [i_2]))) == -103));
            var_30 = 167;
            arr_37 [i_2] [2] [i_8] = (arr_6 [i_2 + 2] [i_2]);
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_31 = ((!(arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
            arr_40 [1] [i_2] [i_2] = (arr_11 [i_2]);
        }
    }
    for (int i_10 = 2; i_10 < 17;i_10 += 1)
    {
        var_32 |= ((+((min((min((arr_2 [13]), var_7)), 1831626659)))));
        var_33 = (arr_2 [i_10]);
    }
    var_34 = var_11;
    #pragma endscop
}
