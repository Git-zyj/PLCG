/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 &= (((((0 ? 1 : 1))) * 2642694859988159241));
    }
    var_15 -= ((~(((-32326 * var_3) >> (var_0 - 201)))));

    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_5 [15] = ((var_8 >> (!-2642694859988159233)));
        var_16 = ((~(arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_17 = (arr_8 [i_2]);
        arr_9 [6] = 12702054480588652130;
        arr_10 [i_2] [i_2] = arr_7 [4];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_18 = (max(var_18, (arr_11 [0])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_19 = (min(var_19, ((((arr_16 [0] [i_5 + 2] [1]) * (arr_16 [i_3] [i_5 + 2] [i_5 + 2]))))));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_20 = ((-(arr_23 [i_5 - 1] [i_5] [i_5 - 1] [i_5])));
                            var_21 = var_2;
                            var_22 = (2589844181 >= 18446744073709551603);
                            var_23 = (((arr_20 [i_5] [6] [i_5]) << (((~var_0) + 242))));
                            arr_26 [i_5] [i_4] [2] [i_5 + 1] [2] [i_7] [i_5 + 1] = ((+((((arr_0 [i_3]) || (arr_12 [i_4]))))));
                        }
                        var_24 = 31;
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_25 = 1896777519;
                        var_26 = ((var_8 >= (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5 + 2])));
                    }
                    var_27 = (798 != 24575);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_32 [i_9] = (123861607 - 14599);
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    var_28 = (arr_33 [i_10] [i_9]);
                    var_29 = (arr_37 [i_9] [i_11]);
                }
            }
        }
    }
    var_30 = var_5;
    #pragma endscop
}
