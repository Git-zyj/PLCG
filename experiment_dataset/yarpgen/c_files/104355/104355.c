/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-var_16 - var_8);

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = (max(-1, (arr_2 [i_0 + 2] [i_0 + 1])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 + 2]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = ((-(min(-32750, -1149796819609940906))));
        var_21 += (-32750 ? (max(((-32732 ? var_11 : var_17)), ((min((arr_1 [23]), 4152324070461955460))))) : (min(var_16, (((11180 % (arr_5 [1])))))));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            var_22 += ((((((arr_10 [11]) ? (arr_11 [15] [7] [i_2]) : var_5))) ? 3580473628 : (arr_0 [i_3 - 3] [i_2 + 2])));
            var_23 = (arr_1 [i_2]);
            var_24 = ((arr_6 [i_2]) ? (arr_8 [i_2] [i_3 - 3]) : var_15);
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {
                        var_25 += (arr_12 [i_2 - 2] [i_3 - 3] [i_4 - 1] [i_5 - 3]);
                        var_26 |= ((+((((arr_8 [i_2] [i_4]) >= -32756)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_19 [i_2] [i_6] |= ((var_17 ? -817214463 : var_14));

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_27 = ((-32751 ? var_11 : 7341));
                arr_23 [i_2 + 1] [i_6] [i_7] |= var_5;
                var_28 += 31;
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_29 += ((!(arr_2 [i_2 - 1] [i_8 + 2])));
                        var_30 = (arr_27 [12] [i_6] [i_8] [i_9]);
                        arr_29 [9] [i_6] [i_8] [i_9] = (arr_10 [i_8 + 2]);
                        var_31 = (max(var_31, (((-(arr_2 [i_2 - 1] [i_2 - 1]))))));
                    }
                }
            }
            var_32 = (arr_10 [i_2]);
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_34 [i_2] [15] |= (arr_11 [10] [i_2 + 3] [i_10 + 2]);
                        arr_35 [i_2 + 2] [i_6] [7] [3] = -var_14;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 16;i_13 += 1)
            {
                {
                    arr_42 [i_2] [i_2] = 22;
                    arr_43 [11] [i_12] [1] [i_2] = (min((min(-var_12, ((((arr_16 [i_13 + 2] [i_13] [i_12] [i_13] [i_2 - 2]) ? (arr_13 [13] [i_12] [i_12]) : var_15))))), ((104 ? (min(var_8, 0)) : var_14))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        arr_48 [i_14] |= ((-121 ? -2007336866 : (arr_20 [i_14] [17] [i_14] [16])));
        var_33 = (min(var_33, (arr_13 [i_14] [i_14] [i_14])));
        arr_49 [i_14] |= ((-((((((arr_40 [3] [i_14] [i_14]) ? 12 : 4051))) ? (arr_36 [i_14]) : -32751))));
        var_34 = (max(var_34, (((((-(-118 + 169))) == ((((1 ? 114 : -2007336866)) | ((2007336874 >> (((arr_1 [i_14]) + 1511586580)))))))))));
    }
    #pragma endscop
}
