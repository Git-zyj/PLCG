/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 = (var_2 | var_3);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = (max(var_12, (arr_2 [4] [4] [i_1])));
            var_13 = (max(var_13, (((!((((arr_3 [i_0] [i_1]) ? 63083 : -31013))))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 *= (!11435);
            var_15 ^= max(-1, 969782650522044225);
            var_16 += ((!(((1459411314 >> (((arr_4 [i_0 + 1]) - 5630697290894982897)))))));
            var_17 = -3640112079390598066;
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            arr_11 [i_0 - 1] [i_0 - 1] [i_3] = 2365378351;
            var_18 -= -1;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_19 &= 1;
            var_20 |= ((40 ? (((arr_8 [i_0 + 2] [i_0 + 1]) ? -8314 : 8)) : (!-5107291039187002844)));
            var_21 = 8306;

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_20 [i_0] &= (1 ? -24543 : (17240555779967389972 * 27));
                    var_22 = 125;
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_26 [i_0 + 2] = (min(1148417904979476480, 4194296));
                        var_23 += ((!(arr_18 [i_8])));
                        var_24 = (max(var_24, (!var_1)));
                        var_25 = ((~(!-30)));
                        var_26 -= -12;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_29 [i_5] [i_5] = 96;
                        var_27 = (min((min(17240555779967389972, -1)), -8));
                        arr_30 [i_7] = (min((arr_28 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]), (arr_28 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 2])));
                    }
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        var_28 = var_4;
                        arr_34 [i_0] [i_10] [i_4] [i_4] [i_4] [i_7] [i_10] = (arr_13 [i_7] [i_0 - 1]);
                        var_29 += arr_13 [i_4] [i_5];
                        var_30 = ((-(4922159349928937449 == 82)));
                    }
                    var_31 = (arr_1 [i_0 - 2]);
                }
                for (int i_11 = 4; i_11 < 11;i_11 += 1)
                {
                    arr_38 [i_0] [i_0] [i_5] [i_0] [i_0] [i_11] = (!17828982543592833840);
                    var_32 = (min(var_32, ((((var_5 + var_7) > (max(20555, -6395)))))));
                }
                var_33 = (min((min(-2, ((4294967295 ? -24 : -1)))), -22909));
            }
            var_34 = 9867651187121437716;
        }
        var_35 = (arr_25 [12] [12] [i_0 + 2] [i_0] [i_0] [6] [i_0]);
    }
    #pragma endscop
}
