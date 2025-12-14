/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_4] [i_4] [i_3] = ((4033724166756111192 ? (((arr_1 [i_1 - 2]) + var_5)) : (((+(((arr_7 [i_2] [i_2] [i_2]) ? 53 : 2145386496)))))));
                                arr_14 [i_1 + 1] = (--15748644);
                            }
                            var_11 ^= (((arr_9 [i_0] [i_1] [i_0]) ? (((((var_8 ? 0 : (arr_6 [i_0 - 1])))) ? ((18446744073709551615 ? (arr_10 [i_3] [i_0] [i_0] [i_0]) : var_10)) : var_10)) : ((((!(arr_2 [i_1 - 1] [i_3])))))));
                            var_12 = var_3;
                            arr_15 [i_2] [i_1] [i_0] = (!(((((-1299171566897574248 ? 118 : (arr_8 [i_3] [i_2] [2] [i_0]))) & (arr_0 [i_0])))));
                        }
                    }
                }
                var_13 = (((7 % -4602) ? (((var_8 + (arr_5 [i_0 - 1] [i_1] [i_1])))) : ((-(((arr_7 [i_0] [i_1] [i_1]) ? (arr_3 [i_0 - 1] [i_1] [i_1 - 1]) : var_4))))));
                var_14 = (max(var_14, (arr_1 [i_0 - 1])));
            }
        }
    }
    var_15 = var_8;

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_16 = (min(var_16, -7));
            arr_23 [i_6] [i_5] = (max((arr_5 [i_6] [i_6] [i_5]), (((arr_10 [i_5] [i_5] [i_6] [i_6]) & (arr_5 [i_6] [i_6] [i_5])))));
            var_17 += (max(var_3, ((((((arr_6 [i_5]) == var_10))) % var_5))));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_18 = (max(var_18, var_3));
            var_19 = (min(var_19, var_4));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_36 [i_8] [i_8] &= ((!(arr_6 [i_8])));
                            var_20 = (max(-4626, (arr_20 [16])));
                            arr_37 [i_9] [i_9] [i_10] = (-1423443196 & 1);
                            var_21 = ((-4602 & var_9) + (arr_31 [i_5] [i_5] [i_5] [i_10]));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_22 = (max(var_22, -4004890450));
            arr_41 [i_5] [i_5] = ((-((+((var_7 ? (arr_33 [i_5]) : (arr_24 [i_5] [i_5])))))));
            arr_42 [i_5] [i_5] = ((((max(var_10, (arr_7 [1] [i_11] [i_11])))) ? ((22 ? 9026269266214507831 : -4603)) : ((((!(~1)))))));
            var_23 = var_6;
        }
        var_24 = (~255);
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_25 = (min(var_25, ((((max(511, (max(-4626, -1025109052)))) ^ (((arr_10 [i_12] [i_12] [i_12] [i_12]) ? ((max((arr_33 [i_12]), -19))) : 120)))))));
        arr_47 [i_12] = (min((((((3 ? 68 : (arr_6 [i_12])))) | (max(41, 3685943111755348500)))), (var_10 + 28)));
        arr_48 [i_12] = var_6;
        var_26 = (min(var_26, ((((arr_8 [i_12] [i_12] [i_12] [i_12]) + (min((arr_5 [i_12] [i_12] [i_12]), var_9)))))));
    }
    #pragma endscop
}
