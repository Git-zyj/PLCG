/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_12 = 67;
                        var_13 = ((~(arr_1 [i_1] [i_3 + 1])));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_13 [1] [1] [1] [i_4] = ((87 ? 13575949209326531579 : 2113478164));
                        arr_14 [i_0] [i_0] [i_0] [11] [i_4] [i_4] = ((arr_8 [1] [1] [i_1] [20] [i_4]) ? ((~(arr_4 [1] [i_2] [i_4]))) : ((67 ? (arr_12 [15] [i_0] [15] [i_0]) : (arr_5 [i_0] [i_0] [i_2]))));
                    }
                    var_14 -= (((max((arr_3 [i_0]), (arr_3 [i_2]))) % (((arr_3 [i_0]) ? var_6 : (arr_3 [i_0])))));
                    var_15 = (max(var_15, (((((max((((arr_12 [i_0] [i_1] [i_2] [i_2]) ? (arr_1 [6] [6]) : var_3)), (~var_1)))) ? (min((arr_6 [1]), (~var_1))) : (((var_1 ? (arr_10 [1] [i_1] [i_2]) : (arr_10 [i_0] [i_0] [i_0])))))))));
                    var_16 *= (arr_3 [i_0]);
                }
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [18] |= (((-68 ? 81 : ((max(61, 71))))) << (((((10 ? 5815 : -91))) ? 0 : 188)));
                    var_17 -= (!-var_9);
                    var_18 = (!var_9);
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    var_19 &= (arr_18 [8] [i_1] [i_1] [1]);
                    var_20 -= (((((arr_10 [i_1] [i_1] [i_6]) ? 6884266458915874732 : (arr_5 [i_0] [10] [2]))) / (((2181489130 ? var_1 : (arr_10 [i_0] [i_1] [i_6]))))));
                    var_21 = ((-(((arr_7 [i_0] [i_0] [i_0] [12] [i_1] [9]) ? var_4 : var_11))));
                    arr_20 [i_0] [i_6] [14] [i_0] = ((~(arr_4 [i_6 - 2] [i_6 + 3] [i_6])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_24 [i_7] [i_1] [i_7] [i_7] = ((-(-98 - var_6)));
                    var_22 = (min(var_22, ((((arr_3 [i_1]) ? var_11 : (arr_3 [0]))))));
                }
                var_23 = (((min((max((arr_11 [i_0] [i_0] [i_0] [13] [i_1]), var_2)), (((71 ? -96 : 63488))))) % (-115 % 96)));
            }
        }
    }
    var_24 += (((-97 ? 1 : 99)));
    #pragma endscop
}
