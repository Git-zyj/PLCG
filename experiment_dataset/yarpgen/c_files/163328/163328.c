/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_16;
        var_17 = ((var_7 ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : 25636));
        var_18 += ((((((arr_0 [i_0 - 2]) | (arr_0 [i_0 - 2])))) ? 1 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!(arr_3 [i_1])));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                var_19 += (min(var_6, ((max(var_9, ((max(var_16, var_15))))))));
                var_20 = (2301339409586323456 + -1304795937322279629);
                var_21 = ((((max((arr_4 [i_1] [i_2]), (min(-1304795937322279626, -1304795937322279622))))) && (!var_9)));
                arr_13 [i_1] [i_1] [i_1] = ((!((max((arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 1]), ((~(arr_10 [i_1] [i_2] [i_3]))))))));
            }
            arr_14 [i_1] [i_1] [i_1] = (max(((1 ? (min(1304795937322279628, var_2)) : ((min(var_14, var_2))))), (arr_5 [i_2])));
            arr_15 [i_1] = (((+(((arr_7 [i_1] [i_1] [i_1]) ? var_15 : -1304795937322279606)))));
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_22 += var_5;
            var_23 = var_1;
        }
        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_32 [i_4] [i_6] [i_7] [i_4] [i_7] [i_4] = var_9;
                            var_24 = (-var_0 == var_7);
                            var_25 = (max(var_25, (((arr_24 [i_9] [i_8] [i_7] [i_6]) ? ((3651683685449355830 ? -61 : var_5)) : (arr_30 [i_4] [i_6] [i_6] [i_8] [i_8] [i_8] [i_9])))));
                        }
                    }
                }
            }
            var_26 = ((var_13 ? -1304795937322279623 : var_11));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_27 = 0;
                            var_28 = var_8;
                            var_29 = (((3667901391 / -1304795937322279629) ? var_12 : var_16));
                        }
                    }
                }
            }
            var_30 = (((arr_43 [i_4 - 1] [i_10] [i_4] [i_4] [i_4]) ? 7023297931501046105 : (arr_43 [i_4 + 1] [i_10] [i_4] [i_4] [i_4])));
        }
        var_31 = (max(var_31, 1304795937322279622));
    }
    var_32 = ((var_11 ? 1304795937322279610 : var_14));
    var_33 += var_2;
    #pragma endscop
}
