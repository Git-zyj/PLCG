/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(62, -473227283681802597));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = (min(var_14, var_4));
        arr_2 [i_0] [i_0] = var_5;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_15 = -8772539793475588731;

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_2] [i_0] [i_0] = var_5;
                var_16 = 179;
                arr_9 [3] [i_1 - 2] [i_1 - 2] [i_0] = (arr_3 [i_0]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_0] [i_3] = (arr_6 [i_0 - 2] [i_1 - 1] [i_0 - 2] [2]);
                arr_14 [i_3] [i_0] [i_0] [i_0] = (!4311904093825238033);
                arr_15 [i_3] [i_0] [i_0] [i_0 + 1] = (((((arr_0 [i_3]) ^ 2162306689))) ? var_3 : (arr_10 [i_0]));

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_18 [i_4] [i_0] [i_0] [i_0] = ((-(arr_16 [9] [4] [i_0] [i_0] [i_1] [4])));
                    var_17 = (max(var_17, (arr_5 [i_1] [i_1])));
                    var_18 &= (((~142) ? (var_12 < var_5) : (arr_0 [i_1 + 1])));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        arr_25 [i_0] [1] [i_0] [10] [i_1] [i_0] = (36 ? 8772539793475588731 : 1620652934);
                        arr_26 [i_0] [i_0] [i_0] [i_0] = (((arr_22 [i_0] [i_3] [0] [i_1 - 2] [10] [i_0]) ? (arr_4 [i_0]) : (arr_7 [i_0 + 1] [i_0] [i_0 + 1])));
                        var_19 = (!6242042288224385111);
                    }
                    arr_27 [i_1] [i_0] = 1041057280391134708;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_0] [i_7] = var_11;
                    var_20 *= var_0;
                    arr_32 [i_0] [i_0] = arr_3 [i_0 - 2];
                }
            }
            arr_33 [i_0] [3] = (62029 / 8772539793475588705);
        }
        arr_34 [i_0] [i_0] = (arr_19 [i_0] [i_0] [i_0]);
    }
    var_21 = ((((((min(var_11, var_6))) ? 148 : (min(62044, var_2))))) != ((var_8 ? -var_5 : (max(var_12, var_10)))));
    #pragma endscop
}
