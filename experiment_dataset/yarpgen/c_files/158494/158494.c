/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 222;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_0] [i_1] = ((((max((arr_7 [i_2 + 1] [i_2 + 2] [i_2] [i_2]), 222))) ? (((max((arr_3 [i_2 + 1] [i_2 + 2] [i_2]), (arr_3 [i_2 + 1] [i_2 + 2] [i_2]))))) : (max(85, 18446744073709551615))));
                arr_10 [i_0] [i_1] [i_0] = 203;
                var_19 = ((23401 ? (((((1073741824 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) + ((min((arr_6 [i_0] [i_1] [i_2 + 2]), (arr_7 [i_0] [i_0] [i_2] [i_2]))))))) : (max(1073741824, (((1 ? -108 : -100)))))));
            }
            var_20 = (arr_6 [8] [i_0] [i_1]);
        }
        for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_21 = ((((min(((min(101, -64))), 203))) ? (arr_8 [i_0] [i_0] [i_3] [i_3]) : 1));
            arr_13 [i_3] [i_3] [i_0] = (min((max(203, (-2147483647 - 1))), (min((arr_12 [i_0] [i_3 + 2]), (arr_4 [i_0] [1] [i_3 + 2])))));
            var_22 *= ((((max(23399, 142))) ? ((((max(24, (arr_1 [i_3])))) ? 112 : (max(0, (arr_3 [i_0] [i_0] [i_3]))))) : 11920));
        }
        for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_23 -= ((((((((-23399 ? -88 : 71))) ? (min(64, 577588365)) : 23398))) ? (max((max((arr_1 [i_0]), (arr_4 [i_0] [i_0] [i_4]))), 23381)) : (max(((-2081786156 ? -2536 : -23380)), 7))));
            var_24 += ((-23398 ? 210 : -85));
        }
        var_25 = (max(var_25, (max((min(-8837, ((84 ? 1073741824 : (arr_0 [i_0]))))), (((1 * ((max(232, (arr_11 [i_0] [i_0])))))))))));

        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_26 = ((((((arr_17 [i_5 + 1]) << (((arr_17 [i_5 + 2]) - 60540901))))) ? ((((((max(-2536, (arr_5 [i_0] [i_0])))) > 113)))) : (((arr_14 [i_0]) ? (((arr_8 [i_0] [i_0] [i_0] [1]) ? -358067950 : 1198172954)) : -59))));
            var_27 = (arr_3 [11] [i_5] [11]);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                var_28 = (min(var_28, ((((((0 ? -84 : 53))) ? (arr_1 [i_6]) : ((23370 ? -23392 : (arr_20 [i_0]))))))));
                var_29 += (arr_15 [i_7 + 2] [i_7 + 2] [i_7 + 2]);
                var_30 |= (((arr_6 [i_7 - 1] [i_7 - 1] [i_7]) != ((1 ? (arr_7 [i_0] [i_0] [i_6] [i_7 - 1]) : 1))));
            }
            /* vectorizable */
            for (int i_8 = 4; i_8 < 14;i_8 += 1)
            {
                var_31 = (arr_26 [i_0] [i_0]);
                var_32 = arr_15 [i_0] [i_6] [i_8 + 1];
                var_33 = ((41 ? (arr_20 [i_0]) : (16384 > -9295)));
            }
            var_34 = (max(var_34, 1));
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_35 = ((arr_17 [6]) & (arr_29 [1] [i_9]));
        var_36 *= (max((arr_7 [i_9] [i_9] [i_9] [i_9]), ((110 ? 29082 : 1900757064))));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_37 -= (max((arr_30 [i_10]), (arr_17 [i_10])));
        arr_34 [i_10] = (max((min(((41 ? -84 : 4294967295)), ((((arr_8 [i_10] [i_10] [i_10] [i_10]) ? 32 : 13730))))), ((25940 ? (((max(1, (arr_0 [i_10]))))) : 3048840089))));
        var_38 = (max((23399 && 1), 46));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_39 = 703549175;
                    var_40 = min(-1829878841, (min((arr_19 [i_11] [i_11]), 1246127207)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                arr_44 [i_14] [i_14] = (arr_42 [i_13] [i_13]);
                var_41 *= min(3221225472, (((((23399 ? 1 : (arr_42 [i_13] [i_14])))) ? (((min(96, (arr_40 [i_13] [i_13]))))) : ((-6 ? 8436745652949732949 : 15360)))));
            }
        }
    }
    var_42 |= 17;
    #pragma endscop
}
