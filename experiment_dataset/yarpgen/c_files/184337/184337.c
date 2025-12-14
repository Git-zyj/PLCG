/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 ^= ((-3565352703 ? (arr_3 [i_0 - 1] [i_0]) : ((729614593 ? 1191298013339902050 : 7112767391548772003))));
        arr_4 [i_0] = ((3565352679 + (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0 - 1] [i_0] [2] &= (((arr_0 [i_0 + 1] [i_0 - 1]) ? ((var_8 ? (arr_2 [i_0]) : (arr_0 [i_1] [i_0]))) : 1));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_12 = ((0 ? 13962760719307805547 : 7112767391548772003));
                var_13 ^= (((((arr_0 [i_0] [i_0]) ? (-2147483647 - 1) : 0)) + (255 - 0)));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_14 [i_0] [i_1] [i_0] = 3565352702;
                var_14 = (min(var_14, 255));

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] [12] = (729614593 + var_1);
                    arr_20 [13] [i_1] [i_0] [i_1] = var_8;

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_15 = (max(var_15, ((((arr_17 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 1]) & 46)))));
                        arr_23 [i_0] [i_1] [i_3] [i_1] [i_5] [4] [i_1] = (3357285323599703552 + var_7);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_16 ^= (arr_13 [i_0 + 1] [i_0 - 2] [i_0 - 1]);
            arr_26 [i_0] [i_0] [i_0] = ((5557635435150882678 ? 18446744073709551615 : ((var_7 * (arr_10 [i_0] [i_0] [i_6] [i_0])))));
            var_17 = (max(var_17, (arr_1 [i_0 + 1] [8])));
            var_18 = (((arr_11 [i_0] [i_6] [i_6]) / (arr_17 [i_0] [i_6] [i_6] [i_6])));
        }
    }

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = ((~((max(12889108638558668938, var_7)))));
        var_19 = (max(var_19, ((((((~((3565352695 & (arr_9 [i_7] [13] [i_7])))))) ? ((max((arr_22 [i_7]), (max(0, 3565352703))))) : (max(18446744073709551615, 10296889555202354960)))))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_20 ^= (((arr_10 [i_8] [i_8] [i_8] [i_8]) & (((((arr_10 [i_8] [i_8] [i_8] [i_8]) & var_1)) & (arr_27 [i_8])))));
        arr_34 [1] = ((~(((~13777130468555532342) >> ((((18446744073709551615 ? 18415838148780016120 : 0)) - 18415838148780016094))))));
    }
    #pragma endscop
}
