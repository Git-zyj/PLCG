/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((!((max(var_1, 15638076196523979810)))))) != 1925128476));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = ((-(arr_0 [21])));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = var_3;
            arr_7 [i_0] [i_1] |= (arr_1 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = (!-32472);
            var_13 |= (arr_9 [i_0] [1]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_13 [i_0] = ((!((max(192, 5246568594807491639)))));
            var_14 = (((((-21 | (arr_3 [i_3])))) && (arr_12 [i_0] [i_3] [i_3])));
            var_15 = (min(var_0, (max(-1925128478, ((var_9 ? 0 : var_3))))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                var_16 *= (max(var_6, (((((70 ? 60968 : -10))) ? var_7 : var_0))));
                arr_19 [i_5] [i_0] [i_5] = 516096;

                for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, (arr_1 [i_0])));
                    var_18 -= ((((min((arr_15 [i_5] [i_4]), 4294967275))) ? (arr_0 [i_4]) : ((1 ? 79 : 8290840755769941243))));
                    var_19 = ((((!(((15830135945566919391 ? 1525329639 : 54)))))));
                    arr_22 [i_0] [i_0] [16] [9] = ((((min(var_2, (0 ^ var_8)))) ? (((min((!var_4), ((!(arr_17 [i_0] [i_4] [i_0] [i_6 - 2]))))))) : -4123168604160));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_20 = var_5;
                    arr_25 [i_0] [i_4] [i_4] [i_0] = var_9;
                    var_21 &= var_9;
                }
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_31 [i_0] [i_4] [i_0] [i_8] [4] = ((((((arr_24 [i_5 - 4] [i_0] [i_0] [i_8 + 2]) << (var_10 - 58587)))) ? -var_10 : var_1));
                        var_22 = (min(var_22, var_10));
                        var_23 = (max(var_23, ((min((!1), var_0)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        var_24 = (max(var_24, 141));
                        var_25 = ((var_5 ? var_6 : ((1 ? (arr_20 [i_10] [i_8] [1] [i_0]) : (arr_0 [i_0])))));
                    }
                    var_26 ^= var_7;
                    arr_34 [i_0] [i_0] [i_5 - 2] [i_8 - 1] = (arr_16 [16]);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_27 ^= ((2451599541 ? 17492 : 0));
                    arr_37 [i_0] [i_11] [i_5 + 3] [i_0] = (-516096 ? 0 : 0);
                    var_28 &= ((!(arr_20 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1])));
                    var_29 ^= 4294967285;
                    var_30 = ((11357 ? (206 ^ 18917) : (var_5 > var_6)));
                }
            }
            var_31 &= (!11992);
            var_32 = (max(var_32, -64));
        }
        var_33 = (min(var_33, (((216 ? -564179882 : 9895837815167906893)))));
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 9;i_12 += 1)
    {
        arr_40 [i_12 + 1] = (((arr_20 [i_12 + 1] [8] [i_12 + 1] [i_12]) ? (arr_20 [i_12 - 1] [3] [i_12 - 2] [i_12 - 1]) : var_3));
        arr_41 [i_12] [i_12] = var_8;
        arr_42 [i_12] [i_12] = ((1 != (arr_32 [i_12] [i_12] [i_12 - 1] [i_12 + 1] [i_12] [i_12 + 2] [i_12])));
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {

        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {
            var_34 = (min(((-25886 ? (arr_29 [i_14] [i_14] [i_14]) : 59)), 111));
            var_35 = ((-2177670679 ? (((arr_30 [i_14 - 1] [i_14 - 1] [i_13] [9] [i_13] [i_14]) ? (arr_14 [i_14 - 1] [i_14]) : (arr_30 [i_14 + 1] [i_14] [i_14] [i_13] [i_13] [i_14]))) : var_9));
            var_36 -= ((var_3 ? ((56631 ? (((~(arr_12 [i_13] [i_14 + 1] [18])))) : (max(var_0, 9001868220396244890)))) : var_7));
            var_37 ^= ((-(!3251537166)));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            arr_52 [i_15] [i_15] = ((!(arr_27 [i_13] [i_13] [i_15] [i_13] [i_15] [i_15])));
            /* LoopNest 2 */
            for (int i_16 = 4; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_57 [i_13] [i_15] [18] [i_15] = (!221);
                        arr_58 [i_13] [i_15] [i_17] = ((-1566891696 ? 4194303 : 129));
                    }
                }
            }
            var_38 |= ((((4294967295 ? var_2 : var_8))) != -10228518838926712707);
            arr_59 [i_15] [i_15] = -75;
        }
        var_39 = var_7;
        var_40 = 43710;
    }
    for (int i_18 = 1; i_18 < 14;i_18 += 1)
    {
        var_41 = (min(var_41, (min(((!((((arr_43 [i_18]) ? (arr_53 [i_18 + 1] [i_18] [6] [i_18]) : var_8))))), (var_7 == 0)))));
        var_42 = (max(var_42, var_4));
        arr_62 [i_18] [i_18] = (((0 ? 18446744073709551614 : 0)));
    }
    var_43 = var_7;
    var_44 = min(((var_8 ? ((9693270799395102681 << (var_7 + 75))) : (~25886))), var_9);
    #pragma endscop
}
