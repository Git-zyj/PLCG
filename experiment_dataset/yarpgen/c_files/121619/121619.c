/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 + 4] = (((!17804) ? (~var_9) : ((8388607 ? (min(-1029756388102063025, 0)) : 21))));
        arr_4 [5] [i_0] = ((min(18446744073709551615, 95)));
    }
    var_12 ^= ((((min((max(var_3, var_4)), -var_9))) && (((var_0 ? var_8 : ((min(var_0, var_4))))))));

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = (min(var_13, ((min((max(-3940674010847888246, -24994)), ((max(var_6, var_9))))))));
        arr_8 [i_1] = (max(var_11, ((-0 ? (~var_10) : var_6))));
        arr_9 [i_1] = ((var_1 ? ((((max(var_2, var_3))))) : (min(var_0, var_10))));
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        arr_14 [i_2] &= (((min((max(var_0, var_7)), var_6))) ? ((max((min(var_4, var_0)), var_0))) : var_3);

        for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_17 [i_2] [i_3] = ((max(((var_6 ? var_6 : var_1)), var_9)));

            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                arr_22 [i_3] = (min(((((var_4 ? var_5 : var_4)))), (min(((var_5 ? var_11 : var_10)), var_11))));
                arr_23 [i_3] [i_4] [i_4] [i_4 - 2] = (((((~((18446744073709551610 ? 1 : 32743))))) ? var_8 : ((min(var_5, var_7)))));
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_14 *= (min((max(-8, -2)), (var_10 <= var_2)));
                arr_26 [1] [0] [8] |= ((((max(var_5, ((min(1, -16)))))) ? (!0) : (max(var_7, (~var_3)))));

                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    arr_29 [i_3] [i_2] [i_3 + 2] [i_5 - 1] [i_6] = (((((var_7 >= (max(var_11, var_8))))) ^ (((!(~var_9))))));
                    arr_30 [i_3] [i_3] [i_5] [i_6] = (((var_5 >> (var_10 - 1613853888543694265))));
                    arr_31 [i_5] [i_3] [i_5 - 1] [i_5 - 1] [i_5] [i_5] = (!var_11);
                }
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    var_15 = (max(var_15, (((min((~var_6), var_4))))));
                    arr_36 [i_2] [i_2] [i_3] [i_2 + 1] [i_2 - 1] [i_2] = ((((var_2 << (var_9 - 3314063269)))));
                }
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_16 -= var_6;
                arr_40 [i_2] [i_3] [i_8] = (((max(-var_0, var_11))) ? ((max((29261 != 2719675824), var_6))) : var_2);
                arr_41 [i_3] [i_3] = ((-(min((min(var_11, var_7)), var_9))));

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_45 [i_2] [4] [i_3] [i_3] [i_3] = (min(var_6, ((((min(var_8, var_9)) != (~var_5))))));
                    var_17 = ((((!((min(var_3, var_7))))) ? (~var_10) : var_9));
                    arr_46 [i_2] [1] [i_3] [1] = var_10;
                }
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                arr_49 [i_2] [i_3 + 1] [i_3] [i_3] = (min(var_2, ((~(~-16)))));
                var_18 = (max(32743, 2719675824));
            }
        }
        for (int i_11 = 3; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_19 = ((var_0 - (min((min(var_9, var_11)), ((max(var_2, var_5)))))));
            var_20 = (((((max(var_7, var_6)))) & var_10));
            var_21 = (max((((var_6 ^ ((var_9 ? var_1 : var_9))))), (min((min(var_3, var_2)), ((var_6 ? var_8 : var_3))))));
            arr_52 [i_2 + 1] [i_2 + 1] [10] = var_8;
        }
        arr_53 [i_2] = (((((min(18446744073709551611, var_3)))) ? ((max(32743, (min(var_5, 7))))) : var_11));
    }
    #pragma endscop
}
