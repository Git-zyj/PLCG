/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -79;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((24 * (1723376893 / 3605712279)));
        var_21 = ((~(max((!2571590395), (((arr_0 [i_0]) ? 206 : -447752139))))));
        var_22 = ((2278994172961156860 ? ((1723376900 >> ((((~(arr_0 [i_0]))) + 3)))) : (((min((241 != 3605712279), var_6))))));
        var_23 = 0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_24 = (min(var_24, 0));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_2] = (((arr_6 [i_2]) >> (((arr_2 [i_1] [i_2]) - 2672442764))));
            var_25 = (((arr_4 [i_1] [i_2]) ? 38 : (arr_8 [i_1])));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] = ((((((arr_2 [i_1] [i_3]) ? 17592186044415 : -161958571))) != (((arr_4 [i_1] [i_3]) ? 447752139 : 14507315091358663861))));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_26 ^= (arr_4 [i_4] [i_3]);
                var_27 = (0 != 16);
                arr_19 [i_1] [i_4] [i_4] = (((0 * 2571590395) >> (-51857 + 51870)));
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_28 = (((206 > 12) ^ -40));

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_29 = ((-(!1)));
                    var_30 = (((arr_14 [i_1]) <= (arr_13 [i_1] [i_3])));
                    var_31 = -3506592863950861290;
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_28 [i_1] [i_3] [i_5] [i_5] = ((~(((arr_7 [i_1] [i_3]) & var_7))));

                    for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_5] [i_3] [i_7] [i_7] [i_8] = (((0 & var_2) ? (202 | 16121585582013304625) : (arr_30 [i_8 - 2] [i_8] [i_8 + 2] [i_8] [i_8] [i_8 + 2] [i_8])));
                        arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] = ((!(((4147590433 ? 2147483647 : 1305474595)))));
                    }
                    for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_32 = (4503599627370495 == 16);
                        arr_36 [i_1] [i_5] [i_5] [i_7] [i_9] = ((!(3 ^ var_3)));
                        var_33 *= (((((~(arr_23 [i_9])))) > (arr_9 [i_9])));
                        arr_37 [i_5] [i_3] [i_9] [i_7] [i_9] = -5;
                    }
                    var_34 = (!-119);

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_35 = (arr_27 [i_1] [i_3] [i_5] [i_7] [i_10]);
                        arr_41 [i_10] [i_5] [i_5] [i_5] [i_1] = (1554211350 != 18003);
                    }
                }
                var_36 -= (3594169918 + 14);
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_37 = 4070797609;
        var_38 |= (((-(arr_38 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
    }
    #pragma endscop
}
