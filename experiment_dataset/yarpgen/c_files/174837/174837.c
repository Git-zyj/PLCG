/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [9] [i_3] [i_0] = (max((((((((-127 - 1) ? 127 : 127))) ? ((12654 | (arr_13 [i_0] [8] [2]))) : (((arr_7 [i_0] [i_0] [i_4]) ? (arr_12 [i_0]) : var_9))))), ((-(((arr_8 [i_0]) | (arr_15 [i_4] [i_3] [i_3] [i_2 + 1] [11] [i_0])))))));
                                var_20 = ((~(((arr_5 [10] [i_1]) ? (arr_6 [2] [i_2 + 1] [1]) : (((-127 - 1) - var_10))))));
                                arr_17 [i_2] [i_1] [i_2] [9] [i_4] [i_4] [i_4] = (((((((arr_4 [i_0]) ? 107 : var_19))) ? (((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (arr_14 [i_4] [i_2] [12]))))) : (arr_10 [i_3 - 1] [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1]))) & 0);
                            }
                        }
                    }
                    var_21 = (((((((arr_9 [i_0]) > (arr_11 [1] [i_2] [i_2 - 1] [i_2 + 1]))))) * ((5540921228699179687 << (127 - 125)))));
                    arr_18 [i_0] [i_1] = ((((-1 == ((-34 % (arr_12 [7]))))) ? 7 : (1 == 1)));
                }
            }
        }
    }
    var_22 = ((max(((1 ? 1669012756 : -1071255583)), (((var_8 ? 1 : 2147483647))))));
    #pragma endscop
}
