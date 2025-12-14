/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = (min((((max(3458576260468293500, var_4)))), (((((var_0 ? var_10 : var_2))) ? 43 : var_4))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 *= (!206);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 -= (((arr_3 [i_1] [i_0]) ? (arr_1 [i_1]) : (((((var_13 ? (arr_4 [i_0]) : (arr_5 [i_0] [i_0]))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (arr_3 [i_1] [i_2]);
                        var_21 = (min(var_21, (((!(~203))))));
                        var_22 = (max((arr_11 [i_2]), ((((arr_11 [i_0]) ? var_9 : 8384512)))));
                        var_23 = (arr_9 [i_0] [i_0] [i_0] [i_3] [12] [i_3]);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_24 = 43;
            var_25 = var_15;
            var_26 = (max((((-63 + (arr_11 [i_0])))), (14988167813241258115 - var_6)));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_27 = (max(var_27, 255));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_28 = (arr_16 [i_0]);
                        var_29 = (arr_12 [i_6] [i_5]);
                    }
                }
            }
        }
        var_30 -= arr_1 [i_0];

        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_31 = ((((4194303 ? var_9 : (arr_7 [i_0] [i_0]))) >> ((40 ? 20 : (arr_1 [i_8])))));
            var_32 = (max(var_32, ((((arr_18 [i_0] [i_8] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_8]))))));

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_33 = (((arr_18 [i_9] [i_9] [i_9]) * (((((arr_1 [i_0]) == (arr_16 [i_9])))))));
                var_34 = (((arr_12 [i_8] [i_8]) ? (arr_12 [i_0] [i_8]) : 6578675261637071590));
                var_35 = 127;
            }
        }
    }
    var_36 = var_0;
    #pragma endscop
}
