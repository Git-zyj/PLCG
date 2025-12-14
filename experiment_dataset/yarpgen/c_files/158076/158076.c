/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_18 ^= ((~((~((max(var_5, -28844)))))));
            var_19 *= var_6;

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_20 &= min((((arr_6 [i_0] [10] [i_0] [i_0]) ? (arr_1 [i_0]) : var_8)), ((((var_12 << (((arr_6 [i_0] [i_0] [i_1] [16]) - 208)))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_21 &= ((((((arr_14 [i_0] [i_1] [i_2]) ? (arr_14 [i_0] [i_2] [i_4]) : (arr_14 [i_2] [i_3] [8])))) ? ((((-1170994296 ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]) : var_14)))) : (arr_0 [i_0] [9])));
                            var_22 = ((65535 ? (!112) : 28844));
                        }
                    }
                }
                var_23 = (var_1 ? (max(-112, ((min((arr_7 [i_2]), (arr_15 [i_2] [i_0] [i_0])))))) : (~1170994296));
                arr_17 [i_2] [i_2] [i_2] = (!var_13);
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_24 = ((((var_9 ? var_9 : ((max((arr_2 [i_0] [i_1] [i_5]), (arr_6 [i_0] [i_0] [i_5] [i_1]))))))) & (max((((!(arr_19 [i_0] [i_1])))), (max(1170994295, (arr_8 [i_0]))))));
                var_25 = (max(var_25, (min((((((-(arr_5 [i_0])))) ? -112 : (arr_18 [0] [5]))), ((((arr_6 [i_5] [i_1] [i_1] [i_0]) ? (arr_6 [i_0] [i_1] [i_5] [i_5]) : (arr_6 [i_0] [i_1] [i_1] [i_5]))))))));
                var_26 ^= ((!(((-(arr_3 [i_1]))))));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_27 = var_1;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_32 [i_0] [i_6] [i_6] [i_7 + 1] [i_8] = (max(var_12, (arr_15 [17] [i_7 + 1] [i_8])));
                            var_28 = ((-(arr_19 [i_7] [i_7 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_29 = (!121);
                            var_30 |= (max(((min(((!(arr_26 [i_0] [i_6] [i_9] [i_10]))), ((!(arr_22 [i_10 - 3] [i_1] [i_10 - 2])))))), ((-(arr_27 [i_0] [i_0] [17])))));
                            arr_37 [i_0] [i_6] [17] [i_9] [i_10] = (max((max((var_10 % var_1), (((arr_24 [i_0] [i_0] [i_6] [i_9 - 2]) ? var_2 : -113)))), var_9));
                            var_31 = (52378 != 0);
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_32 += (~-113);

            /* vectorizable */
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                var_33 = (~var_0);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            arr_48 [i_0] = (arr_18 [i_12 + 3] [i_12 + 1]);
                            var_34 = (arr_4 [i_12 + 2]);
                            var_35 &= (arr_42 [3] [i_11] [i_11]);
                        }
                    }
                }
                var_36 = (~3562535230);
                var_37 &= (((arr_35 [i_0] [i_12 + 3] [i_12] [i_12] [i_12 - 1]) ? var_11 : var_7));
                var_38 = ((13158 ? (arr_41 [i_12] [i_12] [i_12 + 1]) : (~1170994295)));
            }
        }
        arr_49 [i_0] = ((((115 == 2147483647) ? (var_3 + 3225264379) : 1)));
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_53 [18] |= ((~(arr_52 [i_15])));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    {
                        var_39 = ((~((~(arr_50 [i_15] [i_17])))));
                        arr_60 [i_15] = ((~(!var_7)));
                    }
                }
            }
        }
        arr_61 [12] [i_15] &= (arr_59 [6] [i_15]);
    }
    #pragma endscop
}
