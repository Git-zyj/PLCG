/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                arr_8 [i_0] [14] [i_2 + 1] = 7;
                arr_9 [1] [1] [i_0] = 18;
                arr_10 [i_0] [i_1 - 2] [1] = (max((min(13, 417671216)), var_1));
                var_17 = ((!(((13638539577192263040 ? (arr_4 [i_2 + 1]) : (arr_4 [i_2 + 1]))))));
            }
            arr_11 [i_0] [i_0] = ((-23455 ? (((-((23455 ? 57456 : 1))))) : (min(35860, 145253789))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_18 = ((min((arr_4 [i_3]), (!1188260368))));
            var_19 = (max(7, ((((max((arr_13 [i_3]), (arr_0 [i_0] [i_3])))) + var_0))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        var_20 = (arr_13 [i_3]);
                        arr_19 [i_0] [i_0] [i_3] [i_3] [i_4] [i_5 + 2] = (max(((max((arr_12 [i_0] [i_4 + 1] [i_5]), (arr_12 [i_0] [i_3] [i_4])))), ((65523 ? 22 : 42080))));
                    }
                }
            }
            var_21 = (((2866231526 / var_10) ? 242 : ((-((13 ? 11915 : 0))))));
        }
        var_22 -= (10022 * -7132);
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_23 += (arr_15 [i_6] [1] [1] [i_6]);
        var_24 = (min(var_24, (((-((23458 ? 53646 : 1428735779)))))));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_25 = 7;
        var_26 = (!1);
        arr_26 [i_7] = ((!(65519 >> 1)));
        arr_27 [i_7] = var_9;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_32 [i_8] = 1393610576;
        var_27 = (((((6 ? ((49200 ? var_1 : (arr_15 [i_8] [1] [2] [i_8]))) : ((max(1073741760, 31586)))))) ? ((((((arr_22 [10]) ? var_5 : var_9))) ? (min((arr_18 [i_8] [i_8] [i_8] [i_8]), -2174328630695687836)) : (((max(3287, 65527)))))) : ((((~-18877) ? (((var_6 ? (arr_13 [2]) : var_12))) : var_9)))));
        var_28 = (min((max(var_8, ((1207580628052418784 ? var_12 : var_8)))), ((-(arr_30 [i_8])))));
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 12;i_11 += 1)
            {
                {
                    var_29 -= (((((11592 - ((var_0 ? var_13 : 8834890923854569969))))) ? (max(-1073741738, -1699565923)) : ((((max(49210, (arr_24 [i_10])))) ? 1 : ((1830657005 ? var_15 : (arr_34 [i_11])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_47 [i_9] [4] [i_9 + 1] [i_13] [i_9] = ((!(((((arr_34 [i_9 - 3]) / var_9))))));
                                arr_48 [i_9] [12] [i_13] [i_12] [i_13] = -var_12;
                            }
                        }
                    }
                    arr_49 [i_9] [i_9 + 1] [i_9] [i_9 + 1] = ((var_7 ? ((1 ? -21466 : 29815)) : 10117806434628860945));
                    var_30 = (max((((var_15 + 9223372036854775807) >> ((((16306 ? var_12 : var_10)) - 56)))), (((arr_45 [i_9 - 4] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9] [i_9]) | (arr_23 [i_9 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
