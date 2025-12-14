/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_14 = var_9;

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 = ((!63211) - ((max(((max(var_9, 0))), var_5))));
                            var_16 = (min(var_16, ((!((((!var_6) ? (min((arr_2 [i_0] [i_1] [i_2]), var_13)) : -15381)))))));
                        }
                        var_17 = (!-2437409971313754798);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_18 = (((arr_6 [i_0 + 1] [i_0] [i_0 + 1]) ? 0 : (arr_6 [i_0 + 1] [i_0] [i_0 + 1])));
                        var_19 = ((var_7 ? var_5 : (arr_4 [i_0] [i_0 + 1])));
                        var_20 = (((1 == 198) ? var_2 : (((var_7 ? var_0 : var_10)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_21 = ((~(arr_15 [i_6] [i_6] [i_0] [i_0 + 1] [i_0] [i_0])));
                        var_22 = (~var_2);
                        var_23 = ((!var_6) / ((var_6 ? var_13 : -56)));
                    }
                    var_24 = (max(var_24, -1563447191));
                    var_25 = (min(127, 1));
                    var_26 |= (((var_12 * var_0) ? var_5 : var_1));
                }
            }
        }
        var_27 += (max(var_5, -112));

        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_28 = ((((max(26100, (arr_3 [i_8 - 1] [i_8 + 1])))) ? var_11 : (((((~(arr_1 [i_0])))) ? (var_12 & var_11) : ((var_10 ? var_2 : var_11))))));
                            var_29 += ((1 ? (var_1 - 31727) : (((!((min(var_6, 1))))))));
                            var_30 = (max(var_30, (((56 ? 33809 : 1)))));
                        }
                    }
                }
            }
            var_31 = var_8;
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
        {
            var_32 = (var_1 & 216172782113783808);
            var_33 = (max(var_33, (((!(((var_7 ? (arr_7 [i_0] [i_11] [i_0 + 1] [i_11]) : var_4))))))));
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            var_34 = (max(var_34, ((min((~1), 2496036539031340106)))));
            var_35 += 31733;
        }
    }
    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
    {
        var_36 = (!(((-7729901966802413080 ? var_1 : (arr_21 [i_13 + 1] [i_13] [i_13])))));
        var_37 = (i_13 % 2 == zero) ? ((((((~var_4) + 2147483647)) << ((54155202 ? (arr_28 [i_13] [i_13] [i_13] [i_13] [i_13 + 1] [i_13] [i_13]) : (arr_34 [i_13])))))) : ((((((~var_4) + 2147483647)) << ((((54155202 ? (arr_28 [i_13] [i_13] [i_13] [i_13] [i_13 + 1] [i_13] [i_13]) : (arr_34 [i_13]))) - 1)))));
        var_38 += ((-(min((arr_24 [1] [i_13]), var_12))));
        var_39 -= (((((((min(-83565583, -56))) ? ((77 ? 0 : -78)) : 0))) ? 33808 : (~var_1)));
        var_40 = (min(var_40, ((~(+-83565572)))));
    }
    var_41 *= (((((var_7 ? (var_2 - -2047393439) : var_1))) ? var_1 : ((7248459398335884566 >> ((var_2 ? 1 : var_9))))));
    var_42 = (max(var_42, var_2));
    var_43 = (min(var_43, ((min(var_10, (((max(var_11, var_2)))))))));

    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        var_44 += (var_2 ? (~var_1) : (max(var_13, (~33808))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    {
                        var_45 = (min(var_45, 1));

                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            var_46 -= ((~((max(var_9, var_5)))));
                            var_47 = (~31727);
                            var_48 = ((!(((((var_7 ? var_2 : var_9)) * (var_3 - 1))))));
                            var_49 = (min(var_49, (((((-((83565604 ? 0 : 1))))) ? var_4 : ((1 ? ((-83565583 ? 0 : 1)) : 54155202))))));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                        {
                            var_50 = (min(var_50, 1));
                            var_51 = 31732;
                        }
                        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                        {
                            var_52 &= ((var_5 ? (-83565583 <= 1) : (arr_43 [i_14] [i_17 + 1])));
                            var_53 = ((!((!(((var_1 ? (arr_45 [i_14] [i_14] [i_14] [i_14]) : -83565581)))))));
                        }
                    }
                }
            }
        }
        var_54 = (min(12514, ((-1 / (arr_39 [i_14])))));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                {
                    var_55 = (min(var_55, (((8589934591 ? (1824377284719061513 <= 31) : (((arr_40 [i_14]) | var_6)))))));
                    var_56 = ((min(1, 0)) ? (((min(-1, var_13)))) : ((var_2 ? var_12 : (arr_19 [i_22]))));
                    var_57 += (min((min((max(7901748335663219795, 1)), ((min(var_12, 12590))))), (var_0 > var_6)));
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 21;i_23 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 21;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                {
                    var_58 = 0;
                    var_59 = (~((~(min(var_3, -7901748335663219795)))));
                }
            }
        }
        var_60 = (~-7901748335663219815);
    }
    #pragma endscop
}
