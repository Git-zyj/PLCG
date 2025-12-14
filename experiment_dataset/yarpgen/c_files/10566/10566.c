/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_16 ^ (((((-3180560713203332755 ? var_0 : var_14)) < (!var_2))))));
    var_21 = (max(var_21, ((max(((((max(121, var_19))) ? -var_18 : (816462447 >= var_2))), var_9)))));
    var_22 *= ((0 & ((262080 ? 18318957931033726786 : 18318957931033726786))));
    var_23 = (max(var_23, ((-(min((((1 ? var_7 : -1811656198))), ((var_12 ? 24457 : -7832985038046082181))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), ((((max(96, (arr_1 [i_0] [i_0]))) != (~var_4)))));
        var_24 = var_14;
        var_25 = (min(var_25, ((((((-(var_15 || -1)))) - ((~((127786142675824846 ? 2290627219 : -1)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_26 = var_6;
                        var_27 = (min(var_27, ((((arr_11 [i_1]) ? var_13 : var_1)))));
                        var_28 = (--0);

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_4] = var_17;
                            var_29 = (~9254);
                            var_30 = ((var_0 >> (var_1 + 6231188236517036714)));
                            arr_21 [i_1] [i_4] [i_4] [i_4] [i_5] = var_2;
                        }
                        var_31 *= (((1811656203 >= 22) != (~32767)));
                    }
                }
            }
        }

        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_32 ^= var_11;

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_27 [i_6] [16] [i_6 + 1] [i_6] = ((1 ? ((var_8 ? -7832985038046082181 : 23254)) : 0));
                var_33 = (min(var_33, (23254 % 127786142675824829)));
                var_34 = ((!(var_7 <= 20735)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_34 [5] [i_6] [i_7] [i_8] [i_6] = (-3762852286136848396 / -2837580563090565762);
                            var_35 |= (((4253955949 >= var_0) | 18691));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_36 = (~var_0);
            arr_38 [i_1] [i_10] = (((var_9 == 32767) + (~-7832985038046082181)));
            arr_39 [i_1] [i_1] [i_10] = ((1402649594 ? (arr_14 [i_1] [i_10] [i_10] [i_10] [i_1]) : 41011356));
        }
        var_37 = (max(var_37, 41862));
        var_38 = (((17932 != var_10) - (var_17 + 17922)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                {
                    var_39 = var_0;

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_47 [i_11] = 24911;
                        var_40 += (~46845);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_50 [i_11] = (var_5 - 4253955940);
                        var_41 = (max(var_41, (!3680)));
                        var_42 = 31138;
                        var_43 = ((61847 != ((-(-32767 - 1)))));
                        arr_51 [i_1] [i_11] = (arr_37 [i_1] [i_12 + 1] [8]);
                    }
                    var_44 = (var_13 * 68);
                    var_45 += var_0;
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        var_46 = (15 > 305527017);
        var_47 |= ((~(arr_52 [i_15] [i_15])));
        var_48 = (max((1402649593 ^ 0), (max(var_18, (~61847)))));
        var_49 = (((194 >= 13) ? (((max(68, 376314711374966038)))) : ((max(-12452, (((var_19 <= (arr_52 [i_15] [i_15])))))))));
    }
    #pragma endscop
}
