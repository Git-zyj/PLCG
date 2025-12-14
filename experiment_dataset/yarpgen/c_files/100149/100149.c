/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = ((-83 + 1494830513) ? 4294967295 : (((var_0 ? (max(0, 100)) : 222))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_22 *= ((arr_4 [0] [i_1 + 1] [i_2]) ? (var_2 <= var_6) : (((arr_2 [i_2]) ? -2822627415 : (!4))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_23 = ((var_0 ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_2 - 1]) : var_17));
                        arr_11 [4] [4] [i_1] [i_2] [i_3] [i_2] = ((var_13 ? 1 : var_16));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] [i_4] = 1494830518;
                        arr_16 [i_4] = (2800136769 == 0);
                        var_24 = 4294967295;
                        var_25 = (max(var_25, (((4288731418 ? 1 : (arr_10 [i_4] [7] [i_0]))))));
                    }
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        var_26 = (max((max((max(9965, 19428)), (arr_14 [i_0] [i_1] [3] [i_1] [3]))), (!var_9)));
                        arr_21 [i_1 - 1] [i_1 - 1] = ((2800136773 & ((max((((!(arr_10 [i_2] [i_1 + 1] [i_0])))), (max(var_10, var_0)))))));
                    }
                }
            }
        }
        var_27 = (max(var_27, (((((arr_10 [i_0] [i_0] [i_0]) == (arr_10 [i_0] [i_0] [i_0])))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = 1494830513;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_28 = (((((arr_13 [i_7] [i_7] [i_8] [i_8] [i_8]) / 25359)) <= (min((arr_17 [i_8] [i_7] [i_7] [i_7] [i_6] [i_6]), var_12))));
                    arr_33 [i_6] [i_6] [i_6] [i_6] = ((((((!var_1) ^ 0))) ? ((107 ? 2800136791 : 3889799465)) : (((min(-1518982526, (((var_19 > (arr_1 [i_7] [i_6]))))))))));
                }
            }
        }
        arr_34 [i_6] = ((((((arr_10 [i_6] [i_6] [i_6]) | 17987112))) && 205));
        var_29 -= (arr_26 [i_6] [1]);
        arr_35 [1] = (((!var_6) <= (max(1504808317, (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6])))));
    }
    var_30 = var_12;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        arr_45 [i_9] [14] [i_11] [i_12] = (var_12 / 4294967295);
                        arr_46 [i_9] [i_10 - 1] [i_11] [i_12] = (((~-855206813) < var_8));
                    }
                    var_31 = (min(var_31, ((max(var_10, (((arr_44 [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]) - 3350835572)))))));
                    var_32 = (((((var_11 ? var_5 : ((6 ? 3121695021 : 1851220411))))) ? ((((arr_36 [i_10 + 1] [i_10 - 1]) ? (arr_37 [i_10 - 1]) : (arr_36 [i_10 - 1] [i_10 + 1])))) : ((~((var_5 ? (arr_44 [i_9] [i_9] [i_9] [i_9] [1]) : 6235863))))));
                }
            }
        }
    }
    #pragma endscop
}
