/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_0, (min(var_3, var_6))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((var_11 < (((arr_4 [i_0] [i_0] [i_0 - 3]) ? (arr_1 [i_0]) : var_3))));
            var_13 = 3399196547;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_14 = var_4;
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_0] = ((((min(var_8, -5693038637591770109))) ? ((5693038637591770106 ? -5693038637591770109 : -5693038637591770090)) : var_6));
                        var_15 = (arr_8 [i_3] [i_3] [i_2]);
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] = ((((var_4 && (-5693038637591770122 - var_11))) ? (min(((var_2 ? var_3 : (arr_17 [i_0] [i_5] [i_5]))), -5693038637591770115)) : var_1));

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_16 = var_10;
                        var_17 = (max(((-5693038637591770122 ? 3677436279 : 5693038637591770108)), var_8));
                    }
                    var_18 = ((((min(5693038637591770108, (4219587969 % 4294967295)))) ? 3713657147 : var_8));
                    var_19 = (min(var_19, (min(var_8, (min((min(-5693038637591770122, 75379328)), ((4294967295 ? 5693038637591770122 : 2736214270))))))));
                    arr_30 [i_5] = (min((min((arr_24 [i_7 + 2] [i_7 + 3] [i_7 + 2] [i_7 + 2]), -5693038637591770108)), (((var_7 ? var_5 : 8)))));
                }
                for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        var_20 = var_7;
                        var_21 = var_4;
                        arr_36 [i_5] = (!var_8);
                    }
                    var_22 = ((!((((((-5693038637591770106 ? (arr_31 [i_5] [i_5]) : 18446744073709551609))) ? var_8 : 32256)))));
                    arr_37 [i_5] [i_5] [i_5] = ((((((((var_11 ? 2613620390 : -18136))) != (arr_34 [i_9] [i_9] [i_9] [i_5] [i_9 - 1] [i_9] [i_9 - 1])))) << (((min(var_7, ((30546 ? var_5 : 1059965751)))) - 1516793589))));
                    var_23 = -var_7;
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    var_24 = var_8;
                    var_25 = (var_3 ? var_9 : var_7);
                    var_26 ^= ((~(arr_29 [i_0] [i_0] [i_0] [i_5] [i_6] [i_11 + 1] [i_5])));
                }
                arr_42 [i_0 - 3] [i_0] [i_5] = 16777215;
                var_27 = 208664031;
                var_28 *= var_9;
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
            {
                arr_46 [i_5] [i_5] [i_5] = ((5693038637591770108 ? 2635467082 : 3677436285));
                var_29 = 1059965751;
                var_30 = ((var_2 ? (arr_27 [i_0] [i_5] [i_12] [i_5] [i_12]) : (max(0, ((2635467082 ? 4294443008 : 15))))));
                var_31 += (((((((var_9 ? var_10 : 3466013990))) ? var_2 : 571878618028584483)) == (((((2906093077 ? 2147483520 : (arr_33 [i_0])))) ? ((min(1088164421, var_1))) : var_3))));
                var_32 = (((((min(var_4, var_5))) == (arr_35 [i_5] [i_5] [i_5]))) ? var_11 : (((min(var_10, 29060)) >> (-5948921713222755856 + 5948921713222755875))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    var_33 = (!29057);
                    arr_53 [i_14] [i_5] [i_5] [i_0] = (((~var_6) ? (arr_26 [i_0] [i_0] [i_5] [i_13] [i_5] [i_14]) : ((var_3 ? var_4 : var_8))));
                }
                for (int i_15 = 2; i_15 < 17;i_15 += 1)
                {
                    arr_58 [i_5] = (-6719379728684132742 >= 828953308);
                    var_34 = (max(var_34, (var_6 % var_8)));
                    var_35 = -var_10;
                }
                for (int i_16 = 2; i_16 < 20;i_16 += 1)
                {
                    var_36 = ((3161077116740330383 ? ((var_3 ? var_5 : 1681346906)) : var_9));
                    arr_61 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0] &= (arr_43 [i_5] [i_13] [i_5] [i_0]);
                }
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    var_37 = (((arr_40 [i_17] [i_5] [i_5] [i_0]) ? var_6 : var_7));

                    for (int i_18 = 1; i_18 < 18;i_18 += 1) /* same iter space */
                    {
                        arr_68 [i_0] [i_5] [i_0] [i_5] [i_0] = 4294967295;
                        var_38 = ((arr_14 [i_0 - 2] [i_18 - 1] [i_18]) ? (((var_9 ? var_0 : var_4))) : var_6);
                        arr_69 [i_18] [i_5] [i_13] [i_5] [i_0] = -var_0;
                    }
                    for (int i_19 = 1; i_19 < 18;i_19 += 1) /* same iter space */
                    {
                        var_39 = (((arr_0 [i_0] [i_0]) ? -var_8 : 18446744073709551609));
                        arr_72 [i_0] [i_5] [i_13] [i_17] [i_19 + 1] = var_11;
                        arr_73 [i_0] [i_0] [i_13] [i_5] [i_5] = ((!((((arr_70 [i_13] [i_13] [i_13] [i_5] [i_0]) ? var_8 : 2723268633965917110)))));
                        var_40 = (arr_19 [i_0 + 1] [i_0 + 1]);
                    }
                }

                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    var_41 = (var_6 ? ((-24486 ? 0 : var_8)) : (((var_11 ? 1 : var_5))));
                    var_42 = (max(var_42, ((!(((var_0 ? 18446744073709551615 : 2848308738)))))));
                    var_43 = ((-(arr_50 [i_0 - 1] [i_0 + 1])));
                }
                var_44 = 2097151;
            }
            var_45 = (min((var_2 != var_6), (~117)));
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                {

                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        var_46 = (var_2 ? -var_4 : var_10);

                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 21;i_24 += 1)
                        {
                            var_47 -= 5948921713222755856;
                            arr_90 [i_0] [i_0] [i_0] [i_0] [i_22] = (arr_87 [i_0 - 2] [i_0 - 2] [i_22]);
                            var_48 = (arr_49 [i_22]);
                        }
                        var_49 = var_2;
                    }
                    var_50 = 3466013988;
                }
            }
        }
        var_51 = (min(var_51, var_7));
    }
    for (int i_25 = 0; i_25 < 17;i_25 += 1) /* same iter space */
    {
        arr_93 [i_25] [i_25] = (~var_6);
        var_52 = ((min(((230621836 ? 3026261393 : 1073741824), (arr_76 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])))));
    }
    for (int i_26 = 0; i_26 < 17;i_26 += 1) /* same iter space */
    {
        arr_98 [i_26] [i_26] = ((-(((((var_8 ? var_11 : 3466013990))) ? var_2 : ((var_9 ? (arr_32 [i_26]) : var_10))))));
        var_53 = (min(var_53, var_11));
    }
    #pragma endscop
}
