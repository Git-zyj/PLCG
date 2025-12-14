/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [12] [i_1] [12] = (arr_2 [i_0]);
                arr_7 [i_1] = (!((!(arr_0 [i_0 - 1] [i_1 - 1]))));
                var_14 = (max(-1614008427, -115));
                var_15 = ((-(((arr_4 [i_1 - 1] [i_1 - 1] [8]) | ((21740 | (arr_2 [i_0 + 1])))))));
                var_16 = (max(0, ((((-(arr_3 [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            {
                var_17 = (max(((~(max(9933128380338413572, 43795)))), ((~(arr_10 [i_2] [i_2] [i_3 + 4])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_18 = (((0 ? -102 : -10909)));
                            arr_17 [i_2] = ((-((-(arr_2 [i_3 + 4])))));

                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                arr_20 [i_4] [i_6] [i_4] [i_6] [8] = (min(101, (((1 && (-9223372036854775807 - 1))))));
                                var_19 = (min((((var_3 <= (arr_1 [i_3 + 2] [i_3 + 1])))), (min((arr_13 [i_3 - 1] [i_3 + 4] [i_3] [i_3 - 3]), (arr_13 [i_3 - 3] [i_3 + 1] [i_3 + 2] [i_3 - 1])))));
                            }
                            arr_21 [i_5] = (!45086);
                        }
                    }
                }
                arr_22 [i_2] [8] = (((((~(arr_11 [i_3 - 1] [i_3] [i_3 + 1])))) ? ((min(38436, 21741))) : (arr_11 [i_3 - 1] [i_3] [i_3 + 1])));
                arr_23 [i_2] [i_2] [i_2] |= (((arr_11 [i_3 + 1] [i_3 + 2] [i_3 - 2]) ? (((~(arr_19 [i_3 - 2] [0] [i_3 - 3] [i_3 + 3] [0] [i_3 - 3])))) : (max((arr_5 [i_3 + 1] [i_3 - 1] [i_3]), ((-1234593450 ? var_11 : var_4))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 13;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_7] [i_7] [i_7] |= max((arr_32 [i_9 - 3] [i_8 + 2] [i_8] [i_7]), var_0);
                    var_20 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
