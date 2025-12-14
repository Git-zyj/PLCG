/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_11, (1 + 65527)));
        var_18 = ((+(((((arr_1 [i_0 - 2]) | var_5)) / var_12))));
        var_19 = (min(var_19, (((0 ? 10553465712542809418 : 19180)))));
        arr_2 [i_0 + 1] = (max((((7893278361166742197 ? 23881 : -108))), var_0));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_20 &= (((((var_8 ? (arr_11 [i_3] [20] [24] [i_2 + 2]) : ((max(1, var_14)))))) ? -var_1 : var_11));
                        arr_13 [i_3] [i_4] [8] [8] [i_3] = (arr_5 [i_3 - 1]);
                        var_21 = var_2;

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_1 + 1] [21] [i_3 + 1] [i_4] [i_3] = var_11;
                            arr_17 [i_1 - 1] [i_2] [17] [i_2] [i_3] = ((-(arr_8 [i_2] [i_2 - 1] [i_3])));
                            var_22 = (max(var_22, (((~(arr_3 [i_4]))))));
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_23 = 51463;
                            var_24 = var_5;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_29 [5] = ((~(arr_11 [20] [i_8] [i_8] [i_9])));
                            var_25 = (min(var_25, (arr_26 [17] [i_7] [i_8])));
                            var_26 = (max(var_26, ((!(!0)))));
                            arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = ((max((arr_27 [i_1] [i_2] [i_7] [1] [i_9] [i_2] [i_7]), ((1893725985 ? 2415 : 63120)))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_33 [14] [i_10] = (max((~10581416659065303094), ((((((1 || (arr_21 [i_1 + 1] [i_1])))) - ((var_0 ? var_6 : (arr_20 [23] [i_10] [i_1] [i_1]))))))));
            var_27 = -59122;
            var_28 = (((var_14 ? var_11 : 10553465712542809419)));
        }
        arr_34 [i_1] = ((var_4 ? ((~((-5894 ? 4503599627370495 : 19181)))) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_1] [i_1])));
    }
    for (int i_11 = 3; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_29 = (min(var_29, (((!(((var_16 ? ((var_5 ? var_5 : (arr_3 [i_11]))) : (((-(arr_18 [22] [i_11] [i_11] [9] [i_11 - 2] [i_11] [i_11]))))))))))));
        var_30 = (max(var_30, (((~(~var_16))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 23;i_13 += 1)
            {
                {
                    arr_43 [i_13] [i_12] [i_13] = var_3;
                    var_31 = (((max(564748430821264444, 63120)) <= (((max((arr_6 [i_11 - 2] [i_11 - 2] [i_11 + 1]), (arr_6 [i_11 - 3] [i_11 - 1] [i_11 - 3])))))));
                    var_32 = (min(var_32, var_7));
                }
            }
        }
        var_33 = -1;
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                {
                    var_34 &= var_13;
                    arr_51 [1] [1] = ((~((19686 ? 52404 : 3568227118))));
                    arr_52 [i_14] [i_14] [i_16] = var_14;
                    arr_53 [i_16] [i_15] [0] = ((min(((-6022584646878587809 ? 726740178 : 30530), (min(0, 6))))));
                }
            }
        }
    }
    var_35 = (((((!var_7) || var_1)) ? ((((var_16 >> (var_0 - 3477034443))))) : ((var_5 ? (((var_5 ? var_11 : var_8))) : var_7))));
    var_36 &= var_8;
    var_37 = var_0;
    #pragma endscop
}
