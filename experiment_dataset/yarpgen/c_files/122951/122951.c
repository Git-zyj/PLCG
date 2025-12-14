/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] &= (max(12828, 127));
        var_11 = (min(var_11, 52707));
        var_12 = (min(var_12, ((min((min((arr_0 [i_0]), var_5)), ((var_3 ? (arr_2 [i_0]) : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (0 ? 0 : -41);
        var_13 += 0;

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            var_14 = 0;
            var_15 &= ((((-(arr_3 [i_1] [i_2]))) > ((((max(var_1, (arr_10 [i_1])))) ^ ((1 ? 1 : 218))))));

            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                arr_14 [i_1] [i_1] [i_1] = (((((((2683 ? 110 : 19707)) & (arr_0 [i_3])))) ? (((((min(var_3, var_2))) > (((arr_10 [10]) ? var_8 : 52715))))) : var_6));
                arr_15 [i_1] &= ((1 && (!0)));
            }
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {

                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_16 = (max(var_16, ((((arr_2 [i_6]) << (var_3 - 1984889929))))));
                        var_17 = (min(var_17, ((var_9 ? (8607 != var_1) : (var_1 % 252)))));
                        var_18 = ((27270 ? 0 : (arr_22 [i_1] [i_2 + 1] [i_4] [i_5 - 3] [i_6])));
                        var_19 *= ((var_7 * (arr_20 [i_1] [i_4] [i_5 + 2] [20])));
                    }
                    var_20 *= (((((-32035 ? 2878250023 : (((((arr_16 [i_1] [i_4 + 1]) <= 663036013))))))) ? ((max(82, (max(12828, var_2))))) : (((min(var_3, var_6))))));
                    var_21 = (arr_16 [i_5] [i_2]);
                }
                arr_23 [i_1] = max((arr_22 [i_4] [4] [i_4 - 1] [i_4 - 1] [i_4]), (-94 * 0));
            }
            var_22 -= (((arr_9 [i_2 - 1]) * ((min(var_4, (arr_18 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]))))));
        }

        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            var_23 = ((186 ? var_9 : (arr_20 [i_1] [i_1] [i_7] [10])));
            var_24 *= ((((((arr_6 [i_7 - 2] [i_7 + 2]) ? var_7 : (arr_6 [i_7 + 1] [i_7 - 2])))) ? (((arr_2 [i_7 - 1]) & (arr_2 [i_7 + 2]))) : var_2));
            var_25 += (arr_5 [i_1] [i_1]);

            /* vectorizable */
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_26 = (min(var_26, (((-(arr_25 [i_8 - 1] [i_7 + 1] [i_7 + 2]))))));
                var_27 -= (31 + var_5);
                var_28 = (max(var_28, (((0 ? 52721 : 2515554919)))));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_29 = (max(var_29, ((min(36, 7)))));

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_33 [2] |= 1361294633;
                var_30 += (((((arr_25 [i_10] [12] [14]) ? 13 : var_6)) <= ((2 ? var_7 : (arr_13 [i_10] [i_9] [i_1])))));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_31 = (((((70 ? (arr_20 [1] [i_10] [i_9] [i_1]) : (arr_21 [i_1] [i_1] [i_1] [20] [i_1] [i_10] [18])))) ? (arr_32 [i_1] [i_9] [i_10]) : (47533 || 85)));
                    var_32 += (arr_36 [i_11] [i_10] [13] [i_1] [i_1] [i_1]);
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_33 *= (max((min((((arr_2 [14]) | (arr_20 [i_9] [i_9] [i_9] [i_12]))), (min(0, 1361294633)))), var_2));
                    var_34 *= (((3026976339 ? 1811439408 : 9597)));
                    var_35 = (max(var_35, ((((((arr_21 [i_1] [5] [i_1] [i_12] [i_12] [i_9] [1]) % (arr_18 [i_1] [i_1] [i_10] [i_1]))) * ((min(779589177, (87 == 16322)))))))));
                }
            }
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                var_36 *= var_6;
                var_37 = ((min((min(-16650, (arr_8 [i_1] [i_1]))), 1749477516)));
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            arr_45 [i_1] [i_1] [6] &= 1;
            var_38 -= 1;
            arr_46 [1] [i_1] [20] = (~0);
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    var_39 = (max(var_39, ((((max(-17260, 22)))))));
                    var_40 = ((((((-2107123831 || 0) ? (arr_44 [i_15]) : ((110 ? 18 : 0))))) ? ((((max(var_2, (arr_8 [i_1] [i_15])))) ? (!var_3) : var_5)) : (((arr_18 [i_15] [i_15] [i_15] [i_1]) << (((arr_10 [i_1]) + 7166))))));
                }
            }
        }
    }
    var_41 = (min(var_41, (((var_3 % (((((var_3 << (((-1013093892 + 1013093895) - 3))))) ? (-17260 ^ var_8) : (((var_7 ? var_0 : var_1))))))))));
    #pragma endscop
}
