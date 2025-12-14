/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((!((((arr_0 [i_0] [i_0]) ? (((arr_2 [i_1]) ? (arr_3 [0]) : (arr_1 [i_0]))) : (!32767)))))))));
                var_11 += (min(113, 231));
            }
        }
    }
    var_12 = (-26 / -1571414173);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_13 += ((-((((-(arr_8 [i_3] [i_3] [i_3]))) + (arr_11 [i_2] [i_3] [12])))));
                arr_12 [i_3] [i_3] = (arr_7 [8]);
                var_14 = ((arr_8 [i_2] [i_2] [i_2]) - (((arr_8 [i_3] [i_3] [i_3]) ? (arr_8 [i_2] [i_3] [i_3]) : (arr_8 [i_3] [i_3] [i_3]))));
                arr_13 [i_3] [i_2] = (arr_11 [1] [i_3] [i_3]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_19 [i_5] [i_5] [i_4] = (((arr_16 [i_4] [i_4] [i_5]) * (((arr_16 [i_4] [i_5] [i_5]) - (arr_16 [i_5] [i_5] [i_4])))));
                var_15 = (arr_17 [i_5] [i_5] [i_4]);
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_16 = (((((-(((arr_22 [i_4] [i_5] [i_7] [i_8]) ? (arr_18 [i_4]) : (arr_25 [i_4] [i_6])))))) > (min((((arr_25 [i_5] [i_6]) & (arr_17 [i_4] [i_4] [i_8]))), ((((arr_26 [i_4] [i_4] [i_6] [i_7] [18]) ? (arr_14 [5] [i_6]) : (arr_16 [i_4] [i_4] [i_4]))))))));
                                var_17 = (((((min((arr_14 [i_8] [i_5]), (arr_22 [i_6] [i_6] [i_6] [i_6])))) ? (22 | 4294967289) : (((max(0, 43093)))))));
                            }
                        }
                    }
                }
                var_18 = (max(var_18, ((((arr_14 [i_4] [i_5]) <= (143 <= 105))))));
                arr_29 [i_4] = ((((((arr_22 [8] [i_5] [i_5] [i_5]) != ((0 >> (((arr_17 [13] [18] [i_4]) - 2923232437248657201))))))) % (arr_20 [i_4] [i_4] [i_4])));
            }
        }
    }
    #pragma endscop
}
