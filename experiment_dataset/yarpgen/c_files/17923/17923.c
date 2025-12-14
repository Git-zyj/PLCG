/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (min(var_13, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [7] [i_2] [i_0] [i_3] [13] = (arr_8 [i_0] [i_0]);
                                var_16 = (min(var_16, (arr_11 [i_0] [10] [i_2] [i_3])));
                                var_17 ^= ((((((arr_10 [i_4]) ? (arr_10 [i_3]) : (arr_10 [i_3])))) ? (((arr_10 [i_1]) ? (arr_10 [i_1]) : (arr_10 [20]))) : (((arr_10 [i_2]) & (arr_10 [16])))));
                                var_18 = (max(var_18, (((((((arr_5 [i_4] [i_0] [i_2] [1]) ^ (arr_5 [i_0] [i_0] [i_0] [18])))) & (arr_7 [21] [i_1] [i_2] [1]))))));
                            }
                        }
                    }
                    arr_14 [i_0] = ((((((max((arr_8 [i_0] [i_2]), var_14)) & (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (min(((max(38893, -117))), (arr_9 [2] [i_1] [14] [i_2]))) : ((min(4822822701139259057, -4822822701139259058)))));
                    var_19 = (max((((var_1 ? (arr_2 [i_0] [i_1] [1]) : (max(var_11, (arr_11 [12] [i_1] [i_2] [i_2])))))), (min((((var_13 != (arr_6 [4] [i_0] [i_2])))), (((arr_0 [i_1] [1]) ? var_10 : (arr_6 [i_0] [i_0] [i_2])))))));
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
