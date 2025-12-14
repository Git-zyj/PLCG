/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(((2553812988105600009 ? var_3 : var_3)), (((!(((4294967295 ? 47 : 31849)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = ((-(((((-(arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : ((-22191 ? var_10 : (arr_0 [1] [i_0])))))));
        arr_2 [i_0] [i_0] = (!(((var_7 ? (arr_1 [i_0]) : 3670294780))));
        var_16 = (((((min((arr_0 [15] [12]), -22191)))) != (((((-22191 ? (arr_1 [i_0]) : (arr_1 [15])))) % (min(var_4, 31849))))));
        arr_3 [i_0] = ((!(((var_6 ? var_2 : (arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_15 [i_4] = 47;
                            var_17 = (arr_6 [i_1] [i_1] [5]);
                            arr_16 [1] [i_4] [i_3] [i_3] [i_3] [7] [i_3] = (arr_6 [3] [i_1 - 1] [i_4 - 2]);
                        }
                    }
                }
            }
            var_18 = (min(var_18, ((((arr_13 [i_1] [i_2] [i_2] [5] [0]) != ((var_6 ? 1128588610834749857 : var_12)))))));
            arr_17 [i_1] = (118 - var_3);
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_19 = (min(var_19, (((0 >> (min((arr_8 [i_1 + 1] [i_1 + 1]), var_10)))))));
            var_20 = (((~var_8) != (min(-1396, ((max((arr_7 [i_1] [i_6] [i_1]), (arr_19 [i_1] [i_1 + 1] [2]))))))));
        }
        var_21 = ((+(((var_3 ? (arr_8 [i_1] [i_1]) : 1)))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        var_22 = ((((((var_9 - (arr_11 [i_1]))))) ? (max((arr_10 [i_1 - 1] [i_1 + 2] [9] [i_1 + 2]), ((min(1, -22191))))) : (((var_1 || var_2) ? ((max(var_5, (arr_27 [i_1 + 2] [i_7] [i_8] [i_9] [i_1])))) : var_1))));
                        arr_29 [i_9] [10] [i_1] [i_1] [i_1] = ((((4041865723 ? var_0 : var_6))) & (((min(-19998, 32767)))));
                    }
                }
            }
        }
        var_23 = ((!((max(((var_0 >> (3430405652189481009 - 3430405652189480996))), ((((arr_28 [i_1] [i_1] [i_1] [i_1 - 1]) && 32763))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_24 = ((!(((var_7 ? 1 : var_9)))));
        arr_32 [i_10] = (arr_6 [i_10] [i_10] [i_10]);
    }
    #pragma endscop
}
