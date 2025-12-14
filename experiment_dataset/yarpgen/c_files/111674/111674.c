/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((~-var_5) <= var_8));
    var_13 = ((((!((min(var_9, 8225501819557662792))))) ? ((var_10 ? 8225501819557662788 : ((min(var_7, var_8))))) : 10221242254151888824));
    var_14 |= var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = ((((~(((arr_1 [i_0]) ? var_1 : 10221242254151888817)))) % var_2));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_1 - 1] [i_2] [i_3] [i_4] = min((((((arr_2 [i_1] [i_2]) >> (10221242254151888817 - 10221242254151888802))))), (min((min((arr_7 [i_1] [i_2]), 20)), (((var_3 ^ (arr_8 [i_1 - 2] [i_2] [i_2])))))));
                        var_15 = (max(var_15, ((min((min(var_5, (arr_13 [i_1] [i_1] [i_1 - 2] [i_1 - 2]))), (arr_0 [i_3]))))));
                    }
                }
            }
        }
        var_16 = (((((-(var_6 < var_4)))) / (min((min((arr_0 [i_1]), (arr_2 [i_1] [i_1]))), var_8))));
        arr_17 [i_1] |= (((((-(arr_8 [i_1] [i_1] [i_1])))) ? (arr_10 [i_1] [i_1 - 2] [i_1 + 1]) : (((((arr_1 [i_1 + 1]) >= 8225501819557662815)) ? (min((arr_7 [i_1] [i_1]), (arr_11 [14] [i_1] [i_1]))) : (arr_2 [i_1] [i_1])))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_17 = (((var_9 ? (arr_21 [i_5]) : ((var_7 ? 8225501819557662792 : var_6)))) & (((arr_10 [i_5] [i_5] [i_5]) & (arr_9 [i_6]))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    {
                        var_18 = (min(-var_11, (arr_10 [i_8] [i_7] [i_5])));
                        var_19 = ((~((var_6 ? (arr_11 [i_7 + 3] [i_8] [15]) : (arr_11 [i_7 + 2] [i_7 + 2] [i_7 + 2])))));
                        var_20 = (((((arr_1 [i_7 + 1]) / (arr_18 [i_5])))) ? (((var_1 - (arr_22 [i_8 + 1])))) : ((3132565799103193468 / (arr_7 [i_7 - 1] [i_8 - 1]))));
                    }
                }
            }
            arr_29 [i_6] [i_6] [i_5] = (arr_25 [i_5] [1] [i_6] [i_6]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_21 = var_0;
                        var_22 = (min(var_22, ((min((((~255) ? (min(var_4, (arr_5 [i_5] [i_5]))) : (arr_23 [i_5] [i_5] [i_9] [i_10]))), (min((((arr_32 [i_6] [i_6] [i_9] [i_6]) ? -3132565799103193468 : (arr_7 [i_5] [i_10]))), 10221242254151888824)))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
        {
            arr_40 [i_5] [i_11] = ((((-7 ? (arr_35 [i_5] [i_11]) : (arr_22 [i_5]))) ^ (var_11 > var_2)));
            var_23 = (max(var_23, (((-(arr_37 [10] [i_11] [i_5]))))));
        }
        var_24 = min(-7, 1849513104);
        var_25 += (!846450657);
        var_26 = ((2 ? (-2147483647 - 1) : 10221242254151888828));
    }
    var_27 = ((var_2 ? (var_4 & var_7) : (((var_5 >= (min(2147483647, 846450649)))))));
    #pragma endscop
}
