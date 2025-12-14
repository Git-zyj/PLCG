/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [1] |= (((((arr_0 [i_0]) * (arr_0 [i_0]))) <= (!var_7)));
        var_11 = (min(var_11, (((-(arr_2 [10]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_6;
        arr_8 [i_1] = (arr_3 [i_1] [14]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_15 [i_3] [i_2] = (arr_10 [i_2] [i_3]);
                    arr_16 [i_3] = var_5;
                    var_12 ^= ((!(arr_6 [i_3])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                var_13 &= ((-((97768688 ? 3040183133308487225 : 97768688))));
                arr_23 [i_4] [i_4] [i_4] &= (min(var_8, ((-(arr_22 [i_4] [i_4])))));

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_26 [i_4] [i_4] [i_4] = ((128 >= 1550326096) / ((~(arr_21 [i_5 - 1]))));
                    arr_27 [i_4] &= (min(1550326110, 2775151396));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_34 [i_8] [i_7] [i_5] [i_4] |= var_0;
                        arr_35 [i_4] [i_4] = ((((min(1519815888, 2775151396))) <= (min((4429442968924051197 / 86), 1550326094))));
                        arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] = ((-((((((arr_24 [i_4] [i_5 + 3] [i_7] [i_8]) || -1420165762))) | (~30235)))));
                        arr_37 [i_4] [i_4] [i_7] [i_8] [i_7] [i_8] = (arr_28 [i_4] [i_5] [i_7]);
                    }
                    arr_38 [i_4] [i_5] [i_4] [i_7] = var_10;
                }
                arr_39 [i_4] [i_4] [i_5] = -39251;
            }
        }
    }

    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_14 ^= (arr_24 [i_9] [i_9] [i_9] [i_9]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    arr_47 [i_10] [i_11] = (var_8 - -106);
                    arr_48 [i_9] [i_10] [i_9] = -4429442968924051201;
                    arr_49 [i_9] = -1;
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
    {
        arr_52 [i_12] = (arr_21 [i_12]);
        arr_53 [i_12] = (--9223372036854775802);
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_15 = ((min((arr_24 [i_13] [i_13] [i_13] [i_13]), 126)));

        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            var_16 = (max(var_16, ((((((-(arr_46 [i_13] [i_13] [i_13] [i_14])))) != 3823087090)))));

            /* vectorizable */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                arr_62 [i_15] [i_15] [i_15] [i_14] = var_3;

                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_17 += ((7092763439523563740 % (arr_64 [1] [i_15] [i_15] [i_16] [11])));
                    var_18 = -4429442968924051182;
                    arr_65 [i_16] [i_13] = ((!(((arr_21 [i_13]) == var_4))));
                    arr_66 [i_13] [i_14] [i_15] [1] [i_15] = (arr_24 [i_13] [i_14] [i_15] [i_16]);
                    arr_67 [i_13] [i_14] [i_15] [i_15] [i_16] [i_16] = (120 % 42269);
                }
                arr_68 [i_13] [i_14] [14] = (arr_54 [i_15] [i_14]);

                for (int i_17 = 2; i_17 < 15;i_17 += 1)
                {
                    var_19 -= (4197198604 ^ 0);
                    var_20 = (max(var_20, -14));
                    var_21 = 5199651049507718356;
                }
                var_22 = (((arr_25 [i_13] [i_13] [i_13] [i_13]) ? (arr_41 [i_14]) : (arr_25 [i_13] [i_14] [i_15] [i_13])));
            }
            for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_19 = 3; i_19 < 15;i_19 += 1) /* same iter space */
                {
                    arr_77 [i_13] [i_13] [i_18] = (var_6 ? (arr_24 [i_19] [i_19 - 2] [19] [i_19]) : (arr_63 [1] [1] [i_14] [i_14] [i_18] [16]));
                    arr_78 [i_13] [i_18] [i_18] [i_19 + 2] = ((-(arr_22 [i_18] [i_13])));
                    arr_79 [i_18] = (((arr_73 [i_13]) ? (arr_73 [i_14]) : 4197198584));
                }
                for (int i_20 = 3; i_20 < 15;i_20 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (18446744073709551615 && 1)));
                    var_24 ^= (arr_28 [i_13] [i_13] [i_18]);
                }
                for (int i_21 = 3; i_21 < 15;i_21 += 1) /* same iter space */
                {
                    arr_86 [i_13] [i_18] [i_18] [i_21 - 1] [12] [i_14] = (((((~((1 ? 1519815899 : 1519815897))))) ? (4429442968924051191 + -3) : (arr_61 [i_21 - 1] [i_21 - 2] [i_21 - 1] [i_21 - 3])));
                    arr_87 [i_13] [i_13] [i_13] [i_13] [i_18] = (min(243, 6797535749909443914));
                }
                var_25 -= 25;
                var_26 = ((3277633250 ? ((min(-var_5, (arr_21 [i_13])))) : -14));
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 17;i_22 += 1) /* same iter space */
            {
                arr_92 [i_22] = 1;
                var_27 -= (((arr_51 [i_22]) >= (arr_46 [i_22] [i_14] [i_13] [i_13])));
            }
            for (int i_23 = 0; i_23 < 17;i_23 += 1) /* same iter space */
            {
                var_28 = (max(var_28, var_2));
                arr_96 [i_13] = min(var_9, (-17001 / 15360));
                var_29 = (max(var_29, var_0));
                arr_97 [i_13] [i_13] [i_13] [i_13] = var_8;
            }
        }
    }
    #pragma endscop
}
