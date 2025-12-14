/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 *= (((((((var_11 + 9223372036854775807) << (var_12 - 203))) << (((var_8 + 838120156669821477) - 41)))) - (arr_7 [i_1] [i_2] [i_3])));
                        var_14 &= -6987155860811967679;
                        var_15 -= ((+((((arr_6 [i_1] [4] [i_1]) >= (((arr_12 [i_3]) ? (arr_11 [16]) : 41592)))))));
                    }
                }
            }
        }
        var_16 -= (((((~(arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_0])))) ? var_2 : ((var_0 ? (~var_4) : 1073741823))));
        var_17 = (max((((arr_3 [i_0]) ? var_12 : var_8)), (var_2 / var_5)));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_0 - 1] [i_0] = var_1;
            var_18 = (~23963);
            arr_17 [i_0] [i_0] [i_0] = ((20 ? 45835 : 32));
            var_19 &= var_10;
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_20 += -4611686018427387904;
                        var_21 = (max(var_21, (((195 ? 6734 : 1431796889)))));
                    }
                }
            }
            var_22 = (min(352706305, 3732665900108959452));
            var_23 = ((-((((41592 ? (arr_11 [i_5]) : var_5)) & 1048575))));
            var_24 = (min(var_24, (((((((27 & var_3) | 162))) ? (min((arr_24 [i_0 + 3] [i_0] [i_0 + 3] [i_5 - 1]), -4165202751880750399)) : (arr_11 [i_5]))))));
            var_25 -= var_4;
        }
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_26 = var_10;
        var_27 &= (arr_11 [i_8]);
        arr_29 [i_8] = ((~(--50)));
        var_28 = (((--49898) - (arr_5 [10] [i_8 - 2] [i_8 - 3])));
    }
    for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_41 [i_11] [i_12] = ((-((((arr_22 [i_10 - 2] [i_10 + 1] [i_11]) != var_3)))));
                                var_29 += ((-(~var_10)));
                            }
                        }
                    }
                    var_30 -= ((((((~var_7) ? ((min((arr_5 [i_10] [i_10] [i_11]), (arr_0 [13] [13])))) : ((7712047956760988500 ? 3818 : -3832))))) ? ((((!(arr_27 [13] [i_10 + 1]))))) : (arr_40 [i_11] [i_10] [i_9] [i_10] [i_9])));
                }
            }
        }
        var_31 = ((((((3732665900108959460 ? var_4 : (arr_14 [i_9] [i_9] [i_9]))) ? -3732665900108959477 : (max(45835, var_1))))));
        arr_42 [i_9] = (((((((0 % 1) ? (!14714078173600592165) : (min(var_7, (arr_36 [2] [2] [i_9]))))) + 9223372036854775807)) >> ((((var_8 > (arr_28 [15])))))));
        var_32 = ((~(((arr_38 [10] [i_9] [i_9] [10]) ? (arr_40 [i_9] [2] [i_9] [i_9 + 2] [0]) : -var_12))));
        var_33 = var_2;
    }
    var_34 = (-21782 ? -4090666585754908948 : 1974130098);

    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {
        var_35 = (((var_12 ? var_1 : var_5)));
        var_36 = (((min(((223 + (arr_13 [i_14] [i_14]))), (arr_34 [i_14] [i_14] [2]))) >> (((((-9223372036854775807 - 1) - -9223372036854775787)) + 35))));
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_37 = (~var_5);
        arr_48 [i_15] [i_15] = ((((max((arr_4 [i_15]), var_2))) && ((!((min(var_7, var_10)))))));
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
    {
        var_38 = ((((min((arr_18 [i_16]), (-32767 - 1)))) > var_3));
        arr_51 [i_16] = (max(((((23981 ? var_2 : (arr_50 [i_16]))))), var_0));
        var_39 = arr_19 [i_16];
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 17;i_18 += 1)
            {
                {
                    arr_57 [i_16] [i_17] [i_17] = ((~(arr_8 [i_16] [5] [i_18])));
                    var_40 = 41575;
                    var_41 = (max(var_41, ((max((((arr_10 [i_18 + 1] [12] [1] [i_18 - 1]) ? (536870911 | var_9) : (((var_2 ? var_6 : var_6))))), ((((arr_33 [i_16] [i_17] [i_18]) ? (arr_47 [14]) : 35268))))))));

                    /* vectorizable */
                    for (int i_19 = 2; i_19 < 14;i_19 += 1)
                    {
                        var_42 &= (arr_32 [i_18]);
                        arr_61 [i_17] = (((arr_24 [i_19] [i_19 + 4] [i_18 - 1] [i_18]) - (arr_24 [i_19] [i_19 + 1] [i_18 - 1] [11])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
