/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_14 = (min(var_14, (~var_7)));
        var_15 = (max(var_15, (((11318025412250692818 ? var_11 : (arr_0 [i_0 - 3]))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (arr_1 [i_0 - 2]);
            arr_6 [i_0] [i_1] [i_0 - 1] = (((arr_4 [i_0 - 3] [i_0 - 1]) ? (((arr_4 [9] [i_1]) ? (arr_1 [i_1]) : var_8)) : var_9));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_17 |= (((arr_1 [i_2 - 1]) ? -5118401102033024532 : (arr_7 [i_0] [i_0 - 3])));
            arr_9 [0] [i_2] = (((arr_3 [i_0 - 2]) * 65));
            var_18 = (((((arr_3 [i_2 - 1]) + 2147483647)) >> (20860 - 20844)));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_19 = ((!(!-13052)));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 = (arr_2 [i_3 + 1] [i_0 - 3]);
                arr_15 [i_3] [i_3] [i_3] = ((!(arr_5 [i_0])));
            }
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        {
                            var_21 = -1921430930887395430;
                            var_22 = (((((var_1 ? (arr_4 [i_0] [i_0 - 2]) : -876293163))) - (((arr_13 [3] [i_3 - 1] [i_0]) - 0))));
                            arr_24 [i_0 - 1] [i_3] [i_5] [i_5] [i_3] [i_6 + 1] [i_7] = ((100 ? 18507 : (arr_22 [i_7 + 2] [i_7] [i_3] [i_7 + 3] [i_7] [i_7])));
                            var_23 = 3360519737;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_30 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] = ((-(arr_11 [i_0 - 3])));
                            var_24 = (max(var_24, 20991));
                            var_25 = (max(var_25, (((9223372036854775803 | (arr_11 [i_5]))))));
                        }
                    }
                }
                arr_31 [0] [i_3] |= var_8;
            }
            arr_32 [i_3] [i_3] = -11508;
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_35 [i_10] = (((arr_34 [i_0 - 2]) ? 16067 : 12523828356300245930));
            var_26 = 3208296223016503516;
        }
        var_27 |= var_3;
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        arr_38 [i_11] [i_11] = ((((max(var_13, 1046117693))) ? (((!(((~(arr_37 [i_11]))))))) : 25630));
        var_28 = (min(var_28, (min(((8738112932427269228 ? ((var_3 ? -8738112932427269228 : (arr_36 [i_11] [i_11]))) : (max(var_1, 5922012627920229902)))), ((min(0, 2651574282)))))));
        var_29 = (min(var_29, -13052));
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 24;i_12 += 1)
    {
        arr_42 [12] [i_12] = (((6127 ? 6212653724402051289 : (arr_41 [i_12]))));
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {
                    arr_48 [i_12] [3] [i_12] = (((arr_44 [i_12 - 4] [i_12 - 4] [i_13 - 1]) ? (arr_45 [i_12 - 3] [i_13 + 1]) : (arr_45 [i_12 + 1] [i_13 + 1])));
                    var_30 = (max(var_30, var_0));
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 20;i_15 += 1)
    {
        arr_51 [i_15] = (arr_41 [i_15]);
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                {
                    arr_58 [i_15] [i_15 + 2] = ((7557493610256708859 <= (arr_49 [i_15] [i_15])));
                    arr_59 [i_15] [i_15] = 11099992667648637190;
                }
            }
        }
    }
    var_31 = (min(var_5, 118));
    var_32 -= var_2;

    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_33 = (25 ? -3815115152919013765 : -84);
        var_34 = (max(var_34, var_10));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 10;i_20 += 1)
            {
                {
                    var_35 = (-13052 ? -32390 : 48379);
                    arr_68 [i_18] [i_18] [6] |= (min(((((((1870688816 ? 24247 : 43))) ? ((min(var_13, 6858))) : ((min(0, -76)))))), (max(((max(var_6, var_0))), ((19702 ? -2941738746343292857 : -32317))))));
                }
            }
        }
        var_36 = 97;
    }
    #pragma endscop
}
