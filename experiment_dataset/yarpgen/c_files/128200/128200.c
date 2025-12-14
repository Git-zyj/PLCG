/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = (!18446744073709551615);
                        var_18 = 4044579442898994157;
                        var_19 += (min(((-18446744073709551615 << (((arr_8 [i_3 - 2] [i_2] [i_2] [i_2]) - 2355512121)))), (max(0, 18446744073709551615))));
                    }
                }
            }
        }
        var_20 = var_14;
        var_21 = (max((((65518 - (var_10 * var_0)))), ((17 ? 14789710139848625076 : 5))));

        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            arr_16 [i_0] = (arr_11 [i_0] [i_0] [i_4 + 2] [i_4] [i_4 + 2]);
            var_22 = (min(var_22, ((max(((max(var_0, (arr_7 [i_4] [i_4 - 1] [i_4 + 3])))), (max(0, 1933619465)))))));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_23 = (arr_1 [i_0]);
            arr_21 [i_0] = (max(-1, 0));
            var_24 = (min(var_24, (((18446744073709551610 >> (107 - 50))))));
            var_25 = ((12662222138932385790 & (max((((arr_12 [i_0] [i_5 + 1]) ? var_3 : var_6)), ((18446744073709551615 ? var_6 : (arr_15 [i_0])))))));
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_26 = (min(var_26, 65535));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_27 = (arr_32 [i_8] [i_8] [i_8 - 1]);
                        var_28 = (-127 - 1);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_29 = (max(16731, 3374707381));
            var_30 = (min(var_30, ((min(var_5, 2147483647)))));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_31 = ((((((16 ? 15685653436613854625 : 920259902))) ? (arr_15 [i_12]) : ((274877906943 ? 65519 : (arr_23 [i_12] [i_10]))))));
            var_32 += (3924695572231348469 > ((-(max(0, 0)))));
            var_33 = ((-(0 % 1)));
            var_34 = 40201;
        }
        var_35 = (min(var_35, 2761090637095696988));
        var_36 = (max(((((((arr_33 [i_10] [i_10] [i_10] [i_10] [i_10]) ? 16 : 102))) + var_10)), 1));
    }
    var_37 = ((15685653436613854625 ? 2147483647 : 15685653436613854642));
    var_38 = (min(((-21081 ? 0 : ((2145 ? 29465 : -18704)))), -505604627));
    var_39 = var_12;
    #pragma endscop
}
