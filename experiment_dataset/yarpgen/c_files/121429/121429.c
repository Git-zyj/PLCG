/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = ((~((-1327496417 ? var_9 : var_15))));
            var_19 += arr_6 [i_0 - 1];
        }
        var_20 *= (((arr_5 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : ((2147483647 ? 1 : (arr_2 [i_0 + 1])))));
        var_21 = (max(var_21, 14865733268383905199));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_2] [i_4] [i_2] [i_3] [i_4] = 3581010805325646417;
                        var_22 = ((var_8 ? 3581010805325646388 : ((((arr_18 [i_3 + 3]) ? (arr_13 [i_3] [i_4]) : (arr_6 [i_5]))))));

                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            var_23 = (-(arr_2 [i_2]));
                            var_24 = (arr_19 [i_3 + 2] [i_4] [i_6 - 1] [i_6]);
                            arr_23 [i_2] [i_3 + 2] [i_4] [i_5] [i_5] [i_6] = 14865733268383905228;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 ^= -var_7;
                            arr_27 [i_2] [i_7] = ((4294967295 ? (arr_3 [i_3 + 3] [i_3 + 1]) : 3581010805325646416));
                            var_26 *= (arr_26 [i_3] [i_3] [i_3 + 3]);
                        }
                    }
                }
            }
            arr_28 [i_2] [i_3] = (((!(arr_14 [i_2] [i_2] [i_2] [i_3 - 1]))));
        }
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            arr_31 [i_2] [i_8 - 4] [i_8] = 3581010805325646427;
            var_27 = (max(var_27, 3581010805325646409));

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_28 += (arr_1 [i_8 - 4]);
                var_29 = (((!4095) ? ((((!(arr_10 [i_2]))))) : (arr_13 [i_9] [i_9])));
            }
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            var_30 = (min(var_30, (((0 ? -4694371145468117425 : var_11)))));
            arr_38 [i_2] [i_10] = (~var_14);
            var_31 = (arr_35 [i_2] [i_10]);
            arr_39 [i_10] = (((arr_25 [i_2] [i_2] [i_10] [i_10] [i_10 + 2]) ? (!4089) : (arr_37 [i_2] [i_10 - 1] [i_2])));
            arr_40 [i_2] [i_2] [i_10] = -4095;
        }
        var_32 = (max(var_32, var_3));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
    {
        arr_44 [i_11] = (max((arr_36 [i_11]), -4075));
        arr_45 [i_11] = 14168865963834581995;
    }
    var_33 = ((-(((((-4089 ? -4095 : var_15))) ? 14865733268383905180 : ((min(var_7, var_2)))))));
    #pragma endscop
}
