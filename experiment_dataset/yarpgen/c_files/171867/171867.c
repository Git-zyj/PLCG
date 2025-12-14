/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_8, ((~(var_2 ^ var_8)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (((-27775 ? var_0 : (arr_7 [i_0] [i_3 - 3] [i_3] [i_3 - 3]))))));
                        var_14 += (arr_9 [18] [i_2] [i_2] [i_2]);
                        var_15 &= (arr_5 [i_0] [i_1] [i_2] [i_3 - 3]);
                    }
                }
            }
            var_16 = (arr_7 [i_0] [i_1] [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_22 [i_0] [i_5] [i_6] = (((arr_19 [19] [19] [i_5] [i_4] [i_0]) ? (arr_19 [12] [20] [1] [i_6] [i_7]) : (arr_19 [i_0] [i_4] [i_5] [i_6] [4])));
                            var_17 = (((arr_14 [i_0] [i_0] [10]) ? (arr_14 [9] [i_4] [i_4]) : (arr_14 [9] [i_4] [i_5])));
                            var_18 = (min(var_18, 1));
                            arr_23 [i_4] [i_4] = (((arr_19 [i_5] [i_6] [i_5] [14] [i_0]) ^ -1181988459));
                        }
                        arr_24 [14] [i_0] [i_0] [i_0] = arr_7 [i_0] [i_4] [20] [i_0];
                        var_19 = (((arr_15 [1] [i_6] [i_6] [14]) ? (!var_7) : (0 - 4183742295)));
                    }
                    arr_25 [i_0] [i_4] [i_4] [i_4] = (((((arr_6 [i_0]) ? (arr_6 [i_4]) : (arr_6 [i_0]))) != ((0 ? 1 : 16))));
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            arr_29 [i_0] [i_8 - 1] = (!73);
            var_20 ^= ((60215 ? (arr_16 [i_0] [i_8] [1] [1]) : (arr_27 [i_8 + 1])));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_33 [15] = ((+((0 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_11))));
            var_21 = 6231256438212244362;
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_22 = (((max((1832442975900626869 % var_1), ((~(arr_26 [1] [i_10]))))) == (((((var_8 && 1) == (arr_7 [i_10] [i_0] [i_0] [i_0])))))));
            arr_38 [i_0] [i_10] [i_0] = (arr_5 [i_0] [9] [1] [i_10]);
        }
    }
    #pragma endscop
}
