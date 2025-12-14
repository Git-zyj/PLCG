/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((!(((var_10 ? -6 : 3610898741)))))), var_0));
    var_12 = (min(var_12, ((max(((var_7 ? var_6 : 229)), ((((var_9 + 229) ? (max(var_5, 232)) : var_1))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max((max(var_9, (arr_0 [i_0] [i_0]))), ((max(26, 26)))));
        arr_3 [i_0] = ((3007923363914683764 ? ((1454 ? (((var_0 ? var_2 : var_10))) : ((3007923363914683764 ? var_1 : 27)))) : -207));
        var_14 += (max(((3007923363914683764 ? (max(1430395623, 18)) : (~1430395614))), 2252364003));
        var_15 = (min(var_15, var_5));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [3] [i_1] = ((arr_2 [i_1 - 1]) ? var_1 : (!121));
        arr_9 [i_1] = (((((10 ? 0 : 228))) ? 0 : ((27 ? 0 : 10924275500381663884))));
        arr_10 [i_1] = ((var_5 ? (arr_2 [i_1 - 1]) : -40));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_16 *= var_2;
        var_17 -= (max((((arr_1 [2]) ? var_5 : var_9)), (((4294967293 ? 28 : 65529)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_24 [10] [i_3] [i_5] = 9;
                    var_18 = (min(var_18, (((~(65525 * 0))))));
                    var_19 &= (((238 & (arr_19 [i_3] [i_3]))));
                    var_20 = (var_4 & var_1);
                    arr_25 [i_3] [i_4 - 3] [i_5] = (~0);
                }
            }
        }
        arr_26 [i_3] [i_3] = ((-8556646106164651875 ? 2864571681 : (arr_16 [i_3])));
        arr_27 [i_3] [i_3] = (((var_9 >= 1430395607) ? (var_10 / var_4) : ((1 ? var_7 : 20))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    var_21 = ((((2491937271 ? 5 : 12)) >> (((~8556646106164651875) + 8556646106164651880))));
                    arr_35 [i_3] [i_3] [i_7] [i_6] = (0 | 1);
                }
            }
        }
    }
    #pragma endscop
}
