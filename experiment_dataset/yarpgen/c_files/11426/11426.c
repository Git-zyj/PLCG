/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 ? ((((var_10 ? 22030 : -825673209)))) : (((var_10 > (!var_6))))));
    var_20 = (min(((min(3072, var_13))), ((((((var_3 ? 2828497879 : var_18))) ? var_16 : (((var_1 ? 55110 : 10))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = 32763;
                arr_8 [i_1] [i_1] [i_0] = -11623;
                var_22 = ((((arr_0 [12] [i_1]) ? (((arr_1 [i_0]) ? var_1 : (arr_0 [i_0 - 1] [i_0]))) : ((((arr_5 [i_0] [i_0] [0]) <= (arr_2 [9] [i_1])))))));
                arr_9 [i_0 + 2] [i_0] = (((((!(((var_9 ? (arr_0 [i_1 + 1] [i_0 + 2]) : var_3)))))) != (var_7 || 183)));
            }
        }
    }
    var_23 = var_14;

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 += ((((arr_11 [i_2]) ? ((-(arr_11 [i_2]))) : ((-321596061455031816 ? (arr_10 [i_2]) : (arr_10 [i_2]))))));
        var_25 += (((min(73, 2828497879))) ? ((max(-95, (arr_11 [i_2])))) : (~var_17));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_26 += (arr_14 [i_3]);
            var_27 = var_17;
            var_28 += ((((((arr_12 [i_2]) ? var_17 : (arr_11 [i_3])))) + (arr_14 [i_2])));
            var_29 += ((((4286504208668273969 ? var_6 : var_16)) > var_13));
            var_30 += (((!var_2) ? var_7 : (arr_14 [i_3])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_19 [i_4] [1] [6] = (((arr_15 [i_2]) ? (-32767 - 1) : 0));
            arr_20 [i_2] [i_2] = (arr_15 [i_4]);
            var_31 ^= (((arr_18 [i_2]) ? var_8 : 0));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_25 [i_5] [i_2] = (min(14160239865041277646, ((min(1, 20)))));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_32 = (((((arr_28 [4] [4] [i_6 - 3]) && (arr_12 [i_2]))) ? (min(var_3, (arr_12 [i_2]))) : (arr_12 [i_5])));
                        var_33 = 32759;
                        arr_31 [i_6] [17] [i_6] [i_6 - 1] = (((((~(arr_28 [0] [i_6 - 4] [0])))) ? (((arr_17 [i_6 - 4] [i_5] [i_2]) ? (arr_27 [i_6 - 4]) : (arr_17 [i_6 - 4] [i_2] [i_2]))) : ((~((((arr_22 [i_7]) || var_12)))))));
                        arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((((-321596061455031816 ? 1 : 4286504208668273969))) ? (((max(var_1, var_9)))) : (arr_16 [i_2] [i_6 - 3] [i_6 - 3])))) & (min((arr_28 [i_6 + 2] [i_6 - 1] [i_6 - 1]), (arr_30 [i_6 + 2] [i_6 - 3] [i_6 + 1] [i_6])))));
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_14 [i_5]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_41 [i_9] [0] = ((((max((((var_10 ? var_9 : (arr_11 [i_5])))), (arr_12 [i_8])))) && (arr_24 [9])));
                        arr_42 [i_9] [i_9] = ((~(arr_11 [i_9])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        arr_49 [i_2] [i_2] [7] [i_2] = ((((var_14 ? 2828497879 : (arr_37 [i_11 - 1] [i_11 - 3] [i_11 - 1]))) >> ((min((arr_37 [i_11 + 2] [i_11 - 3] [i_11 - 1]), (arr_37 [i_11 - 1] [i_11 - 2] [i_11 - 3]))))));
                        arr_50 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((((0 ? (arr_44 [i_2] [i_2]) : (arr_39 [7] [i_11] [7] [i_2])))) ? ((var_17 ? 3656425950 : (arr_38 [i_11 + 2]))) : (((max(var_13, -25))))))) ? var_16 : (min((arr_48 [i_12] [i_11 + 2] [i_10] [i_2]), (min((arr_12 [i_2]), (arr_39 [i_2] [i_10] [i_11] [2])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
