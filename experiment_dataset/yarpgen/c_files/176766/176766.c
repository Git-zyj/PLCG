/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(var_14, var_10)))));
        arr_3 [i_0] = var_3;

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0 - 1] = (max((max(13384, 134184960)), (arr_2 [i_0] [i_0])));
            arr_7 [i_0] = (min((((-(((!(arr_0 [i_0 - 1]))))))), (max(var_17, (~2)))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_19 = (-(((~0) ? (~-9223372036854775805) : 8473830619664088071)));
            arr_10 [2] [16] &= ((min(2973026370251958809, (-127 - 1))));
            var_20 ^= max(((min((max(var_1, var_8)), (max(var_17, (arr_8 [i_2] [i_0])))))), ((((((arr_4 [6] [i_2]) ? (arr_2 [i_0 - 1] [1]) : (arr_4 [1] [10])))) ? (arr_0 [12]) : (1242698021372745206 - 4294967282))));
            var_21 = (max(var_21, (arr_4 [10] [i_2 - 1])));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((!(((var_15 ? (((((arr_1 [i_0] [i_3 - 1]) && (arr_8 [1] [i_0]))))) : var_4))))))));
            arr_14 [12] [i_3 - 1] |= (17204046052336806410 && 126);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_23 ^= ((!((((arr_13 [14] [i_4] [i_0 + 1]) ? (arr_4 [i_4] [i_4]) : 524287)))));
            arr_18 [i_4] [i_4] &= ((((((arr_12 [i_0] [i_4] [i_0]) * (arr_13 [i_0] [i_4] [0])))) ? var_13 : (var_5 % var_6)));
            var_24 -= (~var_11);
            var_25 *= (((!var_5) ? -var_17 : (arr_11 [i_0 - 1] [i_0 - 1])));

            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                var_26 *= -198;
                arr_21 [i_0] [i_0] [i_0] = var_15;
            }
        }
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_27 = (((((-((-(arr_23 [i_6 - 2])))))) % 17204046052336806399));
                        arr_33 [i_6] [i_7] [i_8] = ((-((max(var_1, var_6)))));
                        arr_34 [i_6] [i_7] [i_8] [i_8] = (max((max(-var_0, (~var_1))), ((min(32885, -1)))));
                        arr_35 [i_6 - 2] [i_6 - 2] [i_6] [i_6] [i_6] [i_7] = ((17204046052336806409 ? 1242698021372745229 : 0));
                    }
                }
            }
        }
        arr_36 [i_6 + 2] [i_6 + 2] = (max(1242698021372745181, -14));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_28 = ((var_16 ? (~-90) : 17204046052336806439));
        var_29 &= (!var_2);
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_30 = ((29486 ? -115 : (arr_29 [i_11] [i_11] [i_11] [i_11])));
        var_31 = ((!((max((arr_17 [i_11]), (~var_11))))));
        var_32 -= ((((((max(var_14, var_3)) * (arr_30 [i_11] [i_11] [i_11] [23])))) ? -var_7 : (arr_39 [i_11] [i_11])));
        var_33 = var_17;
    }
    var_34 = ((((var_7 ? var_17 : var_2))));

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_35 |= (~-var_0);
        var_36 = (min((arr_2 [i_12] [i_12]), ((~((max((arr_19 [1] [1] [i_12] [1]), var_15)))))));
        var_37 = (--1242698021372745204);
    }
    for (int i_13 = 1; i_13 < 20;i_13 += 1)
    {
        var_38 = var_11;
        arr_49 [i_13] = 27739;
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    {
                        var_39 -= ((!(arr_23 [i_14])));
                        arr_59 [i_14] [i_17] [i_16 + 1] [i_16 + 1] = (var_15 >= -65535);

                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            arr_64 [i_14] [i_14] [i_16] [i_17] [i_18] [i_18] &= (arr_32 [16] [i_14] [i_16 - 2] [i_18]);
                            arr_65 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = (((-((~(arr_54 [i_14]))))));
                        }
                        for (int i_19 = 1; i_19 < 16;i_19 += 1) /* same iter space */
                        {
                            var_40 ^= (max(17204046052336806385, -3404));
                            var_41 = ((-(((!(1 % var_4))))));
                        }
                        for (int i_20 = 1; i_20 < 16;i_20 += 1) /* same iter space */
                        {
                            var_42 = (max(var_42, ((((-(arr_67 [i_14] [i_14] [i_14] [i_14])))))));
                            var_43 = (max((max(var_16, ((4028 ? (arr_48 [i_14]) : 18446744073709551615)))), var_2));
                            var_44 = (max(var_44, (!-1242698021372745203)));
                        }
                        arr_70 [i_14] [i_14] = max((~11293), 4294967289);
                    }
                }
            }
        }
        var_45 = (min((~var_5), (((!((min((arr_66 [i_14] [i_14] [1] [i_14] [i_14]), var_6))))))));
    }
    #pragma endscop
}
