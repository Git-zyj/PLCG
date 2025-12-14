/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(1, 18329783830295948308))) - ((666483207 ? 116960243413603299 : 113))));
    var_18 = (var_9 != var_7);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = arr_0 [i_0];
        arr_5 [0] [i_0] = ((2147483647 + (((15119915154333501538 + -66) >> (var_16 + 7260764500347240762)))));
        var_19 += (360154120 * var_8);
        arr_6 [1] &= (((((arr_2 [i_0]) << (((arr_2 [i_0]) - 782895789)))) & (((arr_2 [i_0]) & var_15))));
        arr_7 [i_0] = ((((((arr_3 [i_0]) | ((var_0 % (arr_0 [i_0])))))) || (((1 ? ((max((arr_1 [i_0]), 7832))) : var_13)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 = min((arr_8 [i_1] [i_1]), var_9);
        var_21 = (arr_8 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = ((!(((var_2 / (arr_9 [i_1]))))));
        arr_11 [i_1] = (arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_22 += var_7;
        var_23 += (min((arr_9 [2]), (56 > 7847)));
        var_24 = var_4;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 8;i_6 += 1)
                {
                    {
                        var_25 &= ((-(arr_21 [i_6 + 1] [i_6] [i_6 + 3] [i_6 + 3])));
                        var_26 = (((((((((arr_0 [i_5]) - (arr_14 [i_3])))) && (arr_9 [i_6])))) == (!-870158238)));
                        arr_24 [0] = (((min((arr_21 [i_6 - 3] [i_6 - 2] [i_6 + 1] [i_6 - 1]), (arr_19 [i_3]))) + (arr_12 [i_3] [i_3])));
                        var_27 = (((((!(arr_20 [1] [i_4])))) << (var_13 - 2472068956069884091)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    var_28 = (min(var_28, (((!(((((((arr_18 [1] [7]) ? var_9 : var_16))) ? (((max(var_9, (arr_14 [i_3]))))) : ((var_5 ? (arr_28 [i_3] [i_3]) : var_4))))))))));
                    arr_30 [1] [i_7] [9] = (arr_16 [i_3] [i_3]);
                    arr_31 [i_3] [5] [i_3] = (arr_26 [i_3]);
                }
            }
        }
        var_29 &= (-8689020666929287861 && -1557853621);

        for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
        {
            var_30 = (min((52516 + 10286187613178123108), (((!(arr_28 [i_3] [10]))))));
            arr_34 [i_3] &= ((!(arr_18 [4] [4])));
        }
        for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
        {
            var_31 = arr_35 [i_3] [i_3] [i_3];
            var_32 = ((~(arr_22 [5] [i_10 + 1] [i_10 - 1] [i_10 + 2])));
            arr_38 [i_3] = (max((arr_3 [4]), var_12));
        }
    }
    #pragma endscop
}
