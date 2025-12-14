/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(208, var_8)))));
    var_12 ^= var_10;
    var_13 = (((var_7 << (var_10 >= 18446744073709551615))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] = (min((((max(1, 0)) + 1)), ((min(0, 0)))));
            arr_5 [i_0] [i_1] = ((var_10 == ((min(8191, ((min(var_6, var_8))))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_0] = 0;
                arr_10 [i_0 + 1] [i_0 + 1] [i_1] [1] = 17179869183;
                arr_11 [i_0] [i_0] [i_0] = (var_1 > 68);
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_14 = (max(var_14, ((((min((((var_3 << (var_5 - 3688960167)))), var_1)) % (var_7 != var_8))))));
                arr_14 [i_1] [9] [i_1] [i_0] = var_4;
                arr_15 [i_0] [i_1] [i_3] = 47;
                arr_16 [i_3] = 1374556722632004660;
            }
            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                arr_19 [i_0] [i_1] [i_4] [i_4] = (min(((min((max(29360128, var_4)), 181))), 12967527582235103080));
                var_15 |= var_2;
                arr_20 [i_0] [3] = (((63 * 193) % var_1));
                var_16 = (((max(var_3, 4294967295)) | var_6));
            }
            arr_21 [i_0] [i_0] [i_0 - 2] = (((var_3 != var_2) * ((min((var_10 && 0), 28)))));
        }
        arr_22 [i_0] [i_0 - 3] = (((min(var_5, var_7)) & 94));
        arr_23 [i_0] = ((min(var_1, (min(18446744073709551615, var_7)))));
        arr_24 [i_0] = var_3;
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_17 = 281474976710648;
        var_18 = (5024039376360450437 && 24645);

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_19 = (min(var_19, ((max(((((442474807 >> (3446829236963731237 - 3446829236963731234))))), var_7)))));
            arr_30 [i_5] [i_6] [i_6 - 1] = var_0;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_38 [i_8] [i_8] [i_9] [6] |= (((var_2 >> (var_7 - 1537418023))));
                        var_20 = (386327222 + var_4);
                        arr_39 [i_5] [i_7] [i_8] [i_7] = 1;
                        arr_40 [i_8] [i_8] [i_8] [i_7] [i_8] = (var_7 > 0);
                    }
                }
            }
            var_21 = (min(var_21, 9));
        }
        for (int i_10 = 4; i_10 < 10;i_10 += 1)
        {
            var_22 = (((((((9 * 18446744073709551615) < (var_10 ^ var_0))))) == (max((max(var_7, -6584068119964913536)), ((max(1, var_8)))))));
            arr_44 [i_5] &= 6096797707476047830;
            var_23 = (((min(17072187351077546935, var_4)) * (1 * 10632067955179738858)));
            arr_45 [i_10] = ((((max(var_9, 1))) < ((min(25, (17072187351077546956 || var_9))))));
            var_24 = (min(7814676118529812758, (var_1 & 16124437465136989726)));
        }
    }
    var_25 ^= (min((((var_8 > ((min(var_0, -51)))))), var_1));
    #pragma endscop
}
