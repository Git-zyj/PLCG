/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 - ((var_7 ? (min(-692723016521152933, 797621990758315843)) : (var_6 > 53621))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [i_2] [i_2] = (((((min(45078, -5878))))) ? (var_3 <= var_4) : (((((7 ? -125 : var_8))) ? var_6 : var_6)));
                    var_11 = ((((((!var_3) / -var_2))) / (((var_3 ^ var_4) ? (((var_9 ? var_5 : 54139))) : ((var_4 ? var_3 : var_8))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_12 = ((var_7 ? (var_9 != 4294967295) : ((8587897026727159304 ? -2091225325593595752 : 11411))));
                        arr_16 [0] [i_1] [i_1] [i_1] [11] [10] = 76;

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_5] [i_1] [i_1] [i_0] = (((((23 ? var_2 : var_7))) ? ((307324213 ? -32761 : -2005169707)) : ((var_4 ? var_4 : -6))));
                            arr_20 [i_1] [i_1] [12] [i_1] [i_1 + 3] = (~var_2);
                            arr_21 [i_4] [i_1] [i_1] [i_0] = ((!(((var_9 ? var_0 : var_8)))));
                            arr_22 [i_5] [8] [i_1] [i_3] [i_1] [i_0 - 1] [i_0 - 1] = var_6;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_13 = ((-var_8 + 2147483647) << (((var_6 + 1258253004) - 18)));
                            arr_25 [7] [i_1] [i_1] [i_4] [i_6] = ((((((var_6 + 2147483647) >> (var_9 - 10454637912331198046)))) ? -var_9 : (-1144693606 & 2084433425178188962)));
                            var_14 = ((var_3 >> (((var_7 & 54139) - 37129))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_15 = ((-7 ? -32751 : (-127 - 1)));
                        arr_29 [i_3] [i_3] [i_1] [i_3] [i_3] [i_3] = 65408;
                        arr_30 [i_0] [i_3] [i_1] [5] [1] [1] = ((27956 ? var_0 : (((var_5 << (91 - 78))))));
                        var_16 = (~var_9);
                        arr_31 [i_3] [i_1] [i_1] = 247;
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0 - 1] [i_0 - 1] [i_1] = var_3;
                        var_17 = 241;
                    }

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_18 = (!var_6);
                        var_19 = (((((-28 ? (-9223372036854775807 - 1) : -28))) ? (!var_9) : var_3));
                        var_20 = (-((var_5 ? var_3 : var_6)));
                        var_21 = ((-var_1 ? -var_2 : var_5));
                        arr_39 [i_9] [5] [i_9] [i_1] = (~var_0);
                    }
                }

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {

                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        var_22 = ((-2147483647 >= (max((min(var_1, var_6)), 2147483647))));
                        var_23 = (max(((84519686 ? var_7 : 32741)), (~5150948599678806910)));
                        arr_46 [i_0] [i_1] [i_10] [i_1] [i_11 - 1] = ((((32761 ? 9223372036854775807 : var_2)) > var_0));
                    }
                    var_24 = (var_1 ? (!var_3) : var_6);
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                {
                    arr_49 [i_1] = var_2;

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_53 [i_0] [i_0] [i_1] [8] [i_13] = (6114258639965086886 >= 192);
                        var_25 = ((var_0 >> (-11 + 11)));
                        var_26 = (((((var_5 ? 50 : 212))) * (var_4 / var_2)));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_27 = var_8;
                        var_28 = (var_8 << (var_3 - 5457653968440733608));
                        var_29 = 197;
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {

                        for (int i_16 = 1; i_16 < 13;i_16 += 1)
                        {
                            var_30 = (var_9 && 126);
                            arr_62 [i_16] [i_1] [i_15] [i_12] [i_1] [i_1] [i_0] = (0 < var_5);
                        }
                        arr_63 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (var_9 % 1107542834092016328);
                    }
                }
                for (int i_17 = 1; i_17 < 13;i_17 += 1) /* same iter space */
                {
                    var_31 = var_3;
                    arr_66 [i_1] = var_1;
                    arr_67 [6] [i_17] [i_17] [i_1] = (((((var_4 ? var_9 : var_1))) ? (!var_8) : (((-6873 && var_3) ? ((min(111, var_6))) : -4462956928940370771))));
                }
                for (int i_18 = 3; i_18 < 11;i_18 += 1)
                {
                    arr_70 [i_1] [i_18] [i_1] [i_1] = ((var_6 ? var_7 : -var_8));
                    var_32 = (((15358176145368855260 == var_6) ? (~var_3) : (10660813774920591036 > 244)));
                    var_33 = ((32761 ? 1719998691 : 121));
                    arr_71 [i_0] [i_1] [i_18] [i_1] = ((~(max(2526415424, var_0))));
                }
                arr_72 [i_1] = ((((max((var_8 | var_4), var_6))) ? var_9 : var_6));

                for (int i_19 = 2; i_19 < 12;i_19 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 10;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 13;i_21 += 1)
                        {
                            {
                                var_34 = (-(((var_6 < var_4) ? var_8 : -var_1)));
                                var_35 = (((((3558300377 ? 0 : -65408))) ? ((1056964608 ? 0 : -2)) : ((((!((max(var_9, var_6)))))))));
                            }
                        }
                    }
                    arr_82 [i_1] = ((((((var_6 ? 32740 : var_7)))) ? (((((2930971619 ? (-2147483647 - 1) : var_5))) ? var_3 : (79 && var_2))) : ((-((var_1 ? var_3 : 2147483647))))));
                }
                /* vectorizable */
                for (int i_22 = 2; i_22 < 12;i_22 += 1) /* same iter space */
                {
                    arr_85 [i_1] [i_1] [i_1] = ((((var_7 ? var_6 : var_6))) ? -var_9 : var_5);
                    var_36 = (var_5 / var_8);
                    arr_86 [i_22 + 1] [i_1] [1] = ((~((var_0 ? var_1 : var_7))));
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    var_37 = (((-2147483647 - 1) ? ((3170502378 ? var_3 : var_3)) : 4710));
                    var_38 = (((~var_7) + (((var_2 ? var_4 : var_2)))));
                    var_39 = ((var_4 > (!1857023704)));
                    arr_90 [i_0] [i_1] = (var_8 < var_4);
                }
            }
        }
    }
    #pragma endscop
}
