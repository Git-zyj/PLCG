/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = 671654982;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = -2139186191;
            arr_6 [i_0] [0] [i_1] = 511;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_11 = -1345252133;
                arr_11 [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1] = 4111;

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_12 = -1;
                    var_13 = 1496353543;
                }
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    var_14 = 290706344;

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_19 [i_0] [i_2] [i_3] [6] [1] = 10431;
                        var_15 = 3072;
                        arr_20 [i_0] [i_2] [i_2] [1] [0] [i_5] [i_6] = 2199006478336;
                        arr_21 [i_6] [i_5] [i_3] [i_0] [i_0] &= 127;
                    }
                    arr_22 [i_5] [i_5 + 1] [i_0 + 2] [i_2] [i_0 + 2] = 9338242280549245059;
                    var_16 = 10319152182247329238;
                    var_17 = 119;
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    arr_27 [i_0] [i_2] [3] [i_7 - 1] |= 1861010861;
                    var_18 = 1008;
                }
                arr_28 [i_0] [i_0] [7] [i_0] = 11860961770089419292;
            }
            arr_29 [i_0] [i_2] [i_2] = -1720088397;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_19 = 186;
            arr_34 [i_8] [i_0] = 18446744073709551615;
            var_20 = 83540271;
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            arr_37 [i_0] [i_0] [7] = 127;
            var_21 = -1;
        }
        arr_38 [i_0] = 10784;
    }
    var_22 = var_7;
    var_23 = var_5;
    #pragma endscop
}
