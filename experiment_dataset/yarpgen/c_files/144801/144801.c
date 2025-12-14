/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_16 = -103;
        var_17 += ((!(((-(arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = arr_0 [i_0] [i_0];
            var_19 = ((-(arr_1 [i_0])));
            arr_6 [i_0] [i_0] = (((~(arr_4 [i_1]))));
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_20 = (min(((min(246, (!13937606511209215929)))), ((-(!0)))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [1] = ((!(arr_9 [i_4 + 3])));
                        var_21 = (max(var_21, ((((-(arr_17 [i_2])))))));
                    }
                }
            }
            var_22 = (((arr_17 [i_3]) ? (arr_17 [i_2]) : (arr_17 [i_3])));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_23 = (max(var_23, (((!((((arr_16 [i_2] [i_2] [i_6]) ? (arr_4 [i_2]) : (arr_4 [i_2])))))))));
            var_24 = (min(var_24, (((((((arr_11 [i_6]) ? (arr_11 [i_6]) : (arr_8 [i_2] [i_2])))) ? ((8712398309622263874 ? -1433378615 : (arr_8 [i_2] [i_6]))) : (arr_11 [i_2]))))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_25 = ((!((!(arr_2 [i_2] [i_7])))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    arr_29 [i_7] [i_2] [i_2] [i_8] [1] [i_9 - 1] = (arr_17 [i_9 - 1]);
                    arr_30 [4] [4] [4] [i_7] = arr_18 [i_9 - 1] [i_9 - 1] [i_9 - 1] [2] [i_9];
                }
                var_26 += (arr_18 [3] [i_2] [i_2] [i_7] [i_2]);
            }
            arr_31 [3] [3] [i_7] = ((-(max((arr_1 [i_2]), ((var_2 ? 0 : var_7))))));
            var_27 *= (+-5);
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_28 = (max((arr_12 [i_10]), (~var_6)));
            var_29 = ((-(arr_2 [i_2] [4])));
        }
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_30 = (!(((-(arr_34 [i_11])))));
        arr_38 [i_11] = (((min((arr_34 [i_11]), (arr_36 [i_11] [i_11]))) << ((((~(arr_36 [i_11] [i_11]))) + 325484432))));
        var_31 = (min(var_31, (((!(arr_34 [i_11]))))));
        var_32 += ((((((arr_37 [i_11]) ? (((!(arr_36 [i_11] [i_11])))) : (arr_35 [i_11] [9])))) ? (arr_34 [i_11]) : ((max((((!(arr_35 [i_11] [i_11])))), 253)))));
    }
    #pragma endscop
}
